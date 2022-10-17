#include<stdio.h>
#include<iostream>

using namespace std;

struct Node{
    int data;
    struct Node* link;
};

struct Node* head;

void nodeCreate(int n)
{
    int value;
    struct Node* temp;
    struct Node* temp2;
    head = (struct Node*) malloc(sizeof(struct Node));
    temp = head;
    if(head == NULL)
    {
        printf("Memory not allocate");
    }else{
        printf("Enter Node 1 of Value : ");

        scanf("%d", &value);
        temp->data = value;
        temp->link = NULL;
        for(int i=2; i<=n; i++)
        {
            temp2 = (struct Node*) malloc(sizeof(struct Node));
            printf("Enter Node %d of Value : ", i);
            scanf("%d", &value);
            temp2->data = value;
            temp2->link = NULL;
            temp->link = temp2;
            temp = temp->link;


        }
    }

}

void display()
{

    struct Node *temp;
    temp = head;
    while( temp != NULL )
    {
        printf("%d", temp->data);
        temp = temp->link;

    }
}

void deleteNode()
{
    int n,i;
    printf("Enter node Position for delete: ");
    scanf("%d", &n);


    if(n==1)
	{
		struct Node* temp;
	    temp=head;
		head=temp->link;
		free(temp);
	}
	else
	{
		int i;
		struct Node *temp;
		temp=head;
		for(i=1;i<=n-2;i++)
		{
			temp=temp->link;
		}
		struct Node*temp2;
		temp2=temp->link;
		temp->link=temp2->link;
		free(temp2);

	}
}



int main()
{

    int n;
    printf("How many node you want to create: ");
    scanf("%d", &n);
    nodeCreate(n);
    display();

    deleteNode();

     display();

    return 0;
}



