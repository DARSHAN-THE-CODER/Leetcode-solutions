# Write your MySQL query statement below
select weather.id as ID from weather JOIN weather w ON DATEDIFF(weather.recordDate, w.recordDate) = 1 
and weather.temperature > w.temperature;