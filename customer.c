#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100

struct Customer {
    char *name;
    char *phoneNumber;
};

int main() {
    struct Customer customer;

    customer.name = malloc(MAX_LENGTH * sizeof(char));
    if (customer.name == NULL) {
        printf("Memory allocation failed for name.\n");
        return 1;
    }
    customer.phoneNumber = malloc(MAX_LENGTH * sizeof(char));
    if (customer.phoneNumber == NULL) {
        printf("Memory allocation failed for phone number.\n");
        free(customer.name);
        return 1;
    }

    printf("Enter your name: ");
    scanf("%s", customer.name);

    printf("Enter your phone number: ");
    scanf("%s", customer.phoneNumber);

    printf("\nName: %s\n", customer.name);
    printf("Phone Number: %s\n", customer.phoneNumber);

    free(customer.name);
    free(customer.phoneNumber);

    return 0;
}
