/*
Practical-20 Write a program to find out the sum of first and last digit of a given number.
*/

int n,lastno,firstno;
	printf("Enter an Integer Number: ");
           	scanf("%d",&n);
           	lastno = n%10;
           	firstno = n;
           	while(firstno>=10){
	firstno /= 10;
            }
            printf("Sum of First and Last Digit of %d is: %d",n,(firstno+lastno));

/*
Explanation:

This program finds the sum of first and last digit of a given number. 
Firstly we will divide the given number by 10 and we’ll get the last number. 
Then we will assign n to first number.Now until first no. is <=10 we will divide 
it by 10 using while loop and then we’ll get the first number. At last, we will add both and print.
*/
