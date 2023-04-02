#include <iostream>
using namespace std;

class Node{
public:
    int value;
    Node *left;
    Node *right;
    Node(int value)
    {
        this->value = value;
        this->left = nullptr;
        this->right = nullptr;
    }
};


class Tree{
public:
    Tree(){
    root = nullptr;
    }
    void insert_tree(int value){
        root = recursive_insert(root,value);
    }
    Node* search_tree(int value){
        return recursive_search(root, value);
    }
private:
    Node* root;
    Node* recursive_insert(Node *root, int value){
        if (root == nullptr){
            return new Node(value);
        }
        if (value < root->value)
        {
            root->left = recursive_insert(root->left,value);
        }
        else if (value > root->value){
            root->right = recursive_insert(root->right,value);
        }
        else{
            return root;
        }
    }
    Node* recursive_search(Node* root, int value){
        if (root == nullptr||root->value == value){
            return root;
        }
        if (root->value > value){
            recursive_search(root->left, value);
        }
        else{
            recursive_search(root->right, value);
        }
    }
};



int main()
{
    Tree small_tree;
    small_tree.insert_tree(2);
    small_tree.insert_tree(3);
    small_tree.insert_tree(5);
    small_tree.insert_tree(8);
    small_tree.insert_tree(13);
    small_tree.insert_tree(21);
    Node *searching=small_tree.search_tree(21);
    if(searching!=nullptr){
        cout<<"Found it: ";
        cout<<(searching->value)<<endl;
    }
    else{
        cout<<"Couldn't find it"<<endl;
    }

    return 0;
}