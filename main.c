#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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

    menu:
    printf("\n");
    char operation;
    int choice;
    printf("Choose an operation:\n");
    printf("\n");
    printf("BASIC OPERATIONS:                  b. Triangle perimeter                OTHER FORMULAS:\n");
    printf("1. Addition                        c. Triangle area\n");
    printf("2. Subtraction                     d. Rhombus perimeter\n");
    printf("3. Multiplication                  e. Rhombus area\n");
    printf("4. Division                        f. Cube volume\n");
    printf("                                   g. Cylinder volume\n");
    printf("GEOMETRY FORMULAS:\n");
    printf("5. Square perimeter\n");
    printf("6. Square area\n");
    printf("7. Rectangle perimeter\n");
    printf("8. Rectangle area\n");
    printf("9. Circle perimeter\n");
    printf("a. Circle area\n");
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
            sleep(3);
            goto question;
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
            sleep(3);
            goto question;
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
            sleep(3);
            goto question;
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
            sleep(3);
            goto question;
            break;
        case '5':
            system("cls");
            printf("SQUARE PERIMETER");
            printf("\n");
            double number11111;
            printf("Length of the side: \n");
            scanf("%lf", &number11111);
            printf("\n");
            printf("4 * %.lf = %.lf", number11111, 4 * number11111);
            sleep(3);
            goto question;
            break;
        case '6':
            system("cls");
            printf("SQUARE AREA");
            printf("\n");
            double number111111;
            printf("Length of the side: \n");
            scanf("%lf", &number111111);
            printf("\n");
            printf("%.lf * %.lf = %.lf", number111111, number111111, number111111 * number111111);
            sleep(3);
            goto question;
            break;
        case '7':
            system("cls");
            printf("RECTANGLE PERIMETER");
            printf("\n");
            double rectangle_a;
            printf("Length of the side a: \n");
            scanf("%lf", &rectangle_a);
            double rectangle_b;
            printf("Length of the side b: \n");
            scanf("%lf", &rectangle_b);
            printf("\n");
            printf("2 * %.lf + 2 * %.lf = %.lf", rectangle_a, rectangle_b,2 * rectangle_a + 2 * rectangle_b);
            sleep(3);
            goto question;
            break;
        case '8':
            system("cls");
            printf("RECTANGLE AREA");
            printf("\n");
            double rectangle_aa;
            printf("Length of the side a: \n");
            scanf("%lf", &rectangle_aa);
            double rectangle_bb;
            printf("Length of the side b: \n");
            scanf("%lf", &rectangle_bb);
            printf("\n");
            printf("%.lf * %.lf = %.lf", rectangle_aa, rectangle_bb, rectangle_aa * rectangle_bb);
            sleep(3);
            goto question;
            break;
        case '9':
            system("cls");
            printf("CIRCLE PERIMETER");
            printf("\n");
            double radius;
            printf("What is the circle radius: \n");
            scanf("%lf", &radius);
            printf("\n");
            printf("2 * 3.14 * %.lf = %.lf", radius, 2 * 3.14 * radius);
            sleep(3);
            goto question;
            break;
        case 'a':
            system("cls");
            printf("CIRCLE AREA");
            printf("\n");
            double radius1;
            printf("What is the circle radius: \n");
            scanf("%lf", &radius1);
            printf("\n");
            printf("3.14 * %.lf * %.lf = %.lf", radius1, radius1, 3.14 * radius1 * radius1);
            sleep(3);
            goto question;
            break;
        case 'b':
            system("cls");
            printf("TRIANGLE PERIMETER");
            printf("\n");
            double triangle_a;
            printf("Enter the length of the side a: ");
            scanf("%lf", &triangle_a);
            double triangle_b;
            printf("Enter the length of the side b: ");
            scanf("%lf", &triangle_b);
            double triangle_c;
            printf("Enter the length of the side c: ");
            scanf("%lf", &triangle_c);
            printf("\n");
            printf("%.lf + %.lf + %.lf = %.lf", triangle_a, triangle_b, triangle_c, triangle_a + triangle_b + triangle_c);
            sleep(3);
            goto question;
            break;
        case 'c':
            system("cls");
            printf("TRIANGLE AREA");
            printf("\n");
            double triangle_side;
            printf("What is the length of the triangle's side?");
            scanf("%lf", &triangle_side);
            double triangle_height;
            printf("What is the triangle's height?");
            scanf("%lf", &triangle_height);
            printf("\n");
            printf("%.lf * %.lf / 2 = %.lf", triangle_side, triangle_height, triangle_side * triangle_height / 2);
            sleep(3);
            goto question;
            break;
        case 'd':
            system("cls");
            printf("RHOMBUS PERIMETER");
            printf("\n");
            double rhombus_a;
            printf("What is the length of side a?");
            scanf("%lf", &rhombus_a);
            printf("%.lf * 4 = %.lf", rhombus_a, rhombus_a * 4);
            sleep(3);
            goto question;
            break;
        case 'e':
            system("cls");
            printf("RHOMBUS AREA");
            printf("\n");
            double rhombus_e;
            printf("What is the length of the diagonal e?");
            scanf("%lf", &rhombus_e);
            double rhombus_f;
            printf("What is the length of the diagonal f?");
            scanf("%lf", &rhombus_f);
            printf("%.lf * %.lf / 2 = %.lf", rhombus_e, rhombus_f, rhombus_e * rhombus_f / 2);
            sleep(3);
            goto question;
            break;
        case 'f':
            system("cls");
            printf("CUBE VOLUME");
            printf("\n");
            double cube_a;
            printf("What is the cube length?");
            scanf("%lf", &cube_a);
            double cube_b;
            printf("What is the cube width?");
            scanf("%lf", &cube_b);
            double cube_c;
            printf("What is the cube heigth?");
            scanf("%lf", &cube_c);
            printf("%.lf * %.lf * %.lf = %.lf", cube_a, cube_b, cube_c, cube_a * cube_b * cube_c);
            sleep(3);
            goto question;
            break;
        case 'g':
            system("cls");
            printf("CYLINDER VOLUME");
            printf("\n");
            double cylinder_r;
            printf("WHat is the cylinder's radius?");
            scanf("%lf", &cylinder_r);
            double cylinder_h;
            printf("What is the cylinder's height?");
            scanf("%lf", &cylinder_h);
            printf("3.14 * %.lf * %.lf * %.lf = %.lf", cylinder_r, cylinder_r, cylinder_h, 3.14 * cylinder_r * cylinder_r * cylinder_h);
            sleep(3);
            goto question;
            break;
        default:
            system("cls");
            printf("\n");
            printf("Wrong choice");
            sleep(2);
            goto menu;
            break;
    }

    question:
    printf("\n");
    int answer;
    printf("Wanna go back to the operations menu?  \n");
    scanf("%s", &answer);
    if(answer = 'yes'){
        goto menu;
    }

    return 0;
}
