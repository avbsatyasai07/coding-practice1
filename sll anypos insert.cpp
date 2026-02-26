#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*head=NULL;
void create_sll()
{
	struct node *temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("enter data:");
	scanf("%d",&temp->data);
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
	}
}
void display()
{
	struct node *ptr;
	ptr=head;
	if(ptr==NULL)
	{
		printf("linked list is empty");
	}
	else
	{
		while(ptr!=NULL)
		{
			printf("%d->",ptr->data);
			ptr=ptr->next;
		}
		printf("NULL");
	}
}
void anypos_insert()
{
	int pos, count = 0;
    struct node *temp, *ptr;
    ptr = head;

    while (ptr != NULL) {
        count++;
        ptr = ptr->next;
    }

    printf("Enter position: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > count + 1) {
        printf("Invalid position.\n");
        return;
    }

    temp = (struct node *)malloc(sizeof(struct node));

    if (temp == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("Enter data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if (pos == 1) { 
        temp->next = head;
        head = temp;
    } else {
        ptr = head;
        for (int i = 1; i < pos - 1; i++) {
            ptr = ptr->next;
        }
        temp->next = ptr->next;
        ptr->next = temp;
    }



}
int main()
{
	int ch;
	while(1)
	{
		printf("0.exit\n1.create_sll\n2.display\n3.anypos_insert\nenter your choice:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 0:
				{
					exit(0);
					break;
				}
			case 1:
				{
					create_sll();
					break;
				}
			case 2:
				{
					display();
					break;
				}
			case 3:
				{
					anypos_insert();
					break;
				}
			default:
				{
					printf("invalid choice\n");
				}
		}
	}
}
