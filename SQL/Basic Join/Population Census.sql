SELECT SUM(CITY.population)
FROM CITY , COUNTRY
WHERE CITY.countrycode = COUNTRY.code AND COUNTRY.continent = 'Asia';