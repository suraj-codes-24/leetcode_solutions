# Write your MySQL query statement below
select
a.user_id as buyer_id,
a.join_date,
ifnull(x.ct,0) as orders_in_2019 
from users as a
left join
(select
buyer_id,
count(*) as ct
from orders where year(order_date)=2019
group by buyer_id)as x
on a.user_id=x.buyer_id