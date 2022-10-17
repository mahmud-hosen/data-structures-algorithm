#include<stdio.h>

struct student{
    char name[20];
    int id;

};

int main()
{
    struct student s1, s2;

    scanf("%s", &s1.name);
    scanf("%d", &s2.id);




    printf("%d \n", s2.id);

    printf("%s \n", s1.name);

    return 0;

}
