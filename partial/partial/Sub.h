#pragma once
#include "Expression.h"
class Sub : public Expression
{
public:
	Sub(Expression a, Expression b);
	~Sub();
	void get_children_count();
	void get_child(int n);
	void compute();
};

