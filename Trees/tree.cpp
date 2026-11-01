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

void print(Tree *node)
{
    if (node == nullptr)
    {
        return;
    }
    print(node->left);
    cout << node->data << " ";
    print(node->right);
}
int main()
{
    Tree *root = new Tree(5);
    root->left = new Tree(4);
    root->right = new Tree(6);
    root->left->left = new Tree(3);
    root->left->right = new Tree(2);
    root->right->left = new Tree(7);
    root->right->right = new Tree(8);
    root->left->left->left = new Tree(1);
    root->right->right->right = new Tree(9);

    print(root);
}