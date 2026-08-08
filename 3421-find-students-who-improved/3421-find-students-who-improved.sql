# Write your MySQL query statement below
select distinct
x.student_id,
x.subject,
x.first_score,
x.latest_score
from(select
student_id,
subject,
first_value(score) over(partition by student_id , subject order by exam_date) as first_score ,
last_value(score)over(partition by student_id,subject order by exam_date ROWS BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED FOLLOWING )as latest_score 
from scores) as x
where x.latest_score>x.first_score
order by x.student_id,x.subject