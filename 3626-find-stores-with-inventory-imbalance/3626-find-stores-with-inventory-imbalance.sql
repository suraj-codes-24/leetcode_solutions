select
s.store_id,
s.store_name,
s.location,
c.most_exp_product ,
c.cheapest_product ,
round(c.cheapest_product_quantity/c.most_exp_product_quantity ,2)as imbalance_ratio  
from stores as s
natural join
(select
*
from
(select
x.store_id,
x.product_name  as most_exp_product ,
y.most_exp_product_price,
x.quantity as most_exp_product_quantity
from inventory x
natural join
(select
store_id,
max(price) as most_exp_product_price   
from inventory
group by store_id
having count(store_id)>=3)y
where x.price=y.most_exp_product_price) as a

natural join


(select
x.store_id,
x.product_name  as cheapest_product,
y.cheapest_price,
x.quantity as cheapest_product_quantity
from inventory x
natural join
(select
store_id,
min(price) as cheapest_price   
from inventory
group by store_id
having count(store_id)>=3)y
where x.price=y.cheapest_price) as b)c
where c.most_exp_product_quantity<c.cheapest_product_quantity
order by imbalance_ratio desc, s.store_name



