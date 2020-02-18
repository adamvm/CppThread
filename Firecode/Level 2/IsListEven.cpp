/*
Implement a function to check in a single pass, if the given singly-linked list has
an even or an odd number of nodes in it.
An Empty list has 0 nodes which makes the number of nodes in it even.
Examples: 

Linkedlist: 1->2->3->4
head=1
is_list_even(head) => true

Linkedlist: 1->2->3->4->5
head=1
is_list_even(head) => false
*/

bool is_list_even(listNode* head)
{
    if (head == NULL)
        return true;
 
    size_t i = 0;
    
    listNode* temp = head;
    
    while (temp != NULL)
    {
        temp = temp->next;
        i++;
    }
    
    return (i % 2 == 0);
}