//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

/*
   // Redirecting input from file
  freopen("/Users/debojyoti.mandal/expt/input.txt", "r", stdin);

  // Redirecting output to file
  freopen("/Users/debojyoti.mandal/expt/output.txt", "w", stdout);
*/

struct node {
    int data;
    struct node* next;

    node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print linked list */
void printList(struct node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


// } Driver Code Ends
/*
  Reverse a linked list
  The input list will have at least one element
  Return the node which points to the head of the new LinkedList
  Node is defined as
    struct node
    {
        int data;
        struct node* next;

        node(int x){
            data = x;
            next = NULL;
        }

    }*head;
*/

class Solution {
  public:
   node* reversell(node* head)
    {
        node* prevnode=NULL;
        node* nextnode=NULL;
        node* temp=head;
        while(temp!=NULL)
        {
            nextnode=temp->next;
            temp->next=prevnode;
            prevnode=temp;
            temp=nextnode;
        }
        head=prevnode;
        return head;
    }
    node* findnode(node* temp,int k)
    {
        k-=1;
        while(temp!=NULL &&k>0)
        {
            temp=temp->next;
            k--;
        }
        return temp;
    }
    
    struct node *reverseIt(struct node *head, int k) {
        // Complete this method
        node* temp=head;
        node* kthnode=NULL;
        node* prevnode=NULL;
        node* nextnode=NULL;
        node* lastnode=NULL;
        while(temp!=NULL)
        {
         kthnode=findnode(temp,k);
         if(kthnode==NULL)
         { 
            lastnode=reversell(temp);
            if(prevnode) prevnode->next=lastnode;
            break;
         }
         nextnode=kthnode->next;
         kthnode->next=NULL;
         reversell(temp);
         if(temp==head) head=kthnode;
         else{
            prevnode->next=kthnode;
         }
         prevnode=temp;
         temp=nextnode;
        }

     return head;
    }
};


//{ Driver Code Starts.

/* Drier program to test above function*/
int main(void) {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        node* head = new node(data);
        node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new node(data);
            tail = tail->next;
        }
        int k;
        cin >> k;
        cin.ignore();

        Solution ob;
        head = ob.reverseIt(head, k);
        printList(head);
        cout << "~" << endl;
    }

    return (0);
}

// } Driver Code Ends