SELECT
    x.driver_id,
    d.driver_name,
    ROUND(x.first_half_avg,2) AS first_half_avg,
    ROUND(x.second_half_avg,2) AS second_half_avg,
    ROUND(x.second_half_avg - x.first_half_avg,2) AS efficiency_improvement
FROM drivers d
JOIN
(
    SELECT DISTINCT
        driver_id,
        IFNULL(
            AVG(CASE 
                WHEN MONTH(trip_date) BETWEEN 1 AND 6 
                THEN distance_km / fuel_consumed 
            END) OVER(PARTITION BY driver_id),0
        ) AS first_half_avg,

        IFNULL(
            AVG(CASE 
                WHEN MONTH(trip_date) BETWEEN 7 AND 12 
                THEN distance_km / fuel_consumed 
            END) OVER(PARTITION BY driver_id),0
        ) AS second_half_avg
    FROM trips
) x
ON d.driver_id = x.driver_id
WHERE x.first_half_avg != 0
AND x.second_half_avg != 0
AND (x.second_half_avg - x.first_half_avg) > 0
ORDER BY efficiency_improvement DESC, d.driver_name;