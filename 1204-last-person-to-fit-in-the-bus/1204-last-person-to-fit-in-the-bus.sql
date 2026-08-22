# Write your MySQL query statement below
select
x.person_name
from
(select
person_name,
sum(weight) over(order by turn) as running
from queue) as x
where x.running<=1000
order by x.running desc 
limit 1