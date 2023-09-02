# Write your MySQL query statement below
select name, bonus from employee left join Bonus as b on employee.empid = b.empid where bonus<1000 or bonus is null;