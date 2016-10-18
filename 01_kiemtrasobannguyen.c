#include<stdio.h>
void main()
{
    float a;
    int b;
    printf("Nhap 1 so can kiem tra:");
    scanf("%f",&a);
    b=(int)a;
    if(a-b!=0.5) printf("Khong phai la so ban nguyen");
    else printf("So ban nguyen");

}
