//command line argument //argc and argv //atoi() //atof()
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a, b, result;
    char op;

    if (argc != 4)
    {
        printf("Usage: %s >number1<  >operator<  >number2<\n", argv[0]);
        return 1;
    }
    a = atoi(argv[1]);
    op = argv[2][0];
    b = atoi(argv[3]);

    switch (op)
    {
        case '+':
            result = a + b;
            break;

        case '-':
            result = a - b;
            break;

        case '*':
            result = a * b;
            break;

        case '/':
            if (b == 0)
            {
                printf("Division by zero is not allowed\n");
                return 1;
            }
            result = a / b;
            break;

        default:
            printf("Invalid operator\n");
            return 1;
    }
    printf("Result = %d\n", result);
    return 0;
}
