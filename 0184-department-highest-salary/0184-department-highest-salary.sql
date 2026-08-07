# Write your MySQL query statement below
select
n.m as Department,
e.name as Employee,
e.Salary as Salary
from
employee as e
join
(
select
employee.departmentid,
max(salary) as maxm,
department.name as m
from
employee 
join department
on employee.departmentId =department.id 
group by departmentId )as n
on e.departmentid=n.departmentid  and e.salary=n.maxm