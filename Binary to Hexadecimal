#include <stdio.h>
#include <string.h>
#include <math.h>

// Function to convert a binary digit group to a hexadecimal character
char binaryToHex(char binary[]) {
    int decimal = 0;

    for (int i = 0; i < 4; i++) {
        decimal = decimal * 2 + (binary[i] - '0');
    }

    if (decimal < 10) {
        return decimal + '0';
    } else {
        return decimal - 10 + 'A';
    }
}

// Function to convert a binary number to a hexadecimal number
void binaryToHexadecimal(char binary[]) {
    int len = strlen(binary);
    int remainder = len % 4;

    // Padding the binary number with leading zeros if necessary
    if (remainder != 0) {
        for (int i = 0; i < 4 - remainder; i++) {
            printf("0");
        }
    }

    // Convert the binary number to hexadecimal
    for (int i = 0; i < len; i += 4) {
        char group[5] = "0000";

        // Handle the last group if it has fewer than 4 digits
        for (int j = 0; j < 4; j++) {
            if (i + j < len) {
                group[j] = binary[i + j];
            }
        }

        printf("%c", binaryToHex(group));
    }

    printf("\n");
}

int main() {
    char binary[100];

    printf("Enter a binary number: ");
    scanf("%s", binary);

    binaryToHexadecimal(binary);

    return 0;
}
