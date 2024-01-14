#include <iostream>
#include "Node.h"
using namespace std;

int main()
{
    AVLTree tree = AVLTree();
    tree.root = tree.insertNode(NULL, 2);
    return 0;
}