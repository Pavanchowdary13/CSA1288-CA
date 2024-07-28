#include <stdio.h>

// Function to convert a decimal number to an octal number
void decimalToOctal(int decimal) {
    int octal[32]; // Array to store octal digits
    int index = 0; // Initialize index to 0

    // Handle the case when the input is 0
    if (decimal == 0) {
        printf("0");
        return;
    }

    // Convert decimal to octal
    while (decimal > 0) {
        octal[index] = decimal % 8;
        decimal /= 8;
        index++;
    }

    // Print octal number in reverse order
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", octal[i]);
    }
    printf("\n");
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    printf("Octal number: ");
    decimalToOctal(decimal);

    return 0;
}
