SELECT
    rs.book_id,
    b.title,
    b.author,
    b.genre,
    b.pages,
    MAX(rs.session_rating) - MIN(rs.session_rating) AS rating_spread,
    round(1.0 * SUM(
        CASE
            WHEN rs.session_rating <= 2
              OR rs.session_rating >= 4
            THEN 1
            ELSE 0
        END
    ) / COUNT(rs.session_id),2) AS polarization_score
FROM reading_sessions rs
JOIN books b
    ON rs.book_id = b.book_id
GROUP BY rs.book_id, b.title, b.author, b.genre, b.pages
HAVING COUNT(rs.session_id) >= 5
   AND MAX(rs.session_rating) >= 4
   AND MIN(rs.session_rating) <= 2
   AND polarization_score>=0.6
ORDER BY polarization_score DESC, b.title DESC;