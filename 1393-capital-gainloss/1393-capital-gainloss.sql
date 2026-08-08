# Write your MySQL query statement below
select
buy.stock_name,
sell.s-buy.c as capital_gain_loss
from
(select
stock_name,
sum(price) as c
from stocks
where operation='Buy'
group by stock_name
) as buy
join
(select
stock_name,
sum(price) as s
from stocks
where operation='Sell'
group by stock_name) as sell
on buy.stock_name=sell.stock_name
