#include<stdio.h>


static int qt[5][1];
int products(int a)
{
    switch(a)
    {
        case 1:
        {
            int a;
            printf("What is the qt you would want : ");
            scanf("%d",&a);
            qt[0][0] = qt[0][0] + a;
            break;
        }
        case 2:
        {
            int a;
            printf("What is the qt you would want : ");

            scanf("%d",&a);
            qt[1][0] = qt[1][0] + a;
            break;
        }
        case 3:
        {
            int a;
            printf("What is the qt you would want : ");
        
            scanf("%d",&a);
            qt[2][0] = qt[2][0] + a;
            break;
        }
        case 4:
        {
            int a;
            printf("What is the qt you would want : ");
            scanf("%d",&a);
            qt[3][0] = qt[3][0] + a;
            break;
        }
        case 5:
        {
            int a;
            printf("What is the qt you would want : ");
            scanf("%d",&a);
            qt[4][0] = qt[4][0] + a;
            break;
        }
        default :
        {
            printf("NOT IN THE MENU");
        }
        
    }
}