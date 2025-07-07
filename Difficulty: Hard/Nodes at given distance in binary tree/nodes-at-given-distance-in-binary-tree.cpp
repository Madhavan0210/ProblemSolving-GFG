/* A binary Tree node
struct Node
{
    int data;
    struct Node *left, *right;
};
*/

class Solution {

  public:
    void parentmark(Node* root,unordered_map<Node*,Node*>&parent)
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
    vector<int> KDistanceNodes(Node* root, int target, int k) {
        // return the sorted vector of all nodes at k dist
        unordered_map<Node*,Node*>parent;
        parentmark(root,parent);
        unordered_map<Node*,bool>visited;
        queue<Node*>q;
        Node* targetNode;
        findtarget(root,target,targetNode);
        q.push(targetNode);
        visited[targetNode]=true;
        int disc=0;
        while(!q.empty())
        {
            int s=q.size();
            if(disc++ == k) break;
            for(int i=0;i<s;i++)
            {
                Node* curr=q.front();
                q.pop();
                if(curr->left && !visited[curr->left])
                {
                    q.push(curr->left);
                    visited[curr->left]=true;
                }
                if(curr->right && !visited[curr->right])
                {
                    q.push(curr->right);
                    visited[curr->right]=true;
                }
                if(parent[curr] && !visited[parent[curr]])
                {
                    q.push(parent[curr]);
                    visited[parent[curr]]=true;
                }
            }
        }
        vector<int>ans;
        while(!q.empty())
        {
            ans.push_back(q.front()->data);
            q.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};