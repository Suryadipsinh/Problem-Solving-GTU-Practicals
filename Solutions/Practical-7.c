/*
Practical-7 Write a C program to find out the distance travelled by the equation d = ut + at^2
*/

        int ut,a,t,d;
            	printf("Enter the initial Velocity: ");
            	scanf("%d",&ut);
            	printf("Enter Accelaration: ");
            	scanf("%d",&a);
            	printf("Enter Time: ");
            	scanf("%d",&t);
            	d=ut+a*pow(t,2);
            	printf("Distance: %d",d);

/* Explanation

This program finds the distance through given formula. Takes input as initial velocity, accelaration, 
time and then give output as distance. 
*/
