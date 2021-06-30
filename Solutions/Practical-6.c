/*
Practical-5 Write a C program to enter a distance in to kilometre and convert it into meter, feet, inches and centimetres
*/

float meter,inch,cm,feet,km;
printf("Enter the Distance in Kilometer: ");
scanf("%f",&km);
meter = 1000*km;
cm = 100000*km;
inch = 39370*km;
feet = 3281*km;
printf("\nDistance in KiloMeter: %f",km);
printf("\nDistance in Meter: %f",meter);
printf("\nDistance in Centimeter: %f",cm);
printf("\nDistance in Inch: %f",inch);
printf("\nDistance in Feet: %f",feet);


/*  Explanation:

This program converts given distance into KiloMeter, Meter, Centimeter, Inch, Feet.
And prints all of them in different lines.

*/
