#pragma once
#include <iostream>
template <class T>
class Tree {
	public:
	struct Node
	{
		T value;
		Node* children[10];
		Node* predescesor;
		int childCount;
	};
	Node* root;
	int count=0;

	void add_node(Node *predecesor)
	{
		if (predecesor == nullptr)
		{
			root = new Node;
			root->predescesor = nullptr;
			root->children[0] = nullptr;
			root->childCount = 0;
			//
			root->value = count;
			count++;
		}
		else
		{
			predecesor->children[predecesor->childCount] = new Node;
			predecesor->childCount++;
			predecesor->children[predecesor->childCount]->predecesor = predecesor;
			predecesor->children[predecesor->childCount]->children[0] = nullptr;
			//
			predecesor->children[predecesor->childCount]->value = count;
			count++;
		}
	}
	Node* get_node(Node predecesor)
	{
		if (predecesor == nullptr)
			return root;
	}
};
