
-- MODULE 5 DATABASE PRACTICAL ASSIGNMENT

-- 1. STUDENT TABLE
CREATE TABLE Student(
Rollno INT PRIMARY KEY,
Name VARCHAR(50),
Branch VARCHAR(50)
);

INSERT INTO Student VALUES
(1,'Jay','Computer Science'),
(2,'Suhani','Electronic and Com'),
(3,'Kriti','Electronic and Com');

-- EXAM TABLE
CREATE TABLE Exam(
Rollno INT,
S_code VARCHAR(10),
Marks INT,
P_code VARCHAR(10),
FOREIGN KEY (Rollno) REFERENCES Student(Rollno)
);

INSERT INTO Exam VALUES
(1,'CS11',50,'CS'),
(1,'CS12',60,'CS'),
(2,'EC101',66,'EC'),
(2,'EC102',70,'EC'),
(3,'EC101',45,'EC'),
(3,'EC102',50,'EC');

-- 2. PERSON TABLE
CREATE TABLE Person(
First_Name VARCHAR(50),
Last_Name VARCHAR(50),
Address VARCHAR(100),
City VARCHAR(50),
Age INT
);

INSERT INTO Person VALUES
('Mickey','Mouse','123 Fantasy Way','Anaheim',73),
('Bat','Man','321 Cavern Ave','Gotham',54),
('Wonder','Woman','987 Truth Way','Paradise',39),
('Donald','Duck','555 Quack Street','Mallard',65),
('Bugs','Bunny','567 Carrot Street','Rascal',58),
('Wiley','Coyote','999 Acme Way','Canyon',61),
('Cat','Woman','234 Purrfect Street','Hairball',32),
('Tweety','Bird','543','Itotlaw',28);

-- 3. EMPLOYEE TABLE
CREATE TABLE Employee(
Employee_id INT PRIMARY KEY,
First_name VARCHAR(50),
Last_name VARCHAR(50),
Salary INT,
Joining_date DATE,
Department VARCHAR(50)
);

INSERT INTO Employee VALUES
(1,'John','Abraham',1000000,'2013-01-01','Banking'),
(2,'Michael','Clarke',800000,'2013-01-01','Insurance'),
(3,'Roy','Thomas',700000,'2013-02-01','Banking'),
(4,'Tom','Jose',600000,'2013-02-01','Insurance'),
(5,'Jerry','Pinto',650000,'2013-02-01','Insurance'),
(6,'Philip','Mathew',750000,'2013-01-01','Services'),
(7,'TestName1','123',650000,'2013-01-01','Services'),
(8,'TestName2','Lname%',600000,'2013-02-01','Insurance');

-- INCENTIVE TABLE
CREATE TABLE Incentive(
Employee_ref_id INT,
Incentive_date DATE,
Incentive_amount INT
);

INSERT INTO Incentive VALUES
(1,'2013-02-01',5000),
(2,'2013-02-01',3000),
(3,'2013-02-01',4000),
(1,'2013-01-01',4500),
(2,'2013-01-01',3500);

-- QUERIES

-- a) Employee name alias
SELECT First_name AS "Employee Name" FROM Employee;

-- b) Name, joining date, salary
SELECT First_name, Joining_date, Salary FROM Employee;

-- c) Order by name asc and salary desc
SELECT * FROM Employee ORDER BY First_name ASC, Salary DESC;

-- d) First name starting with J
SELECT * FROM Employee WHERE First_name LIKE 'J%';

-- e) Department wise maximum salary
SELECT Department, MAX(Salary) FROM Employee GROUP BY Department ORDER BY MAX(Salary);

-- f) Incentive greater than 3000
SELECT e.First_name, i.Incentive_amount
FROM Employee e
JOIN Incentive i ON e.Employee_id = i.Employee_ref_id
WHERE i.Incentive_amount > 3000;

-- 4. SALESPERSON TABLE
CREATE TABLE Salesperson(
SNo INT PRIMARY KEY,
SName VARCHAR(50),
City VARCHAR(50),
Comm FLOAT
);

INSERT INTO Salesperson VALUES
(1001,'Peel','London',0.12),
(1002,'Serres','San Jose',0.13),
(1004,'Motika','London',0.11),
(1007,'Rafkin','Barcelona',0.15),
(1003,'Axelrod','New York',0.10);

-- CUSTOMER TABLE
CREATE TABLE Customer(
CNM INT PRIMARY KEY,
CName VARCHAR(50),
City VARCHAR(50),
Rating INT,
SNo INT
);

INSERT INTO Customer VALUES
(201,'Hoffman','London',100,1001),
(202,'Giovanne','Rome',200,1003),
(203,'Liu','San Jose',300,1002),
(204,'Grass','Barcelona',100,1002),
(206,'Clemens','London',300,1007),
(207,'Pereira','Rome',100,1004);

-- Queries

-- Salespeople in London with commission > 0.12
SELECT SName, City FROM Salesperson WHERE City='London' AND Comm > 0.12;

-- Salespeople in Barcelona or London
SELECT * FROM Salesperson WHERE City='Barcelona' OR City='London';

-- Commission between 0.10 and 0.12
SELECT * FROM Salesperson WHERE Comm > 0.10 AND Comm < 0.12;

-- Customers excluding rating <=100 unless in Rome
SELECT * FROM Customer WHERE Rating > 100 OR City='Rome';
