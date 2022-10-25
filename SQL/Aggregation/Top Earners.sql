SELECT TOP 1 (salary * months), COUNT(employee_id)
FROM Employee
GROUP BY salary, months
HAVING (salary * months) = (SELECT MAX(salary * months) FROM Employee)