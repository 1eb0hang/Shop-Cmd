#include "Product.h"
#include <iostream>

Product::Product(){
	price = 0;
	quantity = 0;
}

Product::Product(Product::Products pName, int pQuantity){
	name = pName;
	price = 0;
	quantity = 0;
}

float Product::GetPrice(Product::Products product){
	return prices[(float)((int)product)];
}