#include "sll.h"

int insert_at_first(Slist **head, data_t data)
{
    Slist *new = malloc(sizeof(Slist));
    if(new == NULL)
    {
        return FAILURE;
    }
    new -> data = data;
    new -> link = *head;

    *head = new;

/**	if(*head == NULL)
         *head = NULL;
         else{
            temp = *head;
            *head = new;
            head -> link = temp;
         }  */

         return SUCCESS;
}