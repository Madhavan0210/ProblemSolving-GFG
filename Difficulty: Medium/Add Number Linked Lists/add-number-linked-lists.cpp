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
    Node* reverseList(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        while (curr) {
            Node* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
    Node* addTwoLists(Node* num1, Node* num2) {
        // code here
        num1 = reverseList(num1);
        num2 = reverseList(num2);

        Node* dummyHead = new Node(0);  // Dummy node to build the result
        Node* current = dummyHead;     // Pointer for the result list
        int carry = 0;                 // To track carry during addition

        // Add the numbers digit by digit
        while (num1 || num2 || carry) {
            int sum = carry; // Start with the carry from the previous step
            if (num1) {
                sum += num1->data;
                num1 = num1->next;
            }
            if (num2) {
                sum += num2->data;
                num2 = num2->next;
            }

            // Update carry and the current digit
            carry = sum / 10;
            int digit = sum % 10;

            // Add new node to the result list
            current->next = new Node(digit);
            current = current->next;
        }

        // Reverse the result list back to the correct order
        Node* result = reverseList(dummyHead->next);

        // Remove leading zeros (if any) in the result
        while (result && result->data == 0 && result->next) {
            Node* temp = result;
            result = result->next;
            delete temp;
        }

        return result;

    }

};