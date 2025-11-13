#include <stdio.h>

int main() {
    int n, i;
    int t1 = 0, t2 = 1, nextTerm;

    // Ask user for number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci Series up to %d terms:\n", n);

    for (i = 1; i <= n; ++i) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\n");


    return 0;
}
