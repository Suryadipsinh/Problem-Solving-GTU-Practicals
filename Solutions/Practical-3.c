/*
Practical-3 Write a program to calculate simple interest (i = (p*r*n)/100 )
i = Simple interest
p = Principal amount
r = Rate of interest
n = Number of years
*/

// Solution

float i,p,r,n;
printf("Enter the Principal Amount: ");
scanf("%f",&p);
printf("\nEnter the Rate of Interest: ");
scanf("%f",&r);
printf("\nEnter the Duration: ");
scanf("%f",&n);
i = (p * r * n)/100;
printf("\nSimple Interest = %f",i);

/*
Explanation

This program that calculates simple interest using its formula. Values are in float.
*/

