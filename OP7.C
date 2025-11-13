#include <stdio.h>

int main() {
    float temp;

    // Read temperature in Celsius
    printf("Enter temperature in Centigrade: ");
    scanf("%f", &temp);

    // Check the temperature range and display the appropriate message
    if (temp > 40) {
        printf("Very Hot\n");
    } else if (temp > 30) {
        printf("Hot\n");
    } else {
        printf("Normal\n");
    }

    return 0;
}
