/*
Practical-8 Write a C program to find that the accepted number is Negative, or Positive or Zero.
*/

int i;
            printf("Enter the Number");
            scanf("%d",&i);
            if(i == 0)
            {
                            printf("Number is Zero");
            }
            else{
                            if(i>0){
                                            printf("Number is Positive");
                            }
                            else{
                                            printf("Number is Negative");
                            }
            }

/* Explanation
This program finds whether number is positive, negative or zero using Nested if else statements.
*/
