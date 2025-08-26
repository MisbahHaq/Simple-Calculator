#include <stdio.h>

void print_menu();

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

        printf("\nPlease enter the first number: ");
        scanf("%lf", &first);

        printf("Now enter the second number");
        scanf("%lf", &second);
    }

    return 0;
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
    printf("\nNow, enter your choice: ");
}