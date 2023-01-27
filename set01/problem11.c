#include <stdio.h>
struct complex
{
float real;
float imaginary;
}
typedef struct complex complex;
complex input_complex();
complex add_complex(complex a,complex b);
void output(compare a,complex b,complex sum);
int main()
{
complex a,b,sum;
a=input_complex();
b=input_complex();
 sum=add_complex(a,b);
output(a,b,sum);
return 0;
}
complex input_complex()
{
complex c1;
printf("enter the real part:");
scanf("%f",&c1.real);
printf("enter the imaginary part:");
scanf("%f,&c1.imaginary);
return c1;
}
complex add_complex(complex a,complex b)
{
complex sum;
sum.real=a.real+b.real:
sum.imaginary=a.imaginary+b.imaginary;
return sum;
}
void output(complex a,complex b,complex sum);
{
printf("the sum of %f+%fi and %f+%fi is %f=%fi\n",a.real,b.imaginary,a.real,b.imaginary,sum.real,sum.imaginary);
}
