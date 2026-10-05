#include<stdio.h>
int main()
{
  int a,b,choice,res;
  printf("=====BRANCHING STATEMENT=====\n");
  printf("Enter the first number:");
  scanf("%d",&a);
  printf("Enter the second number:");
  scanf("%d",&b);
  printf("\n-----MENU-----\n");
  printf("1.Check Positive,Negative or Zero\n");
  printf("2.Check Even or Odd\n");
  printf("3.Find Largest of Two Numbers\n");
  printf("4.Check Divisibility by 5\n");
  printf("\nEnter your choice:");
  scanf("%d",&choice);
  printf("\n-----RESULT-----\n");
  switch(choice)
    {
      case 1:
        if(a>0)
           printf("%d is positive",a);
        else if(a<0)
           printf("%d is negative",a);
        else
           printf("%d is Zero",a);
        break;
      case 2:
        if(a%2==0)
           printf("%d is even",a);
        else
           printf("%d is odd",a);
        break;
      case 3:
        if(a>b)
        {
          res = a;
          printf("%d is the largest number",res);
        }
        else if(b>a)
        {
          res = b;
          printf("%d is the largest number",res);
        }
        else
        {
          printf("Both numbers are Equal");
        }
        break;
      case 4:
        if(a%5==0)
           printf("%d is divisible by 5",a);
        else
           printf("%d is not divisible by 5",a);
        break;
      default:
        printf("Invalid choice.");
    }
 return 0;
}
      
