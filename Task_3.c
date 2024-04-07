/*
*******************************************************************************************************
                                        Task_3_description
*******************************************************************************************************
The main() function of the following C program initially constructs a linked list with each node of 
type struct node and the data member in each node composed of a positive number greater than zero. 
After the linked list is constructed, the main() function calls a user-defined function 
sort_ascending() that takes the address of the pointer to the first node of the linked list and the
count of nodes in the linked list as input arguments. The sort_ascending() function should sort the
nodes of the linked list in ascending order with respect to its data members. 

For instance, if the initial version of the linked list after construction is as follows:
7->4->1->5->2->3->NULL

The sorted version of the linked list after exiting the sort_ascending() function should be:
1->2->3->4->5->7->NULL

You must complete the definition of the sort_ascending() function in the code below and verify its 
functionality. The sorting of nodes in the linked list should be performed purely by reassignment of 
the nextPtr member of the nodes, and therefore:
1. You are not allowed to overwrite the data member of any of the nodes in the linked list.
2. You are not allowed to duplicate any of the nodes in the linked list.
*******************************************************************************************************
*/

#include <stdlib.h>
#include <stdio.h>

struct node
{
	char data;
	struct node* nextPtr;
};

void sort_ascending(struct node **startPtr, int count_nodes);

int main()
{
	struct node* startPtr = NULL;
	struct node* curPtr = NULL;
	struct node* printPtr = NULL;
	int temp = 0;
    int i = 0;
	printf("Enter the value of the new data member: ");
	scanf("%d", &temp);
	for (i = 0; temp > 0; i++)
	{
		if (startPtr == NULL)
		{
			startPtr = (struct node*)malloc(sizeof(struct node));
			startPtr->data = temp;
			startPtr->nextPtr = NULL;
			curPtr = startPtr;
		}
		else
		{
			curPtr->nextPtr = (struct node*)malloc(sizeof(struct node));
			curPtr->nextPtr->data = temp;
			curPtr->nextPtr->nextPtr = NULL;
			curPtr = curPtr->nextPtr;
		}
        printf("Enter the value of the new data member: ");
		scanf("%d", &temp);
	}

    printf("Inital version of linked list:\n");
	printPtr = startPtr;
	while (printPtr != NULL)
	{
		printf("%d->", printPtr->data);
		printPtr = printPtr->nextPtr;
	}
	printf("NULL\n");

    sort_ascending(&startPtr,i);

    printf("Modified version of linked list:\n");
    printPtr = startPtr;
	while (printPtr != NULL)
	{
		printf("%d->", printPtr->data);
		printPtr = printPtr->nextPtr;
	}
	printf("NULL\n");
	return 0;
}

void sort_ascending(struct node **startPtr, int count_nodes)
{
    struct node* prevPtr = NULL;
    struct node* curPtr = NULL;
	struct node* tempPtr = NULL;
	struct node* temp1Ptr = NULL;
	struct node* temp2Ptr = NULL;

    for (int i = 1; i < count_nodes; i++)
    {
		//You may write your code here
	}
}
