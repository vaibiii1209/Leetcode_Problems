# Write your MySQL query statement below
select d.name as Department , e.Name as Employee , e.Salary 
from employee e , department d
where e.departmentid = d.id
and
e.salary= (select max(salary) from employee e where e.departmentid = d.id)