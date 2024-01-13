class Node
{
public:
    int key;
    Node *left;
    Node *right;
    int height;
};

class AVLTree
{
public:
    Node root;
    int height(Node *n)
    {
        if (n == NULL)
            return 0;
        return n->height;
    }
};