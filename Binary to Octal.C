#include <stdio.h>
#include <string.h>
#include <math.h>
void binaryToOctal(char binary[]) {
    int len = strlen(binary);
    int octalNumber = 0, decimalNumber = 0, base = 1;
    for (int i = len - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimalNumber += base;
        }
        base *= 2;
    }
    base = 1;
    while (decimalNumber > 0) {
        octalNumber += (decimalNumber % 8) * base;
        decimalNumber /= 8;
        base *= 10;
    }

    printf("Octal number: %d\n", octalNumber);
}
int main() {
    char binary[100];

    printf("Enter a binary number: ");
    scanf("%s", binary);

    binaryToOctal(binary);

    return 0;
}
