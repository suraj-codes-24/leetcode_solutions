# Write your MySQL query statement below

(
    SELECT
        'Fall' AS season,
        y.category,
        y.total_quantity,
        y.total_revenue
    FROM (
        SELECT
            p.category,
            SUM(s.quantity) AS total_quantity,
            SUM(s.price * s.quantity) AS total_revenue
        FROM sales AS s
        JOIN products AS p
            ON s.product_id = p.product_id
        WHERE MONTH(s.sale_date) IN (9, 10, 11)
        GROUP BY p.category
    ) AS y
    ORDER BY y.total_quantity DESC,
             y.total_revenue DESC
    LIMIT 1
)

UNION ALL

(
    SELECT
        'Spring' AS season,
        y.category,
        y.total_quantity,
        y.total_revenue
    FROM (
        SELECT
            p.category,
            SUM(s.quantity) AS total_quantity,
            SUM(s.price * s.quantity) AS total_revenue
        FROM sales AS s
        JOIN products AS p
            ON s.product_id = p.product_id
        WHERE MONTH(s.sale_date) IN (3, 4, 5)
        GROUP BY p.category
    ) AS y
    ORDER BY y.total_quantity DESC,
             y.total_revenue DESC
    LIMIT 1
)

UNION ALL

(
    SELECT
        'Summer' AS season,
        y.category,
        y.total_quantity,
        y.total_revenue
    FROM (
        SELECT
            p.category,
            SUM(s.quantity) AS total_quantity,
            SUM(s.price * s.quantity) AS total_revenue
        FROM sales AS s
        JOIN products AS p
            ON s.product_id = p.product_id
        WHERE MONTH(s.sale_date) IN (6, 7, 8)
        GROUP BY p.category
    ) AS y
    ORDER BY y.total_quantity DESC,
             y.total_revenue DESC
    LIMIT 1
)

UNION ALL

(
    SELECT
        'Winter' AS season,
        y.category,
        y.total_quantity,
        y.total_revenue
    FROM (
        SELECT
            p.category,
            SUM(s.quantity) AS total_quantity,
            SUM(s.price * s.quantity) AS total_revenue
        FROM sales AS s
        JOIN products AS p
            ON s.product_id = p.product_id
        WHERE MONTH(s.sale_date) IN (12, 1, 2)
        GROUP BY p.category
    ) AS y
    ORDER BY y.total_quantity DESC,
             y.total_revenue DESC
    LIMIT 1
);