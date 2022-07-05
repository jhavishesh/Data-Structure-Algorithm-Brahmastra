##                                 DBMS TERMINOLOGY

Data | Information | Database | DBMS | Advantage of DBMS | File System | DBMS Architecture | Schema |Instance of DBMS | DATA MODEL | Data Independence | DDL | DML | DCL | TCL | ACID |ER MODEL | Cardinality | Relationship |Candidate,Primary,Unique,Foreign,Alternate,Composite |Generalization | Specialization| Aggregation | Attributes | Relation Algebra |Inner ,Outer ,Left,Right,Full Join| Integrity Constraint | Physical Level,Logical Level,User Level | Normalization | Functional Dependency |Inference Rule| 1NF | 2NF| 3NF| BCNF| Transaction |States of Transaction|DBMS Schedule|Trigger|Stored Procedure | Drop | Truncate | Delete | Rollback | Cursor | Where | Having | SQL View|SQL Index |SQL Sub Queries|SQL Clauses|SQL Aggregate Function|Print duplicate rows in a table|Trigger vs Stored|Denormalization|Primary vs Unique |Entity, Entity Type,Entity Set in DBMS|




## A

https://www.javatpoint.com/dbms-tutorial

## A-01

https://javapapers.com/oops/association-aggregation-composition-abstraction-generalization-realization-dependency/


## B

https://www.geeksforgeeks.org/commonly-asked-dbms-interview-questions/

## C

https://www.edureka.co/blog/interview-questions/dbms-interview-questions


## D

https://practice.geeksforgeeks.org/tracks/placement100-dbms/?batchId=197&tab=1


## E

https://practice.geeksforgeeks.org/tracks/DBMS-Interview-Questions/?batchId=197&tab=1

SQL Interview Questions
1. What is Database?
2. What is DBMS?
3. What is RDBMS? How is it different from DBMS?
4. What is SQL?
5. What is the difference between SQL and MySQL?
6. What are Tables and Fields?
7. What are Constraints in SQL?
8. What is a Primary Key?
9. What is a UNIQUE constraint?
10. What is a Foreign Key?
11. What is a Join? List its different types.
12. What is a Self-Join?
13. What is a Cross-Join?
14. What is an Index? Explain its different types.
15. What is the difference between Clustered and Non-clustered index?
16. What is Data Integrity?
17. What is a Query?
18. What is a Subquery? What are its types?
19. What is the SELECT statement?
20. What are some common clauses used with SELECT query in SQL?
21. What are UNION, MINUS and INTERSECT commands?
22. What is Cursor? How to use a Cursor?
23. What are Entities and Relationships?
24. List the different types of relationships in SQL.
25. What is an Alias in SQL?
26. What is a View?
27. What is Normalization?
28. What is Denormalization?
29. What are the various forms of Normalization?
30. What are the TRUNCATE, DELETE and DROP statements?
31. What is the difference between DROP and TRUNCATE statements?
32. What is the difference between DELETE and TRUNCATE statements?
33. What are Aggregate and Scalar functions?
34. What is User-defined function? What are its various types?
35. What is OLTP?
36. What are the differences between OLTP and OLAP?
37. What is Collation? What are the different types of Collation Sensitivity?
38. What is a Stored Procedure?
39. What is a Recursive Stored Procedure?
40. How to create empty tables with the same structure as another table?
41. What is Pattern Matching in SQL?


## Nth Highest Salary from the Table

select min(salary) from (select distinct(salary)from employee order by salary desc ) where rownums<3

## Copy a table from another Table

select * into new_table from old_table where 1=2;


