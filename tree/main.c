#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "tree.h"

int main(int argc, char **argv)
{
	if(argc < 2 || argc > 16)
	{
		fprintf(stderr, "Usage: %s [val0 val1 val2 ... val14]\n", argv[0]);
		return -1;
	}

	struct TreeNode arrTree[15];
	int n_tree = 0;
	while(n_tree < argc-1)
	{
		if(argv[n_tree+1][0] == '_'){
			arrTree[n_tree].val = -1;
			n_tree++;
			continue;
		}
		int val = atoi(argv[n_tree+1]);		
		struct TreeNode* me = &arrTree[n_tree];
		me->val = val;
		me->left = NULL;
		me->right = NULL;
			
		n_tree++;
		
		struct TreeNode* parent = &arrTree[(n_tree/2)-1];
		if(parent == me) continue;
		else if(n_tree%2==0) parent->left = me;
		else parent->right = me;
	}
	
	struct TreeNode queue[15];

	printf("tree sum = %d\n", tree(&arrTree[0], queue));
}

