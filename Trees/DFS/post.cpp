#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Tree
{
public:
    int data;
    Tree *right;
    Tree *left;

    Tree(Tree *_left, int _data, Tree *_right)
    {
        data = _data;
        right = _right;
        left = _left;
    }

    Tree(int _data)
    {
        data = _data;
        right = nullptr;
        left = nullptr;
    }
};

void postorderTraversal(Tree *node)
{
    if (node == nullptr)
    {
        return;
    }

    postorderTraversal(node->left);
    postorderTraversal(node->right);
    cout << node->data << " ";
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

    cout << "Inorder-Traversal of a Binary Tree: ";
    postorderTraversal(root);
}