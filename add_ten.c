#include <stdio.h>

int main() {
    int num, result;

    // Ask user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Add 10 to the input number
    result = num + 10;

    // Display the result
    printf("The result is: %d\n", result);

    return 0;
}
