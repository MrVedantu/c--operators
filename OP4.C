#include <stdio.h>

int main() {
    float price_per_unit, total_price;
    int quantity;

    // Read the price per unit of the product
    printf("Enter the price of the product: ");
    scanf("%f", &price_per_unit);

    // Read the quantity of the product
    printf("Enter the quantity to purchase: ");
    scanf("%d", &quantity);

    // Compute the total price
    total_price = price_per_unit * quantity;

    // Display the total price
    printf("Total price for %d items is: %.2f\n", quantity, total_price);

    return 0;
}
