#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,delta,ng_kep,x1,x2;
    printf("nhap a,b,c\n");
    scanf("%f%f%f",&a,&b,&c);
    printf("ta co phuong trinh %0.0f(x*x)+%0.0fx+%0.0f=0\n",a,b,c);
    if(a==0)
    {
        printf("day ko phai phuong trinh bac 2\n");
    }

       else

           delta=b*b-4*a*c;
           if(delta==0)
           {
               ng_kep=-b/(2*a);
               printf("phuong trinh co 1 nghiem kep duy nhat %f",ng_kep);
           }
           if(delta>0)
           {
               x1=(-b+sqrt(delta))/(2*a);
               x2=(-b-sqrt(delta))/(2*a);
               printf("phuong trinh co 2 nghiem phan biet %f,%f",x1,x2);
           }
           else printf("phuong trinh vo nghiem");
           getch();


}

