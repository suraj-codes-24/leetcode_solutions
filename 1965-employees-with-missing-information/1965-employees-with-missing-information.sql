# Write your MySQL query statement below
select
e.id as employee_id
from
(select
employees.employee_id as id
from employees
left join salaries
on employees.employee_id=salaries.employee_id
where salaries.employee_id is null

union

select
salaries.employee_id as id
from salaries
left join employees
on employees.employee_id=salaries.employee_id
where employees.employee_id is null) as e
order by employee_id
