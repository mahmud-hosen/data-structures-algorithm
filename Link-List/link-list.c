#include<stdio.h>
#include<iostream>

using namespace std;

struct Node{
    int data;
};

struct Node* head;

int main()
{
    head = (struct Node*) malloc(sizeof(struct Node));
    printf("%d", head);

    return 0;
}
