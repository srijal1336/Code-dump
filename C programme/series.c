#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            printf("%d",i*j);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int choice;
    printf("enter a number (1-3): ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
        printf("you entered one.\n");
        break;
        case 2:
        printf("you entered two.\n");
        break;
        case 3:
        printf("you entered three.\n");
        break;
        default:
        printf("invalid choice.\n");
    }
    return 0;
}
#include<stdio.h>
int main{
    
}