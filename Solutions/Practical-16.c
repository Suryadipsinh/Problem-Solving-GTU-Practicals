/*
Practical-16 Write a C program to input an integer number and check the last digit of number is even or odd.
*/

int no,ln;
/* Code Area Begins */
	printf("Enter the no");
	scanf("%d",&no);
           	ln = no%10;   //Last Digit of the number
	if(ln % 2 == 0)
	printf("Last Digit of %d is even",no);
            else
            	printf("Last Digit of %d is odd",no);

/*
Explanation:
This program takes input as an integer number and check the last digit of 
number is even or odd. To check the last-digit we divide that number by 2 and then 
checking its reminder for the same. If reminder is 0 then its even number and else it’s odd number.
*/



