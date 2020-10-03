#include <stdio.h>
#include <math.h>
double roots(double * ,double *,double *);
main()
{
	double a,b,c,*p,*q,*r;
     printf("enter a b c values:\n");
     scanf("%lf %lf %lf",&a,&b,&c);
     p = &a;
     q= &b;
     r = &c;
     roots(p,q,r);
}
double roots(double *p,double *q,double *r)
{
     double r1,r2,det,real,imaginary;
     det = ((*q)*(*q))-(4*(*p)*(*r));
     if (det>0)
     {
     	r1 = (-(*q)+sqrt(det))/(2*(*p));
     	r2 = (-(*q)-sqrt(det))/(2*(*p));
     	printf("root1 = %.2lf and root2 = %.2lf",r1 , r2);
	 }
	 else if (det == 0)
    {
        r1 = r2 = -(*q)/(2*(*p));
        printf("root1 = root2 = %.2lf;", r1);
    }
    else
    {
        real = -(*q)/(2*(*p));
        imaginary = sqrt(-det)/(2*(*p));
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", real, imaginary, real, imaginary);
    }
}
