#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Tree
{
public:
    int data;
    Tree *left;
    Tree *right;

    Tree(int _data)
    {
        data = _data;
        left = nullptr;
        right = nullptr;
    }
};

int Diameter(Tree *root, int &maxi)
{
    if (root == nullptr)
        return 0;

    int left_height = Diameter(root->left, maxi);
    int right_height = Diameter(root->right, maxi);
    maxi = max(maxi, left_height + right_height);
    return 1 + max(left_height, right_height);
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
    int maxi = 0;
    Diameter(root, maxi);
    cout << "The Maximum Diameter of the Tree: " << maxi;
}