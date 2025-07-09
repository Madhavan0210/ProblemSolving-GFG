/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
     void parentmark(Node *root,unordered_map<Node*,Node*>&parent)
  {
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node* temp=q.front();
        q.pop();
        if(temp->left)
        {
            parent[temp->left]=temp;
            q.push(temp->left);
        }
        if(temp->right)
        {
            parent[temp->right]=temp;
            q.push(temp->right);
        }
    }
  }
  void findtarget(Node* root,int target,Node* &targetNode)
    {
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
          auto p=q.front();
          q.pop();
          if(p->data==target)
          {
              targetNode=p;
              break;
          }
          if(p->left) q.push(p->left);
          if(p->right) q.push(p->right);
        }
    }
        
    int minTime(Node* root, int target) {
        // code here
        unordered_map<Node*,Node*>parent;
    parentmark(root,parent);
    map<Node*,bool>visited;
    queue<Node*>q;
    Node* targetNode;
    findtarget(root,target,targetNode);
    q.push(targetNode);
    visited[targetNode]=true;
    int t=0;
    while(!q.empty())
    {
        t++;
        int s=q.size();
        for(int i=0;i<s;i++)
        {
            Node* temp=q.front();
            q.pop();
            if(temp->left && !visited[temp->left])
            {
                q.push(temp->left);
                visited[temp->left]=true;
            }
            if(temp->right && !visited[temp->right])
            {
                q.push(temp->right);
                visited[temp->right]=true;
            }
            if(parent[temp] && !visited[parent[temp]])
            {
                q.push(parent[temp]);
                visited[parent[temp]]=true;
            }
        }
    }
    return t-1;
    }
        
};