#include <stdio.h>
int main()
{
    int age;
    age = 10; 
    int *p;
    p = &age;
    printf("age: %d\n",age);
    // printf(p);
    printf("age variable address is %d\n",&p);
    return 0;
}