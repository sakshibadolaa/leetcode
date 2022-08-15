# Write your MySQL query statement below
SELECT Person.firstname, person.lastname, Address.city, Address.state FROM Person LEFT JOIN Address on Person.personId = Address.personID;