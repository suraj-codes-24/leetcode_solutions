# Write your MySQL query statement below
select
e_id.unique_id,
e.name
from employeeuni as e_id 
right join employees as e
on e_id.id=e.id
