-- Write your PostgreSQL query statement below
SELECT pr.product_name,
       s.year,
       s.price
FROM Product as pr
JOIN Sales as s ON pr.product_id = s.product_id