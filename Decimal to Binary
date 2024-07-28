#include <stdio.h>

// Function to convert a decimal number to a binary number
void decimalToBinary(int decimal) {
    int binary[32]; // Array to store binary digits
    int index = 0;  // Initialize index to 0

    // Handle the case when the input is 0
    if (decimal == 0) {
        printf("0");
        return;
    }

    // Convert decimal to binary
    while (decimal > 0) {
        binary[index] = decimal % 2;
        decimal /= 2;
        index++;
    }

    // Print binary number in reverse order
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    printf("Binary number: ");
    decimalToBinary(decimal);

    return 0;
}
