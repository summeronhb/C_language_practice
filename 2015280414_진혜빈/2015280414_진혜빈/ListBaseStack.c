#include <stdio.h>
#include <stdlib.h>
#include "ListBaseStack.h"

void MakeInit(Stack* stack)
{
	stack->head = NULL;
}

int CheckEmpty(Stack* stack)
{
	if (stack->head == NULL)
		return TRUE;
	else
		return FALSE;
}

void Push(Stack* stack, Data data)
{
	Node* new = (Node*)malloc(sizeof(Node));

	
	new->data = data;
	new->next = stack->head;

	stack->head = new;
}

Data Pop(Stack* stack)
{
	Data adata;
	Node* anode;

	if (CheckEmpty(stack))
	{
		printf("error");
		exit(-1);
	}
	adata = stack->head->data;
	anode = stack->head;

	stack->head = stack->head->next;
	free(anode);

	return adata;
}

int main()
{
	Stack stack;
	MakeInit(&stack);

	CheckEmpty(&stack);

	Push(&stack, 1);
	Push(&stack, 3);
	Push(&stack, 5);
	Push(&stack, 7);
	Push(&stack, 9);

	while (!CheckEmpty(&stack))
	{
		printf("%d \n", Pop(&stack));
	}

}