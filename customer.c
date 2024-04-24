#include <stdio.h>

#define MAX_LENGTH 100

struct Customer {
    char name[MAX_LENGTH];
    char phoneNumber[MAX_LENGTH];
};

int main() {
    struct Customer customer;

    printf("Enter your name: ");
    scanf("%s", customer.name); // Input name

    printf("Enter your phone number: ");
    scanf("%s", customer.phoneNumber); // Input phone number

    printf("\nName: %s\n", customer.name); // Print name
    printf("Phone Number: %s\n", customer.phoneNumber); // Print phone number

    return 0;
}
