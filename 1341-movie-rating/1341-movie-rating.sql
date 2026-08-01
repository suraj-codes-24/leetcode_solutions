
(
SELECT
    u.name AS results
FROM users AS u
JOIN movierating AS mr
ON u.user_id = mr.user_id
GROUP BY u.user_id, u.name
ORDER BY COUNT(*) DESC, u.name
LIMIT 1
)

UNION all

(
SELECT
    m.title AS results
FROM movies AS m
LEFT JOIN movierating AS mr
ON m.movie_id = mr.movie_id
AND mr.created_at >= '2020-02-01'
AND mr.created_at < '2020-03-01'
GROUP BY m.movie_id, m.title
ORDER BY AVG(mr.rating) DESC, m.title
LIMIT 1
);