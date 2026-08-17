SELECT 
    p.product_id,
    p.product_name
FROM product p
JOIN (
    SELECT s.product_id
    FROM sales s
    GROUP BY s.product_id
    HAVING MIN(s.sale_date) >= '2019-01-01'
       AND MAX(s.sale_date) <= '2019-03-31'
) z
ON p.product_id = z.product_id;