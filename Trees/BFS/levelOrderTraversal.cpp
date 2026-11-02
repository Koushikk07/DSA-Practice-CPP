#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Tree
{
public:
    int data;
    Tree *right;
    Tree *left;

    Tree(int _data)
    {
        data = _data;
        right = nullptr;
        left = nullptr;
    }
};

vector<vector<int>> LevelOrderTraversal(Tree *root)
{
    vector<vector<int>> ans;
    queue<Tree *> q;
    if (root == nullptr)
        return ans;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        vector<int> temp;
        for (int i = 0; i < size; i++)
        {
            Tree *node = q.front();
            q.pop();
            if (node->left != nullptr)
                q.push(node->left);
            if (node->right != nullptr)
                q.push(node->right);
            temp.push_back(node->data);
        }
        ans.push_back(temp);
    }
    return ans;
}

int main()
{
    Tree *root = new Tree(1);
    root->left = new Tree(2);
    root->right = new Tree(3);
    root->left->left = new Tree(4);
    root->left->right = new Tree(5);
    root->right->left = new Tree(6);
    root->right->right = new Tree(7);

    vector<vector<int>> ans = LevelOrderTraversal(root);

    for (auto it : ans)
    {
        for (auto m : it)
        {
            cout << m << " ";
        }
        cout << endl;
    }
}
