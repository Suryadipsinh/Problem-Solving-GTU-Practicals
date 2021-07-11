/*
Practical-12 Write a program to read marks from keyboard and your program should 
display equivalent grade according to the following table(if else ladder)
Marks Grade
100 - 80 Distinction
79 - 60 First Class
59 - 40 Second Class
< 40 Fail
*/

int marks;
	printf("Enter Marks: ");
	scanf("%d",&marks);
	if(marks>=80 && marks <100)
	printf("Distinction");
            else if(marks>=60 && marks < 80)
            	printf("First Class");
            else if(marks >=40 && marks <60)
            	printf("Second Class");
            else if(marks < 40)
            	printf("Fail");

/*
Explanation

This program will display grade according to below criteria using if-else ladder.
Marks Grade
100 - 80 Distinction
79 - 60 First Class
59 - 40 Second Class
< 40 Fail
*/


