SELECT SUM(CT.population)
FROM city AS CT, country AS CY
WHERE (CT.CountryCode = CY.Code) AND (CY.continent = 'Asia')