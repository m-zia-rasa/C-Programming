/*
 * Topic   : Binary Search Tree (BST)
 * Module  : 14 - Data Structures
 *
 * For each node: left < node < right.
 * Supports efficient search, insert, and sorted inorder traversal.
 *
 * Compile: gcc "06 Binary-Search-Tree.c" -o ds06
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct BSTNode
{
    int data;
    struct BSTNode *left;
    struct BSTNode *right;
} BSTNode;

BSTNode *bst_insert(BSTNode *root, int value)
{
    if (root == NULL)
    {
        BSTNode *n = malloc(sizeof(BSTNode));
        if (n == NULL)
            return NULL;
        n->data = value;
        n->left = NULL;
        n->right = NULL;
        return n;
    }
    if (value < root->data)
        root->left = bst_insert(root->left, value);
    else if (value > root->data)
        root->right = bst_insert(root->right, value);
    return root;
}

int bst_search(const BSTNode *root, int value)
{
    if (root == NULL)
        return 0;
    if (value == root->data)
        return 1;
    if (value < root->data)
        return bst_search(root->left, value);
    return bst_search(root->right, value);
}

void inorder(const BSTNode *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void bst_free(BSTNode *root)
{
    if (root == NULL)
        return;
    bst_free(root->left);
    bst_free(root->right);
    free(root);
}

int main(void)
{
    BSTNode *root = NULL;
    int values[] = {50, 30, 70, 20, 40, 80};
    int i;
    const int n = (int)(sizeof values / sizeof values[0]);

    printf("=== Binary Search Tree ===\n\n");

    for (i = 0; i < n; i++)
        root = bst_insert(root, values[i]);

    printf("Inorder (sorted): ");
    inorder(root);
    printf("\n");

    printf("Search 40: %s\n", bst_search(root, 40) ? "found" : "not found");
    printf("Search 99: %s\n", bst_search(root, 99) ? "found" : "not found");

    bst_free(root);

    return 0;
}
