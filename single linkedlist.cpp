#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
} *head = NULL;
void createlinkedlist() 
{
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->next = NULL;
    printf("\nEnter data value in node: ");
    scanf("%d", &temp->data);
    if (head == NULL) {
        head = temp;
    } else {
        ptr = head;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}
void displaylinkedlist() 
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL) {
        printf("\nLinked list is empty\n");
    } else {
        while (ptr != NULL) {
            printf("%d -> ", ptr->data);
            ptr = ptr->next;
        }
        printf("NULL\n");
    }
}
void first_insert() 
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->next = NULL;
    printf("\nEnter data for the first node: ");
    scanf("%d", &temp->data);
    if(head==NULL)
    {
    	head=temp;
	}
	else
	{
    	temp->next = head;
    	head = temp;
    	printf("\nInsert at first successful\n");
	}
}
void last_insert() 
{
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->next = NULL;

    printf("\nEnter data for the last node: ");
    scanf("%d", &temp->data);

    if (head == NULL) {
        head = temp;
    } else {
        ptr = head;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }

    printf("\nInsert at last successful\n");
}
void first_deletion() 
{
    if (head == NULL) {
        printf("\nList is empty, nothing to delete\n");
        return;
    }
    struct node *ptr;
    ptr = head;
    head = ptr->next;
    free(ptr);
    printf("\nDeleted first node successfully\n");
}
void last_deletion() 
{
    if (head == NULL) {
        printf("\nList is empty, nothing to delete\n");
        return;
    }
    struct node *temp, *ptr;
    ptr = head;
    if (ptr->next == NULL) { // Single node case
        head = NULL;
        free(ptr);
        printf("\nDeleted last node successfully\n");
        return;
    }
    while (ptr->next->next != NULL) {
        ptr = ptr->next;
    }
    temp = ptr->next;
    ptr->next = NULL;
    free(temp);
    printf("\nDeleted last node successfully\n");
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
    temp = (struct node *)malloc(sizeof(struct node));
    temp->next = NULL;
    printf("\nEnter the data: ");
    scanf("%d", &temp->data);
    printf("\nEnter the position: ");
    scanf("%d", &pos);
    if (pos < 1 || pos > count + 1) {
        printf("\nInvalid position\n");
    } else {
        ptr = head;
        if (pos == 1) {
            temp->next = head;
            head = temp;
        } else {
            int i;
            for (i = 1; i < pos - 1; i++) {
                ptr = ptr->next;
            }
            temp->next = ptr->next;
            ptr->next = temp;
        }
        printf("\nInsertion successful\n");
    }
}
void anypos_deletion() 
{
    int pos, count = 0;
    struct node *temp, *ptr;
    ptr = head;
    while (ptr != NULL) {
        count++;
        ptr = ptr->next;
    }
    printf("\nEnter the position to delete: ");
    scanf("%d", &pos);
    if (pos < 1 || pos > count) {
        printf("\nInvalid position\n");
    } else {
        if (pos == 1) {
            ptr = head;
            head = ptr->next;
            free(ptr);
        } else {
            ptr = head;
            int i;
            for (i = 1; i < pos - 1; i++) {
                ptr = ptr->next;
            }
            temp = ptr->next;
            ptr->next = temp->next;
            free(temp);
        }
        printf("\nDeletion successful\n");
    }
}
void sumof_sllelements() 
{
    int sum = 0;
    struct node *ptr;
    ptr = head;
    if (head == NULL) {
        printf("\nSLL is empty\n");
    } else {
        while (ptr != NULL) {
            sum += ptr->data;
            ptr = ptr->next;
        }
        printf("\nThe sum of all elements is: %d\n", sum);
    }
}
void alternate_no() 
{
    struct node *ptr;
    ptr = head;
    printf("\nAlternate nodes are:\n");
    while (ptr != NULL) {
        printf("%d\n", ptr->data);
        if (ptr->next != NULL) {
            ptr = ptr->next->next;
        } else {
            break;
        }
    }
}
int main() {
    int ch;
    while (1) {
        printf("\n1. Create linked list\n2. Display\n3. First Insert\n4. Last Insert\n5. First Deletion\n6. Last Deletion\n7. Insert at any position\n8. Delete from any position\n9. Sum of elements\n10. Alternate nodes\n11. Exit\nEnter your choice: ");
        scanf("%d", &ch);
        if (ch == 1)
            createlinkedlist();
        else if (ch == 2)
            displaylinkedlist();
        else if (ch == 3)
            first_insert();
        else if (ch == 4)
            last_insert();
        else if (ch == 5)
            first_deletion();
        else if (ch == 6)
            last_deletion();
        else if (ch == 7)
            anypos_insert();
        else if (ch == 8)
            anypos_deletion();
        else if (ch == 9)
            sumof_sllelements();
        else if (ch == 10)
            alternate_no();
        else if (ch == 11)
            break;
        else
            printf("\nWrong choice entered\n");
    }
    return 0;
}
