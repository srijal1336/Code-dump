#include<stdio.h>
int main()
{
    float P,T,R,res;
    printf("Enter p,t and r: ");
    scanf("%f %f %f", &P, &T, &R);

    res = (P*T*R)/100;
    printf("%f",res);
    return 0;
}