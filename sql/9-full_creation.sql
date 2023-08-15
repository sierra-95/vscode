-- create table
CREATE TABLE IF NOT EXISTS second_table(
	id INT,
	name VARCHAR(256),
	score INT
	);
DELETE FROM second_table 
WHERE score=10;
INSERT INTO second_table(id,name,score)
VALUES
(1,'John ',10);
UPDATE second_table
SET name=NULL
WHERE score=13;
