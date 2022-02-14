#include<stdio.h>
#include<stdlib.h>
int main()
{
int num1, num2, choice;
while(1)
    {
        printf("\n Menu Driven Program in c");
        printf("\n 1.Addition");
        printf("\n 2.Subtraction");
        printf("\n 3.Multiplication");    
        printf("\n 4.Division");
        printf("\n 5.exit");
        printf("\n Enter Choice:");
        scanf("%d",&choice);    
    if(choice>0 && choice<6)
    {
    if (choice==1)
        {
            printf("\n Enter 1st number: ");
            scanf("%d",&num1);
            printf("\n Enter 2nd number: ");
            scanf("%d",&num2);
            printf("\n %d + %d = %d",num1,num2,num1+num2);
        }
    if (choice==2)
        {
            printf("\n Enter 1st number: ");
            scanf("%d",&num1);
            printf("\n Enter 2nd number: ");
            scanf("%d",&num2);
            printf("\n %d - %d = %d",num1,num2,num1-num2);
        } 
    
    if (choice==3)
        {
            printf("\n Enter 1st number: ");
            scanf("%d",&num1);
            printf("\n Enter 2nd number: ");
            scanf("%d",&num2);
            printf("\n %d * %d = %d",num1,num2,num1*num2);
        } 
     
    
    if (choice==4)
        {
            printf("\n Enter 1st number: ");
            scanf("%d",&num1);
            printf("\n Enter 2nd number: ");
            scanf("%d",&num2);
            if(num2==2)
            printf("\n Denominator cannot be zero");
            else
            {
                printf("\n %d / %d = ",num1,num2);
                printf("%d",num1/num2);
            }
        }
    if(choice==5)
        exit(0);
    }            
    else printf("\n Wrong choice");
    }
    return 0;
}
