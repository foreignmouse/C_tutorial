#include <stdio.h>
int main()
{
    int age;
    age = 10; 
    int *p;
    p = &age;
    int **p2;
    p2 = &p;
    printf("age value: %d\n",age);
    printf("age variable address: %d\n",p);
    printf("verification, age variable pointer pointed value: %d\n",*p);
    printf("age variable pointer address is %d\n",&p);

    printf("pointer p's value: %d\n",p);
    printf("verification, pointer p2 pointed value: %d\n",*p2);
    printf("verification, pointer p2 pointed pointer's pointed value: %d\n",**p2);
    printf("pointer p2 address is %d\n",&p2);
    return 0;
}