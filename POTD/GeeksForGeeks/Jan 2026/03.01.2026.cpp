/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
*/
struct cmp{
    bool operator()(Node* n1,Node* n2)
    {
        return n1->data > n2->data;
    }
};
class Solution {
  public:
    Node *flatten(Node *root) {
        // code here
        priority_queue<Node*,vector<Node*>,cmp> minheap;
        for(Node* p=root;p;p=p->next)
            minheap.push(p);
        Node* newList = new Node(-1);
        Node* ptr = newList;
        while(!minheap.empty())
        {
            Node* node = minheap.top();
            minheap.pop();
            ptr->bottom = node;
            ptr = ptr->bottom;
            if(node->bottom)
                minheap.push(node->bottom);
        }
        return newList->bottom;
    }
};
