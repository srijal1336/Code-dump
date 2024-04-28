#include <stdio.h>
int main ()
{
    
    int age;float marks;char gender;char str[20];
    printf("enter your age:");
    scanf("%d", &age);
    printf("enter marks:");
    scanf("%f", &marks);
    printf("enter gender M or F:");
    scanf("%c", &gender);
    printf("enter your name:");
    scanf("%s", &str);
    printf("the name is %s, the gender is %c, the age is %d, the marks is %f ");
    return 0;
    
}
