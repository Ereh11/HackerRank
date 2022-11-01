DECLARE @p INT
SET @p = 1;

WHILE @p <= 20
BEGIN
    SELECT REPLICATE('* ', @p)
    SET @p = @p + 1;
END