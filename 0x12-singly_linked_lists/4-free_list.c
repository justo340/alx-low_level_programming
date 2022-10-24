#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	list_t temp;

	temp = head;
	while(head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
