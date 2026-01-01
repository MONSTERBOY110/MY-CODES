/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        //  Code Here
        unordered_map<Node*,bool>mp;
        Node * travel = head1;
        while(travel){
            mp[travel] = true;
            travel=travel->next;
        }
        travel = head2;
        while(travel){
            if(mp[travel]) return travel;
            travel=travel->next;
        }
    }
};
