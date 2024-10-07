struct Node *insert(struct Node *head, int data) 
{
    Node* newNode = new Node(data);
    newNode->npx = XOR(NULL, head);

    if (head != NULL) 
    {
        Node* next = XOR(NULL, head->npx);
        head->npx = XOR(newNode, next);
    }

    return newNode;
}

vector<int> getList(struct Node *head) 
{
    vector<int> result;
    Node* curr = head;
    Node* prev = NULL;
    Node* next;

    while (curr != NULL) 
    {
        result.push_back(curr->data);
        next = XOR(prev, curr->npx);
        prev = curr;
        curr = next;
    }

    return result;
}
