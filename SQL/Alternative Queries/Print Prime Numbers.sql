DECLARE @N INT
DECLARE @ANS VARCHAR(1000)
SET @N = 2

WHILE @N < 1000
 BEGIN
    DECLARE @I INT
    DECLARE @OK INT
    SET @I = 2
    SET @OK = 1
    WHILE (@I <= @N/2 AND @OK = 1)
     BEGIN
            IF @N % @I = 0 
               SET @OK = 0
            ELSE 
               SET @I = @I + 1
     END
    IF @OK = 1 
      SET @ANS = CONCAT(@ANS, '&', @N)
    SET @N = @N + 1
 END
 
 SELECT SUBSTRING(@ANS, 2, LEN(@ANS))











