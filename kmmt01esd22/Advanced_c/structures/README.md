#Date:08-11-22; Topic:structures

1) Take two layers (two source files, producer.c , consumer.c & one header file layer.h). In producer.c, define a structure variable , create its data and send it to consumer.c, via
	1) Call by Value
	2) Call by Reference
	in consumer.c , print the data of the structure in a neat format.
	in layer.h file create the below structure template.
	struct student {
	 int ID;
	 char name[30];
	 float per;
	}"

2) Define a student template with below information.
ID, name, marks of 6 subjects as an array, fathername, day ,month & year of birth, day,month&year of joining, percentage.
Initialize a student variable with appropriate data and print all members. Write a function that takes the structure as argument , reads the data using scanf, calculates the percentage of marks for the student and update percentage member. write a print function to print the data

3) Create an array of students using the student template from Q2 and read the data for all students.

- Implement a date comparison function that takes 2 date structures as arguments and returns 1 or 0 to indicate which date is elder.
- using the above function, findout and print the name of the eldest of all the students by sending their date of birth members as argument to above function.
- Find the topper out of all students and print his name and father name and marks and total marks in a seperate function that takes the array as argument.
- Print How many students got first class (total marks above 60% ) and print all their names.

4) return a structure with area and perimeter of a circle from a function that takes radius as input. Print area and perimeter in main function.

5) return a structure with addition, subtraction, multiplication, quotient and reminder of 2 integers, sent to a function as arguments. Quotient should be a floating point result. All the results to be printed in main function.

