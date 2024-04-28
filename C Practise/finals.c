
//WAP to reverse the number
/*
#include<stdio.h>
int main(){
    int num;
    printf("enter any number: ");
    scanf("%d", &num);
    int hold= 0;
    int res= 0;
    while(num!=0){
        hold=num%10;
        res=(res*10)+hold;
        num/=10;
    }
    printf("%d", res);
}*/

//Wap to check weither the number is palindrome or not
/*
#include<stdio.h>
int main(){
    int num, number;
    printf("Enter any number to check either it is palindrome or not: ");
    scanf("%d", &num);
    number=num;
    int hold=0;
    int res=0;
    while(num!=0){
        hold=num%10;
        res=(res*10)+hold;
        num/=10;
    }
    if(number==res){
        printf("The given number is palindrome", res);
    }
    else{
        printf("the entered number is not palindrome", res);
    }
}*/

//WAP to find the average of the given digits

/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number to find the average : ");
    scanf("%d", &num);
    int res=0;
    int hold=0;
    int count=0;
    float avg=0;
    while(num!=0){
    count++;
    hold=num%10;
    res=res+hold;
    num/=10;
    }
    avg= res/count;
    printf("the average of the number is %f" , avg);
}*/

//WAP tho check wether the number is armstrong or not

/*#include<stdio.h>
#include<math.h>
int main(){
    int num, number;
    printf("Enter the number to check weither its armstrong or not: ");
    scanf("%d", &num);
    number=num;
    int hold=0;
    int arm=0;
    int power=0;
    while(num!=0){
        hold=num%10;
        power=pow(hold,3);
        arm= (arm)+power;
        num/=10;
    }
    if(arm==number){
        printf("The nummber is armstrong number",arm);
    }
    else{
        printf("The number is not the armstrong number", arm);
    }
}*/
//WAP to swap two number without using third temporary variable

/*
#include<stdio.h>
int main(){
    int a= 10;
    int b= 20;
    printf("Before swapping a= %d, b=%d",a , b);
    a= a*b ;//10*20=200
    b= a/b;//200/20=10
    a= a/b;//200/10=20
    printf("\n After swapping a=%d, b=%d", a, b);
}*/

//WAP to check weither the year is leap year or not
/*
#include<stdio.h>
int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if(year%100==0){
        if(year%400==0){
            printf("%d is a leap year", year);
        }
        else{
            printf("is not a leap year");
        }
    }
        else{
        if(year%4==0){
            printf("%d is a leap year", year);
        }
        else{
            printf("is not a leap year");
        }
    }
}*/

//WAP to force the user to retype userid and passwordif the userid does not equals to 123 and password doesnotequals to 456
 /*
 #include<stdio.h>
  
  int main(){
    char userid[20];
    char password[20];

    while(1){
        printf("enter the user ID:");
        scanf("%s", userid);

        printf("Enter the password: ");
        scanf("%s", password);
     
     if(strcmp(userid, "123")==0 && strcmp(password, "456")==0){
     printf("you are logged in sucessfylly\n");
     }
     else{
        printf("Please try again \n");
     }
    }
  }*/

//wap to count the digits in the number
/*
#include<stdio.h>
int main()
{
    int num;
    int count=0;
    printf("enter any number: ");
    scanf("%d", &num);
    do{
        num=num/10;
        count+=1;
    }
    while(num>0);
    printf("the total number of digits in the number are %d",count);
    return 0;
}*/

//WAP to force the user to re-enter the number if the userenters the negative value for the factorial??Use do..while loop 
/*
#include<stdio.h>
int main(){
    int num;
    long long factorial = 1;
    do{
        printf("Enter the number to find the factorial: ");
        scanf("%d", &num);
        if(num<0){
            printf("please enter the positive number");

        }
    }while(num<0);
    for(int i = 1; i <= num; ++i) {
        factorial *= i;
    }

    // Print the factorial
    printf("Factorial of %d = %lld\n", num, factorial);

    return 0;

}*/