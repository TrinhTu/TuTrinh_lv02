#include<stdio.h>
#include<math.h>
void main()
{
    int n,t,i;
    printf("Nhap so nguyen n:");
    scanf("%d",&n);
    t=0;
    if(n==1) printf("Khong phai so nguyen to");
    else{
    for(i=2;i<=sqrt(n);i++)
        {if((n%i)==0)
            t++;}
    if(t==0) printf("So nguyen to");
    else printf("khong phai so nguyen to");
}}

