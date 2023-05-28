#pragma once

class Program{
public:
	enum Page{
		PRODUCTS,
		ACCOUNT,
		CHECKOUT
	};
	
	//Program();
	//~Program();
	
	void ProductsPage();
	void SelectProduct();
	
	void AccountPage();
	void CheckOutPage();
	void Run();
	
private:
	Page page;
};