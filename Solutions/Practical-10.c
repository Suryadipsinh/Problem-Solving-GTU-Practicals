/* 
Practical-10 Write a program to read three numbers from a keyboard and find out the maximum 
out of these three. (nested if else)
*/

int a,b,c;
	printf("Enter Three numbers");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
	if(a>c)
            		printf("%d is Maximum",a);
                        else
                        	printf("%d is Maximum",c);
            }
            else {
            	if(b>c)
            		printf("%d is Maximum",b);
                        else
                        	printf("%d is Maximum",c);
            }

/*  Explanation
This is a program to read three numbers from a keyboard and find out the maximum out 
of these three( using nested if else ). 
*/
