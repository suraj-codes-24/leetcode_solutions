# Write your MySQL query statement below
select
p.product_name,
t.unit
from
products as p
join
(select
product_id,
order_date,
sum(unit) as unit
from orders
where month(order_date)=2 and year(order_date)=2020
group by product_id
having sum(unit)>=100)as t
on p.product_id=t.product_id