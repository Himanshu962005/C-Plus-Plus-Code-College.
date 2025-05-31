// C++ program for In-order Traversal of Binary Tree.
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
    BST() // constructor
    {
        root = NULL;
    }
    // Function to insert value into tree
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
    // Function for inorder tree traversal
    void inorder(NODE *ptr)
    {
        if (root == NULL)
        {
            cout << "\nUnderflow\n";
            return;
        }
        if (ptr != NULL)
        {
            inorder(ptr->left);
            cout << ptr->data << " ";
            inorder(ptr->right);
        }
    }
    // function to display tree structure
    void display(NODE *ptr, int level)
    {
        int i;
        if (ptr != NULL)
        {
            display(ptr->right, level + 1);
            cout << endl;
            if (ptr == root)
            {
                cout << "Root-> : ";
            }
            else
            {
                for (i = 0; i < level; i++)
                {
                    cout << " ";
                }
            }
            cout << ptr->data;
            display(ptr->left, level + 1);
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
        cout << "\n1.Insert Element " << endl;
        cout << "2.In-order Traversal" << endl;
        cout << "3.Display Tree Structure" << endl;
        cout << "4.Exit" << endl;
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
            cout << "In-order Traversal of BST :" << endl;
            bst.inorder(root);
            break;
        case 3:
            cout << "Display BST :" << endl;
            bst.display(root, 1);
            break;
        case 4:
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