#include<stdio.h>
int main()
{
        int age;
        printf("enter the age: ");
        scanf("%d",&age);
        if(age<=5)
           printf("niachild. ");
         else if(age<=15)
          printf("teenage. ");
         else if(age<=25)
          printf("young dynamic.");
         else if(age<=50)
          printf("middle age. ");
         else
              printf("old age. ");

       return 0;
}

