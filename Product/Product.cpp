#include "Product.h"
#include <iostream>

Product::Product(){
	price = 0;
	quantity = 0;
}

Product::Product(Product::Products pName, int pQuantity){
	name = pName;
	price = prices[(int)pName];
	quantity = pQuantity;
}

float Product::GetPrice(Product::Products product){
	return prices[(float)((int)product)];
}

std::string Product::GetName(Product::Products product){
	return names[product];
}