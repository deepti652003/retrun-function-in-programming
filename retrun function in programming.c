#include<stdio.h>
#include<stdlib.h>
int product(int a,int b)

{
  return(a*b);
}
  int main()
{
  int x,y;
    printf("please enter any two number\n");
    printf("enter number1\n");
    scanf("%d",&x);
    printf("enter number2\n");
    scanf("%d",&y);
    int prod;
    prod= product(x,y);
    printf("The result is %d ",prod);



}
