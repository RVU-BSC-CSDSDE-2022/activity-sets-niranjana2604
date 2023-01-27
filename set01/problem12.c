#include <stdio.h>
struct_complex
{
float real;
float imaginary;
}
typedef struct_complex complex;
int get_n();
complex input_complex();
void input_n_complex(int n,complex c[n]);
complex add(complex a, complex b);
complex add_n_complex(int n,complex c[n]);
void output(int n,complex c[n],complex result);
int main()
{
int n;
complex c[n],result={0,0};
n = get_n();
input_n_compex(n,c);
result = add_n_complex(n,c);
output(n,c,result);
}
int get_n()
{
int n;
printf("enter the size of the array:");
if(scanf("%d",&n))
return n;
}
complex input_complex()
{
complex c1;
printf("enter the real part:");
if (scanf("%f",&c1.real))
printf("enter the imaginary part:");
if (scanf("%f",&c1.imaginary))
return c1;
}
void input_n_compex(int n, complex c[n])
{
for(int i=0; i<n;i++)
{
c[i] = input_complex();
}
}
complex add(complex a,complex b)
{
complex sum;
sum.real =  a.real+b.real;
sum.imaginary = a.imaginary +b.imaginary;
return sum;
}
complex add_n_complex(int n,complex c[n])
{
complex result = {0,0};
for(int i=0; i<n; i++)
{
result = add(result,c[i]);
}
return result;
}
void output(int n,complex c[n], complex result)
{
for(int i=0; i<n; i++)
{
printf("%d+%di+" ,(int)c[i],real,(int)c[i].imaginary);
}
printf("is %d+%di\n",(int)result.real,(int)result.imaginary);
}
