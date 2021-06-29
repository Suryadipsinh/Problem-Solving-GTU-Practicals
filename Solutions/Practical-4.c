/*
Practical-4 Write a C program to interchange two numbers.
*/

//Solutionn

int a,b,temp;
printf("Enter two numbers: ");
scanf("%d %d",&a,&b);
printf("\nBefore Interchange: A=%d B=%d",a,b);
temp = a;
a=b;
b=temp;
printf("\nAfter Interchange: A=%d B=%d",a,b);

/* Explanation
This program creates a temporary variable(temp). Then we assign :
Step 1. Value of first no, into temp.
Step 2. Value of second no. into first no.
Step 3. Value of temp into second no.

*/
