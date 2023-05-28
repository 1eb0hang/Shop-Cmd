#pragma once

#include "../Product/Product.h"
#include <string>
#include <vector>

class Transaction : public Product{
public:
	
	//std::string GetProductList(){}
	//Transaction(){}

	//Transaction();
	
	std::string GetBasket();

private:
	std::vector<std::string> basket {};
};
