/*
Practical-19 Write a program to generate first n number of Fibonacci series
*/


ivoid printFibonacciNumbers(int n)
{
    int f1 = 0, f2 = 1, i;
 
    if (n < 1)
        return;
    printf("%d ", f1);
    for (i = 1; i < n; i++) {
        printf("%d ", f2);
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
}
 
int main()
{
    printFibonacciNumbers(7);
    return 0;
}

/*
Explanation:
This program prints n fibonacci numbers. it takes input as n and 
then if n is less than one then it returns and for n>1 it will run
for loop & we will assign f1 + f2 to next.
*/

