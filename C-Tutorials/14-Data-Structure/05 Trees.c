/*
 * Topic   : Trees
 * Module  : 14 - Data Structures
 *
 * A tree is a hierarchical structure: one root, children, no cycles.
 * Binary tree: each node has at most left and right child.
 *
 * Compile: gcc "05 Trees.c" -o ds05
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode
{
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

TreeNode *node_create(int value)
{
    TreeNode *n = malloc(sizeof(TreeNode));
    if (n == NULL)
        return NULL;
    n->data = value;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void preorder(const TreeNode *root)
{
    if (root == NULL)
        return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void tree_free(TreeNode *root)
{
    if (root == NULL)
        return;
    tree_free(root->left);
    tree_free(root->right);
    free(root);
}

int main(void)
{
    /*
     *       1
     *      / \
     *     2   3
     *    / \
     *   4   5
     */
    TreeNode *root = node_create(1);
    root->left = node_create(2);
    root->right = node_create(3);
    root->left->left = node_create(4);
    root->left->right = node_create(5);

    printf("=== Trees ===\n\n");
    printf("Preorder traversal: ");
    preorder(root);
    printf("\n");

    tree_free(root);

    return 0;
}
