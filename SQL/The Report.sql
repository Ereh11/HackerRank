SELECT CASE WHEN G.Grade >= 8 THEN S.Name ELSE NULL END, G.Grade, S.Marks

FROM Students S, Grades G

WHERE S.Marks BETWEEN Min_Mark AND Max_Mark

ORDER BY G.Grade DESC, S.Name;