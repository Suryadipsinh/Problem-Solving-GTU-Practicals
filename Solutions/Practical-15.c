/*
Practical-15 Write a C program to find out the Maximum and Minimum number from given 10 numbers
*/

int i,ar[10],max,min;
	printf("Enter 10 numbers");
	for(i=0;i<10;i++){
	scanf("%d",&ar[i]);
            }
max = ar[0];
            min = ar[0];
            for(i =1;i<10;i++){
            	if(max <ar[i])
            		max = ar[i];
                        if(min >ar[i])
                        	min = ar[i];
            }
            printf("\nMaximum of given array: %d",max);
            printf("\nMinimum of given array: %d",min); 

/*
Explantion:
This program finds the Maximum and Minimum number from given 10 numbers 
using arrays. max = ar[0] means we assume that the first element is maximum and 
then we check that if other elements of that array maximum than max then we assign 
the value of that element in max. As max is the maximum number at the end. 
Same case with minimum number. This is how we find the maximum and minimum numbers.
*/
