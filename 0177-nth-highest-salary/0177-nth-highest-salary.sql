CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
    select
    e.salary
    from
      (select
      salary,
      dense_rank() over(order by salary desc) as rankk
      from employee)as e
      where e.rankk=N
      limit 1

  );
END
