# Write your MySQL query statement below
select
s.name
from salesperson as s
left join 
(select 
o.com_id,
o.sales_id
from orders as o
join company as c
on o.com_id =c.com_id 
where c.name='RED')as r
on r.sales_id=s.sales_id
where r.sales_id is null