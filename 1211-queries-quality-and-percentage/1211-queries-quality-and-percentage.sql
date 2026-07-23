SELECT
    query_name,
    ROUND(SUM(rating / position) / COUNT(query_name), 2) AS quality,

    round(
        (   SUM(IF(rating<3, 1, 0))/
            COUNT(query_name)
        )*100,2
        ) as poor_query_percentage 
FROM queries
GROUP BY query_name;