#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n");
    printf("                                  --------------------------------------------------------\n");
    printf("                                  |               Welcome to MATH HELPER!                 |\n");
    printf("                                  --------------------------------------------------------\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("This program will help you do your math homework.\n");
    printf("It can do basic and advanced math.\n");
    printf("\n");
    printf("\n");
    printf("\n");

    char operation;
    int choice;
    printf("Choose an operation:\n");
    printf("\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("\n");
    scanf("%c", &operation);

    switch(operation) {
        case '1':
            system("cls");
            printf("ADDITION \n");
            printf("\n");
            double number1, number2;
            printf("First number: \n");
            scanf("%lf", &number1);
            printf("Second number: \n");
            scanf("%lf", &number2);
            printf("\n");
            printf("%.lf + %.lf = %.lf", number1, number2, number1 + number2);
            break;
        case '2':
            system("cls");
            printf("SUBTRACTION");
            printf("\n");
            double number11, number22;
            printf("First number: \n");
            scanf("%lf", &number11);
            printf("Second number: \n");
            scanf("%lf", &number22);
            printf("\n");
            printf("%.lf - %.lf = %.lf", number11, number22, number11 - number22);
            break;
        case '3':
            system("cls");
            printf("MULTIPLICATION");
            printf("\n");
            double number111, number222;
            printf("First number: \n");
            scanf("%lf", &number111);
            printf("Second number: \n");
            scanf("%lf", &number222);
            printf("\n");
            printf("%.lf * %.lf = %.lf", number111, number222, number111 * number222);
            break;
        case '4':
            system("cls");
            printf("DIVISION");
            printf("\n");
            double number1111, number2222;
            printf("First number: \n");
            scanf("%lf", &number1111);
            printf("Second number: \n");
            scanf("%lf", &number2222);
            printf("\n");
            printf("%.lf / %.lf = %.lf", number1111, number2222, number1111 / number2222);
            break;
        default:
            system("cls");
            printf("\n");
            printf("Wrong choice");
    }


    return 0;
}
