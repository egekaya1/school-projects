#include <stdio.h>

int main(void) {
    int num1, num2, temp;

    // Prompt the user to enter two numbers
    printf("Enter num1: ");
    scanf("%d", &num1);
    
    printf("Enter num2: ");
    scanf("%d", &num2);

    // Display the original values
    printf("Original values: num1=%d, num2=%d\n", num1, num2);

    // Swap the values using a temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Display the swapped values
    printf("Swapped values: num1=%d, num2=%d\n", num1, num2);

    return 0;
}
