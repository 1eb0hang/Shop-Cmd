#include "Product.h"
#include <iostream>

Product::Product(Product::Products pName){
	name = pName;
	price = 0;
	quantity = 0;
}

Product::Product(Product::Products pName, float pPrice, int pQuantity){
	name = pName;
	price = 0;
	quantity = 0;
}
