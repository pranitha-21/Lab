#include <stdio.h>

struct item {
    char item_name[50];
    int quantity;
    float price;
    float amount;
};

void calculate_amount(struct item *item) {
    item->amount = item->quantity * item->price;
    printf("Item Name: %s\n", item->item_name);
    printf("Quantity: %d\n", item->quantity);
    printf("Price: %.2f\n", item->price);
    printf("Amount: %.2f\n", item->amount);
}

int main() {
    struct item item1;

    printf("Enter item name: ");
    scanf("%s", item1.item_name);

    printf("Enter quantity: ");
    scanf("%d", &item1.quantity);

    printf("Enter price: ");
    scanf("%f", &item1.price);

    calculate_amount(&item1);

    return 0;
}



