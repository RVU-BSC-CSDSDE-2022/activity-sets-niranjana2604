#include <stdio.h>
int input();
void compare(int a,int b,int c,int*largest);
void output(int a,int b,int c,int largest);
int main()
{
int a,b,c,largest;
a=input();
b=input();
c=largest();
compare(a,b,c,&largest);
output(a,b,c,largest);
}
int input()
{
int n;
printf("enter three numbers");
scanf("%d"&n);
return;
}
void compare(int a,int b,int c,int*largest)
{
int*largest=0;
if((a>b)&&(a>c))
{
*largest=a;
}
else if((b>a)&&(b>c))
{
*largest=b;
}
else
{
*largest=c;
}
}
void output(int a,int b,int c,int largest)
{
printf("the largest of %d,%d and%d is %d\n",a,b,c,largest);
}
