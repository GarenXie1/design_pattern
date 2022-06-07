///////////////////////////////////////////////////////////
//  Product.h
//  Implementation of the Class Product
//  Created on:      01-十月-2014 18:41:34
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_9126430A_5CDD_4424_AA90_549F255E0D2D__INCLUDED_)
#define EA_9126430A_5CDD_4424_AA90_549F255E0D2D__INCLUDED_

class Product
{

public:
	Product();

	/*
		虚析构的作用:
			问题: 多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码，导致内存泄漏.
			解决: 将父类中的析构函数改为虚析构或者纯虚析构
	*/
	virtual ~Product();

	/*
		纯虚函数:
			1. 当类中有了纯虚函数，这个类也称为抽象类
			2. 抽象类 不能实例化对象
			3. 子类 必须重写 抽象类中的 所有纯虚函数，否则也属于抽象类
	*/
	virtual void Use() = 0;

};
#endif // !defined(EA_9126430A_5CDD_4424_AA90_549F255E0D2D__INCLUDED_)
