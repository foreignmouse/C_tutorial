#include<stdio.h>
int main()
{
    int a = 2049;
    int *p = &a;
    printf("address = %d,  value = %d\n",p,*p);
    char *p0;
    p0 = (char*)p;  //typecasting
    printf("address = %d,  value = %d\n",p0,*p0);
}