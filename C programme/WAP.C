#include<stdio.h>
int main()
{
    int userid;
    int pass;
     
     printf("Enter userid and pass:");
     scanf("%d %d", &userid &pass);

     while(pass != 123 && userid != 456){
        printf("enter correct pass and user\n");
        printf("user:");
        scanf("%d", &userid);
        printf("\npass:");
        scanf("%d", &pass);
     }
     printf("done.");
     return 0;
}