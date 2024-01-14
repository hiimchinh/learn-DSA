class Node
{
public:
    int key;
    Node *left;
    Node *right;
    int height;
    Node(int key)
    {
        this->key = key;
        this->height = 1;
    };
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

    Node *insertNode(Node *n, int key)
    {
        if (n == NULL)
        {
            //  Node(key);
        }
    }
};