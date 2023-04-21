class Solution{ 

public:

    Node* reverse(Node* head)

{

    Node* curr = head;

    Node *next = NULL, *prev = NULL;

    while(curr)

    {

        next = curr->next;

        curr->next = prev;

        prev = curr;

        curr = next;

    }

    return prev;

}

Node* merge(Node* a,Node* b)

{

    while(b)

    {

        Node* temp1=a->next;

        Node* temp2=b->next;

        

        a->next=b;

        b->next=temp1;

        a=temp1;

        b=temp2;

    }

    return a;

}

void reorderList(Node* head) 

{

    if(!head || !head->next) return;

    Node *slow = head;

    Node *fast = head->next;

    while(fast&&fast->next)

        {

            slow=slow->next;

            fast=fast->next->next;

        }

    Node* shead = reverse(slow->next);

    slow->next=NULL;

    merge(head,shead);

}

};
