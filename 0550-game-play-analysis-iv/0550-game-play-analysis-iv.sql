SELECT
    ROUND(
        COUNT(t.player_id) /
        (
            SELECT COUNT(DISTINCT player_id)
            FROM Activity
        ),
        2
    ) AS fraction
FROM
(
    SELECT
        player_id,
        MIN(event_date) AS min_date
    FROM Activity
    GROUP BY player_id
) AS t
JOIN Activity AS b
ON b.player_id = t.player_id
AND b.event_date = DATE_ADD(t.min_date, INTERVAL 1 DAY);