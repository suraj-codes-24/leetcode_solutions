# Write your MySQL query statement below
select
x.product_id as product1_id,
y.product_id as product2_id,
x.category as product1_category,
y.category as product2_category,
count(x.user_id) as customer_count 

from(select
a.product_id,
a.user_id,
b.category    
from ProductPurchases as a
natural join ProductInfo as b)as x

join (select
a.product_id,
a.user_id,
b.category    
from ProductPurchases as a
natural join ProductInfo as b) as y

on x.product_id <y.product_id and y.user_id=x.user_id

group by x.product_id,y.product_id 
having count(x.user_id)>=3
order by customer_count desc , product1_id  , product2_id 