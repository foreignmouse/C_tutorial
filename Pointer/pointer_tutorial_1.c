#include <stdio.h>
int main()
{
    int age;
    age = 10; 
    int *p;
    // age = 10;
    p = &age;
    printf("age: %d\n",age);
    // printf(p);
    printf("age variable address is %d\n",&p);
    return 0;
}