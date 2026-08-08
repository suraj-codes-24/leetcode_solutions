SELECT
    y.visited_on,
    y.amount,
    y.average_amount
FROM
(
    SELECT
        x.visited_on,

        SUM(x.sum_per_day) OVER(
            ORDER BY x.visited_on
            ROWS BETWEEN 6 PRECEDING AND CURRENT ROW
        ) AS amount,

        ROUND(
            AVG(x.sum_per_day) OVER(
                ORDER BY x.visited_on
                ROWS BETWEEN 6 PRECEDING AND CURRENT ROW
            ),
            2
        ) AS average_amount,

        ROW_NUMBER() OVER(
            ORDER BY x.visited_on
        ) AS rw

    FROM
    (
        SELECT
            visited_on,
            SUM(amount) AS sum_per_day
        FROM customer
        GROUP BY visited_on
    ) x
) y

WHERE y.rw >= 7
ORDER BY y.visited_on;