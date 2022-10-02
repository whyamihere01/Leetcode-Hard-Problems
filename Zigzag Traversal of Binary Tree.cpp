/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
#include<bits/stdc++.h>
vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    // Write your code here!
    if(root==NULL)
        return {};
    vector<int> ans;
    queue<BinaryTreeNode<int>*>q;
    q.push(root);
    int flag=0;
    while(q.size()!=0)
    {
        int n=q.size();
        vector<int>temp;
        for(int i=1;i<=n;i++)
        {
            BinaryTreeNode<int>*node=q.front();
            q.pop();
            temp.push_back(node->data);
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
            
            
        }
        if(flag&1)
            reverse(temp.begin(),temp.end());
        flag++;
        for(int i=0;i<temp.size();i++)
            ans.push_back(temp[i]);
    }
    return ans;
}
