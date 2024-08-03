# Write your MySQL query statement below
SELECT user_id, 
       CONCAT(UPPER(LEFT(name, 1)), LCASE(SUBSTRING(name, 2))) AS name
FROM Users
ORDER BY user_id;