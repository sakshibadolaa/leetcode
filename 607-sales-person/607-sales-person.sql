# Write your MySQL query statement below
select name from salesperson 
where sales_id 
not in( select o.sales_id  from  orders o,company c where c.com_id= o.com_id and c.name='red')