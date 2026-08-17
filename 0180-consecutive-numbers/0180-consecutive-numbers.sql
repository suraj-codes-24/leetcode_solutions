select distinct
t.num as ConsecutiveNums 
from
(SELECT 
    num,
    LAG(num,1) OVER() AS prev_1,
    LAG(num,2) OVER() AS prev_2
FROM logs)t
where t.num=prev_1 and t.num=prev_2;