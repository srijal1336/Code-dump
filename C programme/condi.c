#include<stdio.h>
int main()
{
    float marks1,marks2,marks3,marks4,total;
  printf("Enter the marks of four subjects");
  scanf("%f%f%f%f",&marks1,&marks2,&marks3,&marks4);
  total=marks1+marks2+marks3+marks4/4;
  if(total>=85)
  {
    printf("Grade A"); 
  }
  else if(total>=75 && total<85)
  {
    printf("Grade B");
  }
  else 
  if(total>=60 && total<75)
  {
    printf("Garde C");
  }
  else 
  {
    printf("Fail");
  }
return 0;
}