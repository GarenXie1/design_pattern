///////////////////////////////////////////////////////////
//  ConcreteProductA.h
//  Implementation of the Class ConcreteProductA
//  Created on:      01-十月-2014 18:41:33
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_7A08FFBB_5AD4_4f9c_AE53_998AC5E88F34__INCLUDED_)
#define EA_7A08FFBB_5AD4_4f9c_AE53_998AC5E88F34__INCLUDED_

#include "Product.h"

class ConcreteProductA : public Product
{

public:
	ConcreteProductA();
	virtual ~ConcreteProductA();
	
	/*
		函数前面加上 virtual关键字，变成虚函数，那么编译器在 编译阶段 就不能确定函数调用了
		定义他为虚函数是为了允许用基类的指针来调用子类的这个函数。
		*/
	virtual void Use();

};
#endif // !defined(EA_7A08FFBB_5AD4_4f9c_AE53_998AC5E88F34__INCLUDED_)
