SELECT
    dept_max.department_name AS Department,
    emp.name AS Employee,
    emp.salary AS Salary
FROM employee AS emp
JOIN
(
    SELECT
        e.departmentId,
        d.name AS department_name,
        MAX(e.salary) AS highest_salary
    FROM employee AS e
    JOIN department AS d
        ON e.departmentId = d.id
    GROUP BY e.departmentId, d.name
) AS dept_max
ON emp.departmentId = dept_max.departmentId
AND emp.salary = dept_max.highest_salary;