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

void isElementExists(Tree *node, int target, bool &ans)
{
    if (node == nullptr)
    {
        return;
    }
    isElementExists(node->left, target, ans);
    if (node->data == target)
        ans = true;
    isElementExists(node->right, target, ans);
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

    bool flag = 0;
    isElementExists(root, 7, flag);
    cout << boolalpha << endl;
    cout << "is Element exist in tree: " << flag;
}