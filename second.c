#include<stdio.h>
#include"customer.c"
#include"products.c"

int switchcase(int a);
int switchcase(int a)
{
    int ord;
    for(int x = 0 ; x < a ; x++)
    {
        printf("\n\n\n\n________________YOUR MENU________________\n________________1)DOSA [30/-]\n________________2)IDDLI [20/-]\n________________3)NOODLES [25/-]\n________________4)UPMA [20/-]\n________________5)RASAGULLA [25/-]\nOrder Number : ");
        scanf("%d" , &ord);
        
        products(ord);
    }
}