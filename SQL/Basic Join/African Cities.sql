SELECT CITY.name
FROM CITY, COUNTRY
WHERE CITY.countrycode = COUNTRY.code AND COUNTRY.continent = 'Africa';