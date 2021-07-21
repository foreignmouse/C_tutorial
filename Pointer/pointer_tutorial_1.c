#include <stdio.h>
int main()
{
    int age;
    int height = 130;
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

    printf("#############try to use pointer to change variable's value############\n");

    *p = height;
    printf("pointer p pointed value is: %d\n",*p);
    printf("age value is %d\n",age);
    return 0;
}