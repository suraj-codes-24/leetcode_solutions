SELECT DISTINCT
    x.customer_id
FROM (
    SELECT
        customer_id,
        transaction_date,

        DATEDIFF(
            MAX(transaction_date) OVER (PARTITION BY customer_id),
            MIN(transaction_date) OVER (PARTITION BY customer_id)
        ) AS days,

        COUNT(*) OVER (
            PARTITION BY customer_id
        ) AS total_trnx,

        SUM(
            CASE
                WHEN transaction_type = 'refund' THEN 1
                ELSE 0
            END
        ) OVER (
            PARTITION BY customer_id
        ) AS count_refund_trnx

    FROM customer_transactions
) AS x
WHERE x.days >= 30
  AND 100 * x.count_refund_trnx < 20 * x.total_trnx
  AND x.total_trnx >= 3
ORDER BY x.customer_id;