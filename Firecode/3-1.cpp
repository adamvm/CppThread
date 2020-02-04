#include <vector>

listNode* find_middle_node(listNode* head)
{
    if (head == NULL)
        return NULL;
        
    if (head->next == NULL)
        return head;
        
    std::vector<listNode*> v;
    
    listNode * temp = head;
    
    while (temp->next != NULL)
    {
        v.emplace_back(temp);
        temp = temp->next;
    }

    return v[v.size()/2];
}

/* 

listNode* find_middle_node(listNode* head) 
{
    // Initialise two pointers pointing to the head of the linked list

    listNode* slow = head;
    listNode* fast = head;

    // Traverse the list by moving one pointer with double speed than other pointer.
    // Stop when the fastest pointer reaches the end of linked list. 
    // The slower pointer will be at the middle of the linked list

    while(fast && fast->next != NULL && (fast->next)->next != NULL)
    {
        slow = slow->next;
        fast = (fast->next)->next;
    }

    return slow;
    
    // Return the middle node
}

*/