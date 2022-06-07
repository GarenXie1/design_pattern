///////////////////////////////////////////////////////////
//  Factory.h
//  Implementation of the Class Factory
//  Created on:      01-十月-2014 18:41:33
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_4C08AF19_2960_47a1_B769_9B60CFA50FE0__INCLUDED_)
#define EA_4C08AF19_2960_47a1_B769_9B60CFA50FE0__INCLUDED_

#include "Product.h"
#include <string>
using namespace std;

class Factory
{

public:
	Factory();
	virtual ~Factory();

	/*
	通过类名 "类名::方法" 访问静态成员函数. ( 静态成员函数 不属于 某个类对象的,
	所有对象共享一个函数, 所以不需要实例化类对象,便能通过 类名直接访问访问.*/
	static Product * createProduct(string proname);

};
#endif // !defined(EA_4C08AF19_2960_47a1_B769_9B60CFA50FE0__INCLUDED_)
