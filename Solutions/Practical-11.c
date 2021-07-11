/*
Practical-11 Write a C program to check whether the entered character is capital, small letter, digit or any special character.
*/

char c;
	printf("Enter the Character: ");
	scanf("%c",&c);
	if(isupper(c))
	printf("Given char is UpperCase");
            else if(islower(c))
            	printf("Given char is LowerCase");
            else if(isdigit(c))
            	printf("Given char is Digit");
            else
            	printf("Given character is Special Char");

/*

Explanation

This is a simple program that decides whether the entered character is uppercase, 
lowercase or digit with the use of inbuilt functions in C language like
isupper(), islower(), isdigit() etc. 
(note: we should add #include <ctype.h> header file)

*/


