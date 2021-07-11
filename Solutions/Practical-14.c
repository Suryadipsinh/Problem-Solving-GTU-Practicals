/*
Practical-14 Write a C program to read no 1 to 7 and print relatively day Sunday to Saturday.
*/

int i;
/* Code Area Begins */
	printf("Enter number between 1 to 7: ");
	scanf("%d",&i);
	switch(i) {
	case 1: printf("Sunday");
            		break;
                        case 2: printf("Monday");
                        	break;
                        case 3: printf("Tuesday");
                        	break;
                        case 4: printf("Wednesday");
                        	break;
                        case 5: printf("Thursday");
                        	break;
                        case 6: printf("Friday");
                        	break;
                        case 7: printf("Saturday");
                        	break;
                        default: printf("Wrong Input");
                        	break;
            }

/*
Explanation
This program uses switch cases to print week days and also uses 
the ‘break’ to get out of switch case
*/
