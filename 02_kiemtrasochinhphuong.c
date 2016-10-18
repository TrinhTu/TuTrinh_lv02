#include<stdio.h>
#include<math.h>
void main()
{
    float a;
    int b;
    printf("Nhap so bat ki:");
    scanf("%f",&a);
    b=(int)sqrt(a);
    if(sqrt(a)!=b) printf("Khong phai so chinh phuong");
    else printf("So chinh phuong");


}
