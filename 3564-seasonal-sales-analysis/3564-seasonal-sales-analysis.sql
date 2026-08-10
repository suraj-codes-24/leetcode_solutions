# Write your MySQL query statement below
(select
    'Fall' as season,
    y.category,
    y.total_quantity,
    y.total_revenue
    from
    (select
        p.category,
        sum(x.quantity) as total_quantity,
        sum(x.price*x.quantity) as total_revenue
        from
            (select
            s.product_id,
            s.quantity,
            s.price
            from sales as s
            where month(s.sale_date)=9 or month(s.sale_date)=10 or month(sale_date)=11
            )as x
        join products as p
        on x.product_id =p.product_id 
        
        group by p.category) as y
order by y.total_quantity   desc, y.total_revenue desc
limit 1)

union

(select
    'Spring' as season,
    y.category,
    y.total_quantity,
    y.total_revenue
    from
    (select
        p.category,
        sum(x.quantity) as total_quantity,
        sum(x.price*x.quantity) as total_revenue
        from
            (select
            s.product_id,
            s.quantity,
            s.price
            from sales as s
            where month(s.sale_date)=3 or month(s.sale_date)=4 or month(sale_date)=5
            )as x
        join products as p
        on x.product_id =p.product_id 
        
        group by p.category) as y
order by y.total_quantity desc , y.total_revenue desc
limit 1)

union 

(select
    'Summer' as season,
    y.category,
    y.total_quantity,
    y.total_revenue
    from
    (select
        p.category,
        sum(x.quantity) as total_quantity,
        sum(x.price*x.quantity) as total_revenue
        from
            (select
            s.product_id,
            s.quantity,
            s.price
            from sales as s
            where month(s.sale_date)=6 or month(s.sale_date)=7 or month(sale_date)=8
            )as x
        join products as p
        on x.product_id =p.product_id 
        
        group by p.category) as y
order by y.total_quantity  desc , y.total_revenue desc
limit 1)

union


(select
    'Winter' as season,
    y.category,
    y.total_quantity,
    y.total_revenue
    from
    (select
        p.category,
        sum(x.quantity) as total_quantity,
        sum(x.price*x.quantity) as total_revenue
        from
            (select
            s.product_id,
            s.quantity,
            s.price
            from sales as s
            where month(s.sale_date)=12 or month(s.sale_date)=1 or month(sale_date)=2
            )as x
        join products as p
        on x.product_id =p.product_id 
        
        group by p.category) as y
order by y.total_quantity  desc , y.total_revenue desc
limit 1)

