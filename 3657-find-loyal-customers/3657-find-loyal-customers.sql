# Write your MySQL query statement below
select distinct
x.customer_id 
from
(select
customer_id,
transaction_date ,
datediff(
    (max(transaction_date) over (partition by customer_id) ),
    (min(transaction_date) over (partition by customer_id))
) as days,
count(*) over(partition by customer_id) as total_trnx,
sum(case when transaction_type ='refund' then 1 else 0 end) over(partition by customer_id) as count_refund_trnx
from customer_transactions ) as x
where x.days >=30 and (100*x.count_refund_trnx <20*x.total_trnx ) and x.total_trnx>=3
order by x.customer_id