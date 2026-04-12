/* Write your PL/SQL query statement below */
SELECT e.name AS Employee FROM employee e
INNER JOIN employee m
ON  e.managerId = m.id
WHERE e.salary>m.salary;
