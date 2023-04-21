class Solution{

public:

    ListNode *moveToFront(ListNode *head){

        

        if(head->next == NULL)

        {

            return head;

        }

        

        ListNode* temp = head;

        ListNode* prev;

        while(temp->next != NULL)

        {

            prev = temp;

            temp = temp->next;

        }

        prev->next = NULL;

        temp->next = head;

        head = temp;

        

        return head;

    }

};
