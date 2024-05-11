class Solution
{
public:

    struct Node* arrangeCV(Node *head)
    {
        if(head==NULL || head->next==NULL)
            return head;

        Node *temp=head;

        Node *vDummyNode=new Node(-1);
        Node *cDummyNode=new Node(-1);

        Node *vCurrent=vDummyNode;
        Node *cCurrent=cDummyNode;

        while(temp!=NULL){
            if(temp->data=='a' || temp->data=='e' || temp->data=='i' || temp->data=='o' || temp->data=='u')
            {
                vCurrent->next=temp;
                vCurrent=vCurrent->next;
            }
            else{
                cCurrent->next=temp;
                cCurrent=cCurrent->next;
            }

            temp=temp->next;
        }

        vCurrent->next=cDummyNode->next;
        cCurrent->next=NULL;

        return vDummyNode->next;
    }
};
