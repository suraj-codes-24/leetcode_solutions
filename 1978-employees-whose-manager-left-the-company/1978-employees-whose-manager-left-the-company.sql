# Write your MySQL query statement below
select 
t.employee_id
from(
select
employee_id,
manager_id
from employees
where salary<30000 and manager_id is not null) as t
left join employees as e
on t.manager_id=e.employee_id
where e.employee_id is null
