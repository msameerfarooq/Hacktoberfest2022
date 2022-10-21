// Contributor: Anjali Singh
// Level Order Traversal in Binary Tree
// a medium level question on leetcode 

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// A Binary Tree node
// struct Node
// {
//     int key;
//     struct Node *left, *right;
// };

// Utility function creates a new binary tree node with
// given key
// Node *newNode(int k)
// {
//     Node *temp = new Node;
//     temp->key = k;
//     temp->left = temp->right = NULL;
//     return temp;
// }

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<vector<int> > ans;
    int height;
    void helper(TreeNode *root, int height)
    {
        if (!root)
            return;
        if (height == 0)
        {
        }
    }
    vector<vector<int> > levelOrder(TreeNode *root)
    {
        vector<vector<int> > ans;
        if (!root)
            return ans;
        queue<TreeNode *> q;
        q.push(root);
        TreeNode *temp;
        int len;

        while (!q.empty())
        {
            len = q.size();
            vector<int> v;
            for (int i = 0; i < len; i++)
            {
                temp = q.front();
                q.pop();
                v.push_back(temp->val);

                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }
            ans.push_back(v);
        }
        return ans;
    }
};

// Driver program to test above functions
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    cout << "\n Inorder traversal of the given tree would be: \n ";
    Solution s;
    vector<vector<int> > ans;
    ans = s.levelOrder(root);
    for (int i = 0; i < ans.size(); i++)
    {
        for(int j=0; j<ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout<<"\n ";
    }
    cout << endl;
    return 0;
}


