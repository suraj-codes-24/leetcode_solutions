# Write your MySQL query statement below
select
a.name as Customers
from customers  as a
left join orders as b
on a.id=b.customerid
where b.customerid is null