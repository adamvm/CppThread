/*
Write a function to insert a node at the front of a singly-linked list and return the head of the modified list.
Examples: LinkedList: 1->2, Head = 1

insert_at_head(Head,1) ==> 1->1->2
insert_at_head(Head,2) ==> 2->1->2
insert_at_head(Head,3) ==> 3->1->2
*/

listNode* insert_at_head (listNode* head, int data)
{
    listNode* newNode = new listNode;
    newNode->value = data;
    
    if (head == NULL)
    {
        head = newNode;
        newNode->next = NULL;
        return head;
    }
    else
    {
        listNode* temp = head;
        head = newNode;
        newNode->next = temp;
    }

    return head;
}