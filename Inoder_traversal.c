#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node in the binary tree
struct node
{
    int data;
    struct node *left, *right;
};

// Function to create a new node
struct node *createnode(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = newnode->right = NULL;
    return newnode;
}

// Function to perform inorder traversal
void inorder(struct node *root)
{
    if (root == NULL) // base case: if tree is empty
        return;
    inorder(root->left);       // visit left subtree
    printf("%d ", root->data); // visit root node
    inorder(root->right);      // visit right subtree
}

int main()
{
    int rootData, leftData, rightData;
    int leftLeftData, leftRightData, rightLeftData, rightRightData;

    // Ask user for input
    printf("Enter root node value: ");
    scanf("%d", &rootData);

    printf("Enter left child of root: ");
    scanf("%d", &leftData);

    printf("Enter right child of root: ");
    scanf("%d", &rightData);

    printf("Enter left child of left node: ");
    scanf("%d", &leftLeftData);

    printf("Enter right child of left node: ");
    scanf("%d", &leftRightData);

    printf("Enter left child of right node: ");
    scanf("%d", &rightLeftData);

    printf("Enter right child of right node: ");
    scanf("%d", &rightRightData);

    // Build the tree using user input
    struct node *root = createnode(rootData);
    root->left = createnode(leftData);
    root->right = createnode(rightData);
    root->left->left = createnode(leftLeftData);
    root->left->right = createnode(leftRightData);
    root->right->left = createnode(rightLeftData);
    root->right->right = createnode(rightRightData);

    // Print inorder traversal
    printf("Inorder traversal: ");
    inorder(root);

    return 0;
}

/*
Example of this code is here:
Enter root node value: 50
Enter left child of root: 30
Enter right child of root: 10
Enter left child of left node: 20
Enter right child of left node: 40
Enter left child of right node: 60
Enter right child of right node: 80

Inorder traversal: 20 30 40 50 60 10 80
*/
