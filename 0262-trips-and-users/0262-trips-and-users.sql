select
x.Day,
round(sum(case when x.st='cancelled_by_driver ' or x.st='cancelled_by_client ' then 1 else 0 end)/count(x.st),2) as `Cancellation rate`
from
(SELECT
    a.client_id as c_id,
    a.driver_id as d_id,
    a.status as st,
    a.request_at AS Day
FROM trips a
JOIN users c
ON a.client_id = c.users_id
JOIN users d
ON a.driver_id = d.users_id
WHERE c.banned = 'No'
AND d.banned = 'No'
) as x
WHERE DATE(x.Day) BETWEEN '2013-10-01' AND '2013-10-03'
group by x.Day