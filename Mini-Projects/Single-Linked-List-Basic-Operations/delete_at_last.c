#include "sll.h"

int sl_delete_last(Slist **head)
{
      Slist *temp = *head;
      Slist *prev = NULL;
    
       if(*head == NULL)
        return FAILURE;

        if(temp -> link == NULL)
        {
            *head = NULL;
            free(temp);
            return SUCCESS;
        }
        while(temp -> link != NULL)
        {
            prev = temp;
            temp = temp -> link;
            temp -> link = prev;
            free(temp);
        }


}