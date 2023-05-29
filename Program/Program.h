#pragma once
#include "../Transaction/Transaction.h"
#include "../Product/Product.h"

#include <vector>

class Program{
public:
	enum Pages{
		PRODUCTS,
		ACCOUNT,
		CHECKOUT
	};
	
	Program();
	~Program();
	
	void ProductsPage();
	void SelectProduct(Product::Products selection);
	
	void AccountPage();
	//void EnterAccountDetails();
	
	void CheckOutPage();

	void Select(Pages currentPage);
	void Run();

	
private:
	Pages page;
	Product product;
	std::vector<Product> basket = {};
	Transaction transaction;
};