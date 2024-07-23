#include <stdio.h>
#include <time.h>

#define NUM_INSTRUCTIONS 1e6

void multiply(int a, int b, int *result) {
    *result = a * b;
}

int main() {
    int a, b, result;
    clock_t start, end;
    double cpu_time_used;

    printf("Enter two integers to multiply: ");
    scanf("%d %d", &a, &b);

    start = clock();
    
    for(int i = 0; i < NUM_INSTRUCTIONS; i++) {
        multiply(a, b, &result);
    }
    
    printf("Result: %d\n", result);

    return 0;
}
