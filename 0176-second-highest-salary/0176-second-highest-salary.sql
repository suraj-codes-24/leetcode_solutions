# Write your MySQL query statement below
select
max(k.sal) as SecondHighestSalary 
from
(select 
e.salary as sal,
ROW_NUMBER() OVER( 
    ORDER BY e.salary DESC
) AS rw
from (select distinct salary from employee)as e)as k
where k.rw=2