#include <stdio.h>

int main() {
    int age;

    // Ask the user to enter age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check the age group
    if (age < 18) {
        printf("Jr. Kid\n");
    } else if (age >= 18 && age < 25) {
        printf("College going\n");
    } else if (age >= 25 && age < 40) {
        printf("Career oriented\n");
    } else if (age >= 40 && age < 60) {
        printf("Middle age\n");
    } else if (age >= 60) {
        printf("Old age\n");
    } else {
        printf("Invalid age\n");
    }

    return 0;
}
