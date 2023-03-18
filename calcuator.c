// Calculator using c
#include <stdio.h>
int main()
{
    int choice, option;
    printf("-----Welcome to calculator using C-----\n");
    printf("1-Addition      2-Subtraction       3-Division      4-Multiplication\n");

operation:
    printf("Please select your desired operation: \n");
    while (1)
    {
        int num1, num2, sum;
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("Enter the first number: \n");
            scanf("%d", &num1);
            printf("Enter the second number: \n");
            scanf("%d", &num2);
            sum = num1 + num2;
            printf("The sum is %d \n", sum);
            printf("Do you want to perform another operation?\n 1 or 0\n");
            scanf("%d", &option);
            if (option == 1)
            {
                goto operation;
            }
            else
                printf("Thank you for using calculator!");
                break;
        }

        else if (choice == 2)
        {
            int num1, num2, diff;
            printf("Enter the first number: \n");
            scanf("%d", &num1);
            printf("Enter the second number: \n");
            scanf("%d", &num2);
            diff = num1 - num2;
            printf("The difference is %d \n", diff);
            printf("Do you want to perform another operation?\n 1 or 0\n");
            scanf("%d", &option);
            if (option == 1)
            {
                goto operation;
            }
            else
                printf("Thank you for using calculator!");
                break;
        
        }

        else if (choice == 3)
        {
            int num1, num2, div;
            printf("Enter the first number: \n");
            scanf("%d", &num1);
            printf("Enter the second number: \n");
            scanf("%d", &num2);
            div = num1 / num2;
            printf("The quotient is %d\n", div);
            printf("Do you want to perform another operation?\n 1 or 0\n");
            scanf("%d", &option);
            if (option == 1)
            {
                goto operation;
            }
            else
                printf("Thank you for using calculator!");
                break;
        }

        else if (choice == 4)
        {
            int num1, num2, mul;
            printf("Enter the first number: \n");
            scanf("%d", &num1);
            printf("Enter the second number: \n");
            scanf("%d", &num2);
            mul = num1 * num2;
            printf("The product of two numbers is %d\n", mul);
            printf("Do you want to perform another operation?\n 1 or 0\n");
            scanf("%d", &option);
            if (option == 1)
            {
                goto operation;
            }
            else
                printf("Thank you for using calculator!");
                break;
        }

        else
            printf("Please enter a valid choice-\n");
    }
}