# Write your MySQL query statement below
SELECT unique_id , name from employees left join employeeuni on employees.id = employeeuni.id;