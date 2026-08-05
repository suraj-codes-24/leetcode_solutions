# Write your MySQL query statement below
select
t.customer_number
from
(select
customer_number,
count(customer_number) as freq
from orders
group by customer_number
order by freq desc) as t
limit 1;