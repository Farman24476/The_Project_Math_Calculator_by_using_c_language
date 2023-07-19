#include <stdio.h>
int main() {
    char name[100];
    float num1, num2;
    printf("Hi! Welcome to Math Calculator.\n");
    printf("Please enter your name: ");
    scanf("%[^\n]", name);
    printf("\nHello %s! Welcome to Math Calculator.\n\n", name);
    printf("To begin, please enter two numbers.\n");
    printf("First number: ");
    scanf("%f", &num1);
    printf("Second number: ");
    scanf("%f", &num2);
    printf("\nYou have entered %.2f and %.2f.\n", num1, num2);
    float addition = num1 + num2;
    float subtraction = num1 - num2;
    float multiplication = num1 * num2;
    float division = num1 / num2;
    printf("The addition of %.2f and %.2f is equal to %.2f.\n", num1, num2, addition);
    printf("The subtraction of %.2f and %.2f is equal to %.2f.\n", num1, num2, subtraction);
    printf("The multiplication of %.2f and %.2f is equal to %.2f.\n", num1, num2, multiplication);
    printf("The division of %.2f and %.2f is equal to %.2f.\n\n", num1, num2, division);
    printf("Thank you for using Math Calculator!\n");
    return 0;
}
