SELECT
    p.product_id,
    IFNULL(b.price, 10) AS price
FROM
(
    SELECT DISTINCT
        product_id,
        FIRST_VALUE(new_price) OVER (
            PARTITION BY product_id
            ORDER BY change_date DESC
        ) AS price
    FROM products
    WHERE change_date <= '2019-08-16'
) b
RIGHT JOIN
(
    SELECT DISTINCT product_id
    FROM products
) p
ON p.product_id = b.product_id;