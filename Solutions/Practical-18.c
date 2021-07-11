/*
Practical-18 Write a program to reverse a number.
*/

int n, rev=0, rem;
            printf("Enter an integer: ");
            scanf("%d",&n);
            while(n!=0)
            {
            	rem = n%10;
            	rev = rev*10+rem;
            	n /= 10;
            }
            printf("\nReversed Number: %d",rev);

/*
Explantion:

In this program we use while loop. While loop will run until n is not equal to zero.
By dividing number by 10 and storing it we can print the reverse number of given number.
*/



