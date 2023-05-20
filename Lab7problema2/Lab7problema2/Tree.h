#pragma once
#include <iostream>
template <class T>
class Tree {
	public:
	struct Node
	{
		T value;
		Node* children[10];
		Node* predecesor;
		int childCount;
	};
	Node* root=nullptr;
	Node* ultim = nullptr;
	int count=0;

	void add_node(Node *predecesor)
	{
		if (predecesor == nullptr)
		{
			root = new Node;
			root->predecesor = nullptr;
			root->children[0] = nullptr;
			root->childCount = 0;
			//
			root->value = count;
			count++;
		}
		else
		{
			predecesor->children[predecesor->childCount ] = new Node;
			predecesor->children[predecesor->childCount ]->predecesor = predecesor;
			predecesor->children[predecesor->childCount ]->children[0] = nullptr;
			ultim = predecesor->children[predecesor->childCount];
			predecesor->childCount++;
			//
			predecesor->children[predecesor->childCount -1]->value = count;
			count++;
		}
	}
	Node* get_node(Node* predecesor)
	{
		if (predecesor == nullptr)
			return root;
		else
			return predecesor;
	}
	void delete_node(Node* nod)
	{
		if (nod == root)
		{
			delete root;
			root = nullptr;
		}
		else
		{
			*ultim = nod->predecesor;
			for (int i = 0; i < ultim->childCount; i++)
			{
				if (ultim->children[i] == nod)
				{	
					ultim->childCount--;
					for (int j = i; j < ultim->childCount; j++)
						ultim->children[j] = ultim->children[j + 1];
				}
				ultim->children[ultim->childCount] = nullptr;
			}
			*ultim = nod;
			for (int i = 0; i < ultim->childCount; i++)
				ultim->children[i] = nullptr;
			nod->predecesor = nullptr;
			delete nod;
			*ultim = nullptr;
		}
	}

	/*
			----Functia astaa nu merge si nu stiu de ce :(-----
	int count(Node* nod)
	{
		if (nod == nullptr)
			*nod = root;
		if (nod->children[0] == nullptr)
			return 1;
		else
		{
			for (int i = 0; i < nod->childCount; i++)
				return 1 + count(nod->children[i]);
		}
		return 0;
	}
	 */
	int compare(T A, T B)
	{
		if (A > B)return 1;
		else 
		if (A < B)return -1;
		else return 0;
	}
	void sort(Node* predecesor,int *callback(T,T))
	{
		for (int i = 0; i < predecesor->childCount-1; i++)
			for (int j = i + 1; i < predecesor->childCount; j++)
			{
				Node* a = predecesor->children[i];
				Node* b = predecesor->children[j];
				if (callback!=nullptr)
				{
					if	
				}
			}
		
	}
	
};
