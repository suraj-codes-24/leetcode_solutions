# Write your MySQL query statement below
select 
a.customer_id 
from(
select 
customer_id ,
COUNT(DISTINCT product_key) as total
from customer
group by customer_id)a
where a.total=(select count(product_key) from product);
