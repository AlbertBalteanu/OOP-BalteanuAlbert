#pragma once
#include "Expression.h"
class Value : public Expression
{
	
public:
	Value(int n);
	~Value();
	void get_children_count();
	void get_child(int n);
	void compute();
};

