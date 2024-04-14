# Write your MySQL query statement below
select e1.employee_id, e1.department_id
From Employee e1
WHERE primary_flag='Y'
UNION
select e2.employee_id, e2.department_id
From Employee e2
Group by employee_id
HAVING count(employee_id) = 1 