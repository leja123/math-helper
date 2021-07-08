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
    printf("1 .Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("\n");
    scanf("%c", &operation);

    switch(operation) {
        case '1':
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
            printf("SUBSCTRACTION");
            break;
        case '3':
            printf("MULTIPLICATION");
            break;
        case '4':
            printf("DIVISION");
            break;
        default:
            printf("Wrong choice");
    }


    return 0;
}
