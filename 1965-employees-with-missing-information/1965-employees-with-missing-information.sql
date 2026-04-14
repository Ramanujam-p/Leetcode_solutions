(
    SELECT employee_id FROM Employees
    MINUS
    SELECT employee_id FROM Salaries
)

UNION

(
    SELECT employee_id FROM Salaries
    MINUS
    SELECT employee_id FROM Employees
);