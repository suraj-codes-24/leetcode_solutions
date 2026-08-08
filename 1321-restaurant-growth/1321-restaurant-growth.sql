# Write your MySQL query statement below
select
y.visited_on,
y.amount,
y.average_amount
from
(select
x.visited_on,
sum(x.sum_per_day) over( ROWS BETWEEN 6 PRECEDING AND CURRENT ROW) as amount,
round(avg(x.sum_per_day) over(  ROWS BETWEEN 6 PRECEDING AND CURRENT ROW),2) as average_amount,
row_number() over() as rw
from(select
visited_on,
sum(amount) as sum_per_day
from customer
group by visited_on) as x) as y
where y.rw>=7