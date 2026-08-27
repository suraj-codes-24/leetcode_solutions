# Write your MySQL query statement below
select
p.product_id,
ifnull(b.price,10) as price
from
(select distinct
a.product_id ,
first_value(a.new_price) over(partition by a.product_id order by a.change_date desc)as price
from
(select
product_id ,
new_price ,
change_date
from products 
where change_date <='2019-08-16'
)a)b
right join (select distinct product_id from products)p
on p.product_id=b.product_id