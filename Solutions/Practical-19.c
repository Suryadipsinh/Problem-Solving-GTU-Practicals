/*
Practical-19 Write a program to generate first n number of Fibonacci series
*/


int n,a=0,b=1,c,i=0;
            	printf("Enter number: ");
            	scanf("%d",&n);
            	printf("\nFirst %d Fibonaaci Numbers are:\n",n);
            	printf("%d,%d",a,b);
            	while(i<n){
                            	c=a+b;
                            	printf("%d",c);
                            	a=b;
                            	b=c;
                            	i++;
            	}

/*
Explanation:


I guess there is a problem in this program. Because it prints more than required numbers.
I think we should use for loop instead while loop. This problem can be solved easily with for loop.
*/

