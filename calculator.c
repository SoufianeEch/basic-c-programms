#include <stdio.h>
#include <stdbool.h>

int main(){

    char choice = '\0';
    int num1 = 0;
    int num2 = 0;
    float result = .0F;
    int running = true;

    printf("\n-------------CALCULATOR-------------\n");

    while (running)
    {
        printf("choose an operation (+, -, x, /): ");
        scanf(" %c", &choice);
        
        printf("num#1 = ");
        scanf("%d", &num1);
        printf("num#2 = ");
        scanf("%d", &num2);

        switch (choice){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case 'x':
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0){
                printf("Error division by zero\n");
                continue;
            }
            result = (float)num1 / num2;
            break;
        default:
            break;
        }
        // printf("result = %.2f\n", result);

        if (result == (int)result){
            printf("result = %d\n", (int)result);
        } else {
            printf("result = %.2f\n", result);
        }

        printf("Continue another operation (y/n): ");
        scanf(" %c", &choice);
        
        running = choice == 'y' || choice == 'y';
    }
    
    printf("Calculator closed\n");
    return 0;
}