#ifndef tree_H
#define tree_H

struct TreeNode {
     int val;
     struct TreeNode *left;
     struct TreeNode *right;
};

int tree(const struct TreeNode *root, struct TreeNode *queue);

#endif
