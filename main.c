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
    printf("5. Square perimeter\n");
    printf("6. Square area\n");
    printf("7. Rectangle perimeter\n");
    printf("8. Rectangle area\n");
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
        case '5':
            system("cls");
            printf("SQUARE PERIMETER");
            printf("\n");
            double number11111;
            printf("Lenght of the side: \n");
            scanf("%lf", &number11111);
            printf("\n");
            printf("4 * %.lf = %.lf", number11111, 4 * number11111);
            break;
        case '6':
            system("cls");
            printf("SQUARE AREA");
            printf("\n");
            double number111111;
            printf("Lenght of the side: \n");
            scanf("%lf", &number111111);
            printf("\n");
            printf("%.lf * %.lf = %.lf", number111111, number111111, number111111 * number111111);
            break;
        case '7':
            system("cls");
            printf("RECTANGLE PERIMETER");
            printf("\n");
            double rectangle_a;
            printf("Lenght of the side a: \n");
            scanf("%lf", &rectangle_a);
            double rectangle_b;
            printf("Lenght of the side b: \n");
            scanf("%lf", &rectangle_b);
            printf("\n");
            printf("2 * %.lf + 2 * %.lf = %.lf", rectangle_a, rectangle_b,2 * rectangle_a + 2 * rectangle_b);
            break;
        case '8':
            system("cls");
            printf("RECTANGLE AREA");
            printf("\n");
            double rectangle_aa;
            printf("Lenght of the side a: \n");
            scanf("%lf", &rectangle_aa);
            double rectangle_bb;
            printf("Lenght of the side b: \n");
            scanf("%lf", &rectangle_bb);
            printf("\n");
            printf("%.lf * %.lf = %.lf", rectangle_aa, rectangle_bb, rectangle_aa * rectangle_bb);
            break;
        default:
            system("cls");
            printf("\n");
            printf("Wrong choice");
    }


    return 0;
}
