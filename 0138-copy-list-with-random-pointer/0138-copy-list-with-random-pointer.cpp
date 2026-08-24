class Solution {
public:
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/


   
    Node* copyRandomList(Node* head) {
        if (head == NULL) return NULL;

        Node* temp = head;

        // Step 1: Insert copy nodes
        while (temp != NULL) {
            Node* copyNode = new Node(temp->val);
            copyNode->next = temp->next;
            temp->next = copyNode;
            temp = temp->next->next;
        }

        // Step 2: Set random pointers
        temp = head;
        while (temp != NULL) {
            Node* copyNode = temp->next;

            if (temp->random != NULL) {
                copyNode->random = temp->random->next;
            }

            temp = temp->next->next;
        }

        // Step 3: Separate original and copied list
        Node* dummyNode = new Node(-1);
        Node* rest = dummyNode;

        temp = head;
        while (temp != NULL) {
            rest->next = temp->next;
            rest = rest->next;

            temp->next = temp->next->next;
            temp = temp->next;
        }

        return dummyNode->next;
    }
};