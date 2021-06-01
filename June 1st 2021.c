#include<stdio.h>
int main()
{
    int s,u,t,a;
    printf("initial valocity=");
    scanf("%d",&u);
    printf("time=");
    scanf("%d",&t);
    printf("acceletory=");
    scanf("%d",&a);
    printf("soron=");
    s=(u*t)+(a*t*t*1/2);
    printf("%d\n",s);
}

RUN:

initial valocity=7
time=5
acceletory=1
soron=47
Program ended with exit code: 0

