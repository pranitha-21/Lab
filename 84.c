#include <stdio.h>
struct Book {
    char title[100];
    char author[100];
    int year;
    float price;
};

void readBookInfo(struct Book *b) {
    printf("Enter the book title: ");
    fgets(b->title, sizeof(b->title), stdin); 
    printf("Enter the author's name: ");
    fgets(b->author, sizeof(b->author), stdin);
    printf("Enter the publication year: ");
    scanf("%d", &b->year); 
    printf("Enter the price of the book: ");
    scanf("%f", &b->price); 
}


void displayBookInfo(const struct Book *b) {
    printf("\nBook Information:\n");
    printf("Title: %s", b->title);
    printf("Author: %s", b->author);
    printf("Year: %d\n", b->year);
    printf("Price: %.2f\n", b->price);
}

int main() {
    struct Book book;
    readBookInfo(&book);
    displayBookInfo(&book);

    return 0;
}
