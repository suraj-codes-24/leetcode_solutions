# Write your MySQL query statement below
select
a.product_id ,
a.year as first_year ,
a.quantity,
a.price
from
(select
product_id ,
min(year) as first_year ,
quantity,
price
from sales
group by product_id)as t
join sales as a
on a.year=t.first_year and a.product_id=t.product_id;
