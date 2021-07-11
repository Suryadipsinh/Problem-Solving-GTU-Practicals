/*
Practical-17 Write a C program to find factorial of a given number.
*/


int fact(int n)
{
            	if(n==1)
                            	return 1;
            	else{
                            	return(n*fact(n-1));
            	}
 
}
void main()
{
            	int n;
            	printf("Enter the no: ");
            	scanf("%d",&n);
            	printf("Factorial of %d is %d",n,fact(n));
}

/*
Explanation
This program uses the concept of recursion to find the factorial of the number. 
When a function calls itself then it’s called recursion. In this program we can 
see that fact() function calls itself inside it. This is how we find factorial of a number using recursion.
*/

