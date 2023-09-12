#include "tree.h"
#include <stdio.h>

int tree(const struct TreeNode *root, struct TreeNode *queue)
{
	int sum = 0;
	
	queue[0] = *(root);
	int cur = 1;
	int head = 0;
	while(head != cur)
	{
		struct TreeNode* node = &queue[head++];
		if(node->left != NULL) queue[cur++] = *(node->left);
		if(node->right != NULL) queue[cur++] = *(node->right);
		sum += node->val;
	}	
	
	return sum;
}
