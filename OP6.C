#include <stdio.h>

int main() {
    char name[100];
    int age;
    float height;

    // Read name of the person
    printf("Enter your name: ");
    scanf("%s", name);

    // Read age of the person
    printf("Enter your age: ");
    scanf("%d", &age);

    // Read height of the person
    printf("Enter your height in feet: ");
    scanf("%f", &height);

    // Check if the person meets the selection criteria
    if (age >= 18 && age <= 25 && height >= 5.4) {
        printf("%s, you are eligible for selection.\n", name);
    } else {
        printf("%s, you are not eligible for selection.\n", name);
    }

    return 0;
}
