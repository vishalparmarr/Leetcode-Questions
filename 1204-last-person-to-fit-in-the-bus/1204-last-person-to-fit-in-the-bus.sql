# Write your MySQL query statement below
WITH cumulative_weights AS (
    SELECT person_name,
           SUM(weight) OVER (ORDER BY turn) AS total_weight
    FROM Queue
),
valid_people AS (
    SELECT person_name,
           total_weight,
           CASE 
               WHEN total_weight <= 1000 THEN 1 
               ELSE 0 
           END AS can_board
    FROM cumulative_weights
)

SELECT person_name
FROM valid_people
WHERE can_board = 1
ORDER BY total_weight DESC
LIMIT 1;
