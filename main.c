#include<stdio.h>
#include"second.c"

int main()
{
    int a;
    printf("________________WELCOME_______________\n");
    customer();
    printf("How many Dishes would you order ? : ");
    scanf("%d",&a);
    switchcase(a);
    
    printf("\n\n\n\n\n\t________________BILL________________:\n\n\n\tName : %s\n\tPhone Number : %s\n\n",name,phoneNumber);

    for(int x = 0 ; x < 5 ; x++)
    {
        if(qt[x][0] ==0 )
        {
            continue ;
        }
 
        switch(x)
        {
            case 0:
            {
                printf("\t________________DOSA :       %d    = %d/-\n", qt[0][0],qt[0][0]*30);
                break;
            }
            case 1:
            {             
                printf("\t________________IDDLI :      %d    = %d/-\n", qt[1][0],qt[1][0]*20);
                break;
            }
            case 2:
            {
                printf("\t________________NOODLES :    %d    = %d/-\n", qt[2][0],qt[2][0]*25);
                break;
            }
            case 3:
            {
                printf("\t________________UPMA :       %d    = %d/-\n", qt[3][0],qt[3][0]*20);
                break;
            }
            case 4:
            {
                printf("\t________________RASAGULLA :  %d    = %d/-\n", qt[4][0],qt[4][0]*25);
                break; 
            }

            
        }
    }
    printf("\tTOTAL : rs.%d" ,qt[0][0]*30+qt[1][0]*20+qt[2][0]*25+qt[3][0]*20 +qt[4][0]*25);

}