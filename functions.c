#include <stdio.h>
#include <conio.h>

int addNumbers(int a, int b); // function prototype

int main()
{
    int n1, n2, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    sum = addNumbers(n1, n2); // function call

    printf("Sum = %d", sum);

    getch();
    return 0;
}

int addNumbers(int a, int b) // function definition
{
    int result;
    result = a + b;
    return result; // return statement
}
