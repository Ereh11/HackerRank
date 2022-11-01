SELECT (CASE WHEN G.grade < 8 THEN NULL ELSE S.Name END), G.Grade, S.Marks
FROM Students S, Grades G
WHERE S.Marks BETWEEN G.Min_Mark AND G.Max_Mark
ORDER BY G.Grade DESC, S.Name;