SELECT 
   round(
    SQRT( 
        POW( MAX(LONG_W) - MIN(LONG_W), 2) + POW( MAX(LAT_N) - MIN(LAT_N), 2)
        ), 4) 
AS EU 
FROM STATION;