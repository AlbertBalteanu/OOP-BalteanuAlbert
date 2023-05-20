#pragma once
#include "Expression.h"
class Neg : public Expression
{
public:
	Neg(Expression a);
	~Neg();
	void get_children_count();
	void get_child(int n);
	void compute();
};

