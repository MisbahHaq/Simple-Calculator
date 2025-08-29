#include <stdio.h>
#include <math.h>

void print_menu();
double division(double, double);
double modulus(int, int);

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
            fprintf(stderr, "Invalid Menu Choice\n");
            continue;
        }

        if (choice == 5)
        {
            int a, b;
            printf("\nPlease enter the first integer: ");
            scanf("%d", &a);
            printf("Now enter the second integer: ");
            scanf("%d", &b);

            int modResult = modulus(a, b);
            if (b != 0)
                printf("\nResult of Operation is: %d\n", modResult);
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
        case 6:
            result = pow(first, second);
            break;
        }

        if (!isnan(result))
        {
            printf("\nResult of Operation is: %.2f\n", result);
        }
    };

    return 0;
}

double division(double a, double b)
{
    if (b == 0)
    {
        fprintf(stderr, "Invalid Argument for Division\n");
        return NAN;
    }
    else
    {
        return a / b;
    }
}

double modulus(int a, int b)
{
    if (b == 0)
    {
        fprintf(stderr, "Invalid Argument for Modulus\n");
        return 0;
    }
    else
    {
        return a % b;
    }
}

void print_menu()
{
    printf("\n\n-----------------------------------------\n");
    printf("\nWelcome to Simple Calculator\n");
    printf("\nChoose one of the following options:\n");
    printf("\n1. Add");
    printf("\n2. Subtract");
    printf("\n3. Multiply");
    printf("\n4. Divide");
    printf("\n5. Modulus");
    printf("\n6. Power");
    printf("\n7. Exit\n");
    printf("\nNow, enter your choice: ");
}
