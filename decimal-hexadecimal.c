#include <stdio.h>

int main() {
    int num;
    
    // Prompt user for input
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    
    // Display the number in hexadecimal format
    printf("The hexadecimal equivalent is: %X\n", num);
    
    return 0;
}
