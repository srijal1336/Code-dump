#include<stdio.h>
int main()
{
    int n, i=1,Factorial=1;
    printf("enter an integer:");
    scanf("%d", &n);
    if (n<0)
    {
        printf("Enter a positive integer");
    }
    else{ 
        while(i<=n){
            Factorial=Factorial*i;
            i+=1;
        }
        printf("%d is the factorial", Factorial);
    }
return 0;
    }