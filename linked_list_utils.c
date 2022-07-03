#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	int data;
	struct s_list *next;
	struct s_list **head;
} t_list;

t_list *new_node(int num)
{
	t_list *node;
	
	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->data = num;
	node->next = NULL;
}

void	push_back(t_list **head, t_list *node)
{
	if (!node)
		return;
	if (!*head)
	{
		*head = node;
		return;
	}
	t_list *last;
	last = *head;
	while (last->next)
		last = last->next;
	last->next = node;
}

void	push_front(t_list **head, t_list *node)
{
	if (!node)
		return;
	node->next = *head;
	*head = node;
}

void	display(t_list *head)
{
	while (head)
	{
		printf("%d\n", head->data);
		head = head->next;
	}
}

int main()
{
	t_list *head = NULL;
	int i = 0;

	while (i < 100)
	{
		push_front(&head, new_node(++i));
	}
	display(head);
}
