#include "Tree.h"
int main()
{
	Tree<int> myTree;
	myTree.add_node(nullptr);
	myTree.add_node(myTree.root);
	myTree.add_node(myTree.root);
	myTree.add_node(myTree.root);
	myTree.add_node(myTree.root);
	//myTree.delete_node(myTree.root);
	printf("%d",myTree.root->value);
}