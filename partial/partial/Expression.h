#pragma once
#include <stdio.h>
class Expression
{
	int val;
	public:
		
		virtual void get_children_count();
		virtual void get_child(int n);
		virtual void compute();
		virtual void print();
};

