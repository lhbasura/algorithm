#include <iostream>
using  namespace std;
#include "tree.h"
void inorder_tree_walk(tree_node* root)
{
    if(root!=NULL)
    {
        cout<<root->key<<" ";
        inorder_tree_walk(root->left);
        inorder_tree_walk(root->right);
    }

}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}