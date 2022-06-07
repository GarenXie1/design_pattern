#include <iostream>
#include "Factory.h"
#include "Product.h"

using namespace std;

int main(int argc, char *argv[])
{
	Product * prod = Factory::createProduct("A");
		
	prod->Use();
	
	delete prod;

	Product * prod2 = Factory::createProduct("B");
	prod2->Use();
	delete prod2;
	
	return 0;
}
