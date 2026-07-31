# Write your MySQL query statement below
select
e.employee_id,
e.name,
t.ct as reports_count ,
t.average as average_age
from
(select
reports_to as emp_id,
round(avg(age)) as average,
count(reports_to) as ct
from employees
where reports_to is not null
group by reports_to) as t 
join employees as e
on e.employee_id=t.emp_id
order by e.employee_id 
