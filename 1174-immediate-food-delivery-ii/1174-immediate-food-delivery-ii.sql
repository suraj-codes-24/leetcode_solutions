# Write your MySQL query statement below
select
round(
        sum(
            case when order_date =customer_pref_delivery_date then 1 else 0 end)
        /count(customer_id) *100
    ,2)  as immediate_percentage 
from
(select *,
row_number() over (partition by customer_id order by order_date asc) as windo
from delivery
)as a
where windo=1 