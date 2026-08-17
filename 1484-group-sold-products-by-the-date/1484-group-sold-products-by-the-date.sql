# Write your MySQL query statement below
select 
x.sell_date,
count(*) as num_sold,
group_concat(x.product order by product) as products
from  (select distinct * from activities) as x
group by x.sell_date