SELECT
    x.product_id AS product1_id,
    y.product_id AS product2_id,
    px.category AS product1_category,
    py.category AS product2_category,
    COUNT(DISTINCT x.user_id) AS customer_count
FROM ProductPurchases AS x
JOIN ProductPurchases AS y
    ON x.user_id = y.user_id
   AND x.product_id < y.product_id
JOIN ProductInfo AS px
    ON x.product_id = px.product_id
JOIN ProductInfo AS py
    ON y.product_id = py.product_id
GROUP BY
    x.product_id,
    y.product_id,
    px.category,
    py.category
HAVING COUNT(DISTINCT x.user_id) >= 3
ORDER BY
    customer_count DESC,
    product1_id,
    product2_id;