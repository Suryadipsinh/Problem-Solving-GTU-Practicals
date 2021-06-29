/*
Practical-2 Write a program to find area of triangle(a=h*b*.5)
a = area
h = height
b = base
*/

// Solution

float a,b,h;
printf("Enter the Height of Triangle: ");
scanf("%f",&h);
printf("\nEnter the Base of Triangle: ");
scanf("%f",&b);
a = (h*b)/2;
printf("\nArea of Triangle = %f",a);

/* Explanation

This is a simple program that finds area of triangle using formula. Values as input is taken as float. And answer is also in float. We use %f to represent float.
*/
