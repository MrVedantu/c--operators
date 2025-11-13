#include <stdio.h>

int main() {
    float price, total_price;
    int quantity;

    // Read the price of the product
    printf("Enter price of the product: ");
    scanf("%f", &price);

    // Read the quantity to be purchased
    printf("Enter quantity to purchase: ");
    scanf("%d", &quantity);

    // Compute the total price
    total_price = price * quantity;

    // Display the total price
    printf("Total price for %d units is: %.2f\n", quantity, total_price);

    return 0;
}
