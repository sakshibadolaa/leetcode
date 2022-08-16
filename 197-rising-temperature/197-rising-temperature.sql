# Write your MySQL query statement below
select e.id from weather e, weather e2 where e.temperature > e2.temperature
and TO_DAYS(e.recorddate)-TO_DAYS(e2.recorddate)=1;
