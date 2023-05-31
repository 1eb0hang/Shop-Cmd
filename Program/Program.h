#pragma once
#include "../Transaction/Transaction.h"
#include "../Product/Product.h"

#include <string>
#include <array>

class Program{
public:
	enum Pages{
		PRODUCTS,
		ACCOUNT,
		CHECKOUT,
		RECEIPT
	};
	
	Pages page;
	
	Program();
	~Program();
	
	void ProductsPage();
	void SelectProduct(int selection);
	
	void EnterAccountDetails();
	
	void CheckOutPage();
	
	void Reciept();

	void Select(Pages &currentPage);
	void Run();

	
private:
	Product product;
	std::array<Product, 14> basket {
		Product(Product::Products::BREAD, 0),
		Product(Product::Products::BUNS, 0),
		Product(Product::Products::MILK, 0),
		Product(Product::Products::JUICE, 0),
		Product(Product::Products::SODA, 0),
		Product(Product::Products::TEA, 0),
		Product(Product::Products::COFFEE, 0),
		Product(Product::Products::OATS, 0),
		Product(Product::Products::CHEESE, 0),
		Product(Product::Products::POLONY, 0),
		Product(Product::Products::ACHAR, 0),
		Product(Product::Products::NAPPIES, 0),
		Product(Product::Products::AIRTIME, 0),
		Product(Product::Products::DATA, 0),
	};
	Transaction transaction;
	Transaction::Discount discount;
};