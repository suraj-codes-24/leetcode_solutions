# Write your MySQL query statement below
select
t.employee_id,
e.employee_name,
e.department,
count(*) as meeting_heavy_weeks 
from
(select
m.employee_id,
sum(m.duration_hours) as duration_hours 
from meetings as m
group by m.employee_id,yearweek(meeting_date ,1)
having duration_hours >20 )t
join employees e
on t.employee_id=e.employee_id
group by t.employee_id
having count(*)>=2
order by meeting_heavy_weeks  desc,e.employee_name