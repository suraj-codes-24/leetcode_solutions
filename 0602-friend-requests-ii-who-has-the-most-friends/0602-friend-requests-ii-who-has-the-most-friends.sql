select
t.accepter_id as id,
count(*) as num
from
(# Write your MySQL query statement below
select
accepter_id
from requestaccepted

union all

select
requester_id
from RequestAccepted ) as t
group by t.accepter_id
order by count(*) desc
limit 1