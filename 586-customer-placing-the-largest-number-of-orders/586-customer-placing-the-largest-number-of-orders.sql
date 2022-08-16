# Write your MySQL query statement below
select customer_number from orders   
group by customer_number 
HAVING COUNT(*) = (SELECT MAX(counts) 
                   FROM (SELECT COUNT(*) as counts FROM orders
                         GROUP BY customer_number) as sub)
                         