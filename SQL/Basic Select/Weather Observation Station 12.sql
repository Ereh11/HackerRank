SELECT DISTINCT CITY
FROM STATION
WHERE CITY NOT LIKE '[iouea]%' AND CITY NOT LIKE '%[iouea]';