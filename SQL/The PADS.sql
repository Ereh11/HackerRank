SELECT CONCAT(Name, '(', LEFT(occupation, 1), ')')
FROM OCCUPATIONS
ORDER BY Name;

SELECT 'There are a total of', COUNT(*) AS CO, 
       CONCAT(LOWER(LEFT(Occupation, 1)), SUBSTRING(Occupation, 2), 's', '.')
FROM OCCUPATIONS
GROUP BY Occupation
ORDER BY CO;
