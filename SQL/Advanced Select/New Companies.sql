SELECT C.company_code, C.founder, COUNT(DISTINCT E.lead_manager_code), COUNT(DISTINCT E.senior_manager_code), COUNT(DISTINCT E.manager_code), COUNT(DISTINCT E.employee_code)

FROM Employee E
INNER JOIN Company C ON  C.company_code = E.company_code

GROUP BY C.company_code, C.founder
ORDER BY C.company_code;