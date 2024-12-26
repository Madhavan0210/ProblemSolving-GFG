//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Node{
    public:
    string data;
    Node* back;
    Node* front;
    Node(string data1)
    {
        data=data1;
        back=NULL;
        front=NULL;
    } 
    Node()
    {
        data='0';
        back=NULL;
        front=NULL;
    }
    Node(string data1,Node* back1,Node* front1)
    {
        data=data1;
        back=back1;
        front=front1;
    }
};
class BrowserHistory {
    Node* curr;
public:
     // constructor to initialize object with homepage
    BrowserHistory(string homepage) {
         curr=new Node(homepage);
    }
    
    // visit current url
    void visit(string url) {
        Node* newnode=new Node(url);
        curr->front=newnode;
        newnode->back=curr;
        curr=newnode;
    }
    
    // 'steps' move backward in history and return current page
    string back(int steps) {
         while(steps)
        {
            if(curr->back) curr=curr->back;
            else break;
            steps--;
        }
        return curr->data;
    }
    
    // 'steps' move forward and return current page
    string forward(int steps) {
        while(steps)
        {
            if(curr->front) curr=curr->front;
            else break;
            steps--;
        }
        return curr->data;
    
    }
};

//{ Driver Code Starts.

int main()
{
    string homepage;
    cin >> homepage;
    
    BrowserHistory obj(homepage);
    
    int total_queries;
    cin >> total_queries;
    while(total_queries--)
    {
        int query;
        cin >> query;
        
        // if query = 1, visit()
        // if query = 2, back()
        // if query = 3, forward()
        
        if(query == 1) {
            string url;
            cin >> url;
            obj.visit(url);
        }
        else if(query == 2) {
            int steps;
            cin >> steps;
            cout << obj.back(steps) << endl;
        }
        else {
            int steps;
            cin >> steps;
            cout << obj.forward(steps) << endl;
        }
    }
    return 0;
}
// } Driver Code Ends