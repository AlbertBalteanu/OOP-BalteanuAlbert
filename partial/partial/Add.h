#pragma once
#include "Expression.h"
class Add : public Expression
{
public:
	Add(Expression a, Expression b);
	~Add();
	void get_children_count();
	void get_child(int n);
	void compute();
};

