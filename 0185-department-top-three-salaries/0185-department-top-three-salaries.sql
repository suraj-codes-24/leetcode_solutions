# Write your MySQL query statement below
select
x.Department,
x.Employee,
x.salary
from
(
select
b.name as Department,
a.name as Employee,
a.salary as Salary,
dense_rank() over(partition by b.name order by a.salary desc) as rk
from employee as a
join department as b
on a.departmentId =b.id
) as x
where rk<=3