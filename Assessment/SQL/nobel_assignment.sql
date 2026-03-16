
-- Nobel Prize SQL Assignment
-- Database Creation
CREATE DATABASE IF NOT EXISTS nobel_db;
USE nobel_db;

-- Table Creation
CREATE TABLE Nobel_win (
    year INT,
    subject VARCHAR(50),
    winner VARCHAR(100),
    country VARCHAR(50),
    category VARCHAR(50)
);

-- Insert Data
INSERT INTO Nobel_win VALUES
(1970,'Physics','Hannes Alfven','Sweden','Scientist'),
(1970,'Physics','Louis Neel','France','Scientist'),
(1970,'Chemistry','Luis Federico Leloir','France','Scientist'),
(1970,'Physiology','Ulf von Euler','Sweden','Scientist'),
(1970,'Physiology','Bernard Katz','Germany','Scientist'),
(1970,'Literature','Aleksandr Solzhenitsyn','Russia','Linguist'),
(1970,'Economics','Paul Samuelson','USA','Economist'),
(1970,'Physiology','Julius Axelrod','USA','Scientist'),
(1971,'Physics','Dennis Gabor','Hungary','Scientist'),
(1971,'Chemistry','Gerhard Herzberg','Germany','Scientist'),
(1971,'Peace','Willy Brandt','Germany','Chancellor'),
(1971,'Literature','Pablo Neruda','Chile','Linguist'),
(1971,'Economics','Simon Kuznets','Russia','Economist'),
(1978,'Peace','Anwar al-Sadat','Egypt','President'),
(1978,'Peace','Menachem Begin','Israel','Prime Minister'),
(1987,'Chemistry','Donald J. Cram','USA','Scientist'),
(1987,'Chemistry','Jean-Marie Lehn','France','Scientist'),
(1987,'Physiology','Susumu Tonegawa','Japan','Scientist'),
(1994,'Economics','Reinhard Selten','Germany','Economist'),
(1994,'Peace','Yitzhak Rabin','Israel','Prime Minister'),
(1987,'Physics','Johannes Georg Bednorz','Germany','Scientist'),
(1987,'Literature','Joseph Brodsky','Russia','Linguist'),
(1987,'Economics','Robert Solow','USA','Economist'),
(1994,'Literature','Kenzaburo Oe','Japan','Linguist');

-- Query 1: Nobel Prize winners of the year 1970
SELECT year, subject, winner
FROM Nobel_win
WHERE year = 1970;

-- Query 2: Chemistry winners between 1965 and 1975
SELECT year, subject, winner, country
FROM Nobel_win
WHERE subject = 'Chemistry'
AND year BETWEEN 1965 AND 1975;

-- Query 3: Winners whose first name matches 'Louis'
SELECT year, subject, winner, country
FROM Nobel_win
WHERE winner LIKE 'Louis%';

-- Query 4: Subjects not beginning with letter 'P'
SELECT *
FROM Nobel_win
WHERE subject NOT LIKE 'P%'
ORDER BY year DESC, winner ASC;

-- Query 5: 1970 winners with Chemistry and Economics at the end
SELECT year, subject, winner, country, category
FROM Nobel_win
WHERE year = 1970
ORDER BY 
CASE 
    WHEN subject = 'Chemistry' THEN 1
    WHEN subject = 'Economics' THEN 2
    ELSE 0
END,
subject ASC;
