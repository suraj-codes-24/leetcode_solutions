# Write your MySQL query statement below
select
employee_id,
department_id 
from employee
where primary_flag = "Y"

union

select
e.employee_id,
e.department_id
from
(select
employee_id,
count(employee_id) as ct
from employee
group by employee_id) as t
join employee as e
on t.ct=1 and e.employee_id=t.employee_id
