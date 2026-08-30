SELECT
    t.employee_id,
    e.employee_name,
    e.department,
    COUNT(*) AS meeting_heavy_weeks
FROM (
    SELECT
        m.employee_id,
        YEARWEEK(m.meeting_date, 1) AS week,
        SUM(m.duration_hours) AS duration_hours
    FROM meetings AS m
    GROUP BY m.employee_id, YEARWEEK(m.meeting_date, 1)
    HAVING SUM(m.duration_hours) > 20
) t
JOIN employees e
    ON t.employee_id = e.employee_id
GROUP BY
    t.employee_id,
    e.employee_name,
    e.department
HAVING COUNT(*) >= 2
ORDER BY
    meeting_heavy_weeks DESC,
    e.employee_name;