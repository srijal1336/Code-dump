// // // // // // // // #include<Stdio.h>
// // // // // // // // int main(){
// // // // // // // //     int a,b,c;
// // // // // // // //     printf("enter any three numbers:");
// // // // // // // //     scanf("%d %d %d", &a,&b,&c);
// // // // // // // //     if(a>b && a>c){
// // // // // // // //         printf("%d is the greatest number",a);
// // // // // // // //     }
// // // // // // // //     else if(b>c && b>a){
// // // // // // // //         printf("%d is the greatest number",b);
// // // // // // // //     }
// // // // // // // //     else if (c>b && c>a){
// // // // // // // //         printf("%d is the greatest number",c); 
// // // // // // // //     }

// // // // // // // //     else{
// // // // // // // //         printf("EQUAL");
// // // // // // // //     }
// // // // // // // // }
// // // // // // // //to count the digits in the given number
// // // // // // // #include<stdio.h>
// // // // // // // int main(){
// // // // // // //     int num=123;
// // // // // // //     int hold=0;
// // // // // // //     int res=0;
// // // // // // //     while(num!=0){
// // // // // // //         hold=num%10;
// // // // // // //         res=(res*10)+hold;
// // // // // // //         num/=10;
// // // // // // //     }
// // // // // // //     printf("%d",res);
// // // // // // // }
// // // // // // #include<stdio.h>
// // // // // // int main(){
// // // // // //     int num, number;
// // // // // //     printf("enter any number to check palindrome:");
// // // // // //     scanf("%d", &num);
// // // // // //     number=num;
// // // // // //     int hold=0;
// // // // // //     int res=0;
// // // // // //     while(num!=0){
// // // // // //         hold=num%10;
// // // // // //         res=(res*10)+hold;
// // // // // //         num/=10;

// // // // // //     }
// // // // // //     if(res==number){
// // // // // //         printf("the number is palindrome");
// // // // // //         }
// // // // // //         else{
// // // // // //             printf("the number is not palindrome");
// // // // // //         }
// // // // // //     }
// // // // // #include<stdio.h>
// // // // // int main(){ 
// // // // //     int num;
// // // // //     printf(" enter the digit to find the sum:");
// // // // //     scanf("%d ",&num);
// // // // //     int hold=0;
// // // // //     int res=0;
// // // // //     float avg=0;
// // // // //     int count=0;
// // // // //     while(num!=0){
// // // // //         count++;
// // // // //         hold=num%10;
// // // // //         res=res+hold;
// // // // //         num/=10;
// // // // //        }
// // // // //         avg=res/count;
// // // // //         printf("the average is %f",avg);
// // // // //         return 0;
// // // // // }
// // // // #include<stdio.h>
// // // // #include<math.h>
// // // // int main(){
// // // //     int num,number;
// // // //     printf("enter any number:");
// // // //     scanf("%d",&num);
// // // //     number=num;
// // // //     int hold=0;
// // // //     int res=0;
// // // //     int arm=0;
// // // //     int power=0;
// // // //     while(num!=0){
// // // //         hold=num%10;
// // // //         power=pow(hold,3);
// // // //         arm= (arm)+power;
// // // //         num/=10;
// // // //     }
// // // //     if(arm==number){
// // // //     printf("%d in armstrong number",arm);
// // // // }
// // // // else{
// // // //     printf("%d is not the armstrong number",arm);
// // // // }
// // // // }
// // // //structure
// // // #include<stdio.h>
// // // struct std{
// // //     char name[50];
// // //     int age;
// // //     float marks;
// // // }S[3];
// // // int main(){
// // //     int i;
// // //     for(i=0;i<3;i++){
// // //         printf("name of the student:");
// // //         scanf("%s",&S[i].name);
// // //         printf("enter age of the student:");
// // //         scanf("%d", &S[i].age);
// // //         printf("enter the marks of the student");
// // //         scanf("%f", &S[i].marks);
// // //         }
// // //         for(i=0;i<3;i++){
// // //         if(S[i].marks>100){
// // //             printf("%s \n",S[i].name);
// // //             printf("%d \n",S[i].age);
// // //             printf("%.2f\n",S[i].marks);

// // //         }
// // //     }
// // // }
// // // #include<stdio.h>
// // // int fact(int(num));
// // // int main(){
// // //     int num;
   
// // //     scanf("%d",&num);
// // //      printf("%d",fact(num));
// // // }
// // // int fact(int num){
// // // if(num==1){
// // //     return 1;
// // // }
// // // else{
// // //     return num*fact(num-1);
// // // }
// // // }
// // #include <stdio.h>

// // int fibonacci(int(n)){
// //     if(n==0){
// //         return 0;
// //     }
// //     else if(n==1){
// //         return 1;
// //     }
// //     else{
// //         return (fibonacci(n-1) + fibonacci(n-2));
// //     }
// // }
// // int main(){
// //     int n;
// //     printf("enter the number of terms\n");
// //     scanf("%d",&n);

// //     printf("fibonacci series");

// //     for(int i=0; i<n;i++){
// //         printf("%d\t", fibonacci(i));
// //     }
// //     return 0;
// // }
// #include<stdio.h>
// struct std{
//     char name[50];
//     int age;
//     float marks;
// };
// int main(){
//     struct std st={18,"srijal",30.30};
//     struct std *ptr=&st;
// print("age:%d",*ptr->age);
// }
//malloc
/*#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr, size;
    printf("enter the size of the array");
    scanf("%d",&size);
    arr= (int*)malloc(size *sizeof(int));
    if(arr==NULL){
    printf("ERROR");
    }
    printf("enter the value for the integer:",size);
    for(i=0;i<3;i++);/
    

}*/
/*#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;
    printf("the name of the array is:%u",arr);
    printf("the address of the array is:%u",&arr[0]);
}
for(int i=0;i<5;i++){
    printf("%d ",arr[i]);
}
for(int i=0;i<5;i++){
    printf("%d ",*(ptr+i));
}
*/
/*#include<stdio.h>
#include<stdlib.h>
int main(){
    File *ptr;
    ptr=fopen("demo.txt","r");
    char ch=fgetc(ptr);
    if(ptr==NULL){
        printf("ERROR");
    }
    while(!feof(ptr)){
        printf("%c",ch);
        ch=fgetc(ptr);

    }*/
    
   /* #include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *ptr;
    ptr=fopen("demo.txt","r");
    if(ptr==NULL){
        printf("ERROR");
    }
    while(!feof(ptr)){
        char ch= fgetc(ptr);
        printf("%c",ch);
}
return 0;
}*/
/*#include<stdio.h>
int main(){
    int arr1[3][3],arr2[3][3],sum[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("enter the value for first array:");
            scanf("%d",&arr1[i][j]);
            printf("enter the value for second array:");
            scanf("%d",&arr2[i][j]);
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                sum[i][j]=arr1[i][j]+arr2[i][j];
            }

        }
         for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                printf("the sum of the matrix is %d\t",sum[i][j]);
            }
            printf("\n");
         }
    }
}*/
#include <stdio.h>
int main()
{
    int arr1[3][3], arr2[3][3], sum[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("First array");
            scanf("%d", &arr1[i][j]);
            printf("Second array");
            scanf("%d", &arr2[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}