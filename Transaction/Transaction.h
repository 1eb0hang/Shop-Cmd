#pragma once

#include "../Product/Product.h"
#include <string>
#include <vector>

class Transaction{
public:
	
	//std::string GetProductList(){}
	Transaction();

	//Transaction();
	
	std::string GetBasket();
private:
	struct strProduct{
		std::string name;
		int quantity;
		float totalPrice;
		
		strProduct(std::string productName, int productQuanitiy, float productTPrice);
	};
	std::vector<std::string> basket = {};
};
