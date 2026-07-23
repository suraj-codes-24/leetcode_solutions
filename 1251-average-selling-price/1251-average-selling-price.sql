SELECT 
    a.product_id,
    ifnull (ROUND(a.num / b.deno, 2),0) AS average_price
FROM
(
    SELECT
        p.product_id,
        ifnull (SUM(p.price * u.units),0) AS num
    FROM prices p
    LEFT JOIN unitssold u
    ON p.product_id = u.product_id
    AND u.purchase_date BETWEEN p.start_date AND p.end_date
    GROUP BY p.product_id
) a
JOIN
(
    SELECT
        p.product_id,
        ifnull (SUM(u.units),0) AS deno
    FROM prices p
    LEFT JOIN unitssold u
    ON p.product_id = u.product_id
    AND u.purchase_date BETWEEN p.start_date AND p.end_date
    GROUP BY p.product_id
) b
ON a.product_id = b.product_id;