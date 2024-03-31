#include <stdio.h>


char name[100];
char phoneNumber[100];
int customer() {


    printf("Enter your name: ");
    scanf("%s", name); // Input name

    printf("Enter your phone number: ");
    scanf("%s", phoneNumber); // Input phone number

    printf("\nName: %s\n", name); // Print name
    printf("Phone Number: %s\n", phoneNumber); // Print phone number

    return 0;
}
