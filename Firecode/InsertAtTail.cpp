/*
Write a function to insert a node at the end of a singly-linked list. Return the head of the modified list.  
Examples:

Linkedlist: 1, head = 1

insert_at_tail(head,1) ==> 1->1
insert_at_tail(head,2) ==> 1->2
insert_at_tail(head,3) ==> 1->3
*/

listNode* insert_at_tail(listNode* head, int data)
{
    listNode* newNode = new listNode;
    newNode->value = data;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        return head;
    }
        
    listNode* temp = head;
    
    while (temp->next != NULL)
        temp = temp->next;
    
    temp->next = newNode;

    return head;
}