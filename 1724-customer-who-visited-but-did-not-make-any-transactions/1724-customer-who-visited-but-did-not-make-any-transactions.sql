# Write your MySQL query statement below
select customer_id , count(*) AS count_no_trans from visits where visits.visit_id not in (select visit_id from transactions) group by customer_id;