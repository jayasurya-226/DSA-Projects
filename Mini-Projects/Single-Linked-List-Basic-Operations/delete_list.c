#include "sll.h"

int sl_delete_list(Slist **head)
{
    // Case 1: Empty list
    if (*head == NULL)
        return FAILURE;

	Slist *temp = *head;
    while(temp -> link != NULL)
    {
        *head = temp -> link;
        free(temp);
        temp = *head;

    }
    
    *head = NULL;
    return SUCCESS;
     
}