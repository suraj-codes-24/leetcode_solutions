SELECT
    s.store_id,
    s.store_name,
    s.location,
    c.most_exp_product,
    c.cheapest_product,
    ROUND(
        c.cheapest_product_quantity /
        NULLIF(c.most_exp_product_quantity,0),
        2
    ) AS imbalance_ratio
FROM stores s
JOIN
(
    SELECT
        a.store_id,
        a.most_exp_product,
        a.most_exp_product_quantity,
        b.cheapest_product,
        b.cheapest_product_quantity
    FROM
    (
        SELECT
            x.store_id,
            x.product_name AS most_exp_product,
            x.quantity AS most_exp_product_quantity
        FROM inventory x
        JOIN
        (
            SELECT
                store_id,
                MAX(price) AS most_exp_product_price
            FROM inventory
            GROUP BY store_id
            HAVING COUNT(*) >= 3
        ) y
        ON x.store_id = y.store_id
        AND x.price = y.most_exp_product_price
    ) a
    JOIN
    (
        SELECT
            x.store_id,
            x.product_name AS cheapest_product,
            x.quantity AS cheapest_product_quantity
        FROM inventory x
        JOIN
        (
            SELECT
                store_id,
                MIN(price) AS cheapest_price
            FROM inventory
            GROUP BY store_id
            HAVING COUNT(*) >= 3
        ) y
        ON x.store_id = y.store_id
        AND x.price = y.cheapest_price
    ) b
    ON a.store_id = b.store_id
) c
ON s.store_id = c.store_id
WHERE c.most_exp_product_quantity < c.cheapest_product_quantity
ORDER BY imbalance_ratio DESC, s.store_name;