# Write your MySQL query statement below
select
e_id.unique_id,
e.name
from  employees as e
left join employeeuni as e_id
on e.id=e_id.id
