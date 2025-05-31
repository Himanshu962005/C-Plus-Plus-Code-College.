// C++ program for Pre-order Traversal of Binary Tree.
#include <iostream>
#include <conio.h>
using namespace std;
// structure for NODE
struct NODE
{
    int data;
    struct NODE *left;
    struct NODE *right;
} *root;
class BST
{
public:
    // constructor
    BST()
    {
        root = NULL;
    }
    // Function to inserting value into tree
    void insert(NODE *tree, NODE *newnode)
    {
        if (root == NULL)
        {
            root = new NODE;
            root->data = newnode->data;
            root->left = NULL;
            root->right = NULL;
            cout << "Root Node is Added" << endl;
            return;
        }
        if (tree->data == newnode->data)
        {
            cout << "Element already in the tree" << endl;
            return;
        }
        if (tree->data > newnode->data)
        {
            if (tree->left != NULL)
            {
                insert(tree->left, newnode);
            }
            else
            {
                tree->left = newnode;
                (tree->left)->left = NULL;
                (tree->left)->right = NULL;
                cout << "Node Added To Left" << endl;
                return;
            }
        }
        else
        {
            if (tree->right != NULL)
            {
                insert(tree->right, newnode);
            }
            else
            {
                tree->right = newnode;
                (tree->right)->left = NULL;
                (tree->right)->right = NULL;
                cout << "Node Added To Right" << endl;
                return;
            }
        }
    }
    // Function for preorder tree traversal
    void preorder(NODE *ptr)
    {
        if (root == NULL)
        {
            cout << "\nUnderflow\n";
        }
        if (ptr != NULL)
        {
            cout << ptr->data << " ";
            preorder(ptr->left);
            preorder(ptr->right);
        }
    }
};
int main()
{
    system("cls");
    int ch, num;
    BST bst;
    NODE *temp;
    char ans;
    do
    {
        cout << "\n1.Insert element " << endl;
        cout << "2.Pre-order traversal" << endl;
        cout << "3.Exit" << endl;
        cout << "\nEnter your choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            temp = new NODE;
            cout << "Enter value to be inserted : ";
            cin >> temp->data;
            bst.insert(root, temp);
            break;
        case 2:
            cout << "Pre-order Traversal of BST : " << endl;
            bst.preorder(root);
            break;
        case 3:
            break;
        default:
            cout << "Invalid choice" << endl;
        }
        cout << "\nCont...(y / n) : ";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    getch();
    return 0;
}