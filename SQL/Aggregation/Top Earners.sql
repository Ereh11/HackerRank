SELECT TOP 1 (months * salary) AS total, COUNT(*)
FROM Employee
GROUP BY months , salary
ORDER BY total DESC;
