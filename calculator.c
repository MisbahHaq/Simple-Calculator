#include <stdio.h>
#include <math.h>

void print_menu();
double division(double, double);
int modulus(int, int);

int main()
{
    int choice;
    double first, second, result;
    while (1)
    {
        print_menu();
        scanf("%d", &choice);
        if (choice == 7)
        {
            break;
        }
        if (choice < 1 || choice > 7)
        {
            fprintf(stderr, "Invalid Menu Choice");
            continue;
        }

        printf("\nPlease enter the first number: ");
        scanf("%lf", &first);

        printf("Now enter the second number: ");
        scanf("%lf", &second);

        switch (choice)
        {
        case 1:
            result = first + second;
            break;
        case 2:
            result = first - second;
            break;
        case 3:
            result = first * second;
            break;
        case 4:
            result = division(first, second);
            break;
        case 5:
            result = modulus(first, second);
            break;
        case 6:
            result = pow(first, second);
            break;
        }
        if (result != NAN)
        {
            printf("\nResult of Operation is: %.2f", result);
        }
    };

    return 0;
}

double division(double a, double b)
{
    if (b == 0)
    {
        fprintf(stderr, "Invalid Argument for Division");
        return NAN;
    }
    else
    {
        return a / b;
    }
}

int modulus(int a, int b)
{
    if (b == 0)
    {
        fprintf(stderr, "Invalid Argument for Modulus");
        return NAN;
    }
    else
    {
        return a % b;
    }
}

void print_menu()
{
    printf("\n Welcome to Simple Calculator\n");
    printf("\nChoose one of the following options:\n");
    printf("\n1. Add");
    printf("\n2. Subtract");
    printf("\n3. Multiply");
    printf("\n4. Divide");
    printf("\n5. Modulus");
    printf("\n6. Power");
    printf("\n7. Exit\n");
    printf("\nNow, enter your choice:\n");
}