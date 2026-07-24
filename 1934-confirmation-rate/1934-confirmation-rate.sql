# Write your MySQL query statement below
select 
s.user_id,
ifnull(round(COUNT(IF(c.action='confirmed', 1, NULL))/count(c.action),2),0.00) as confirmation_rate 
from signups as s
left join confirmations as c
on s.user_id=c.user_id
group by s.user_id
