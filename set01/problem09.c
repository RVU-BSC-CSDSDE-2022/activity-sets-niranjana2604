#include <stdio.h>
#include <math.h>
float input();
float square_root(float n);
void output(float n,float sqrroot);
float input()
{
float n;
printf("enter the number");
scanf("%e",&n);
return n;
}
float i=1;
while(fabs(i*i-n)/2>0.0001)
{
i=(i+n/i)/2;
}
return i;
}
void output(float n,float sqrroot)
{
printf("square root of %2f is %2f",n,sqrrot);
}
int main()
{
float n,sqrroot;
n=input();
sqrroot= square_root(n);
output(n, sqrroot);
}
