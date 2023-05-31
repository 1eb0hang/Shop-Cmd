#pragma once

#include "../Product/Product.h"
#include <string>
#include <vector>

class Transaction{
public:
	enum Discount{
		NO_DIS = 0,
		ITEM_DIS,
		QUANTITY_DIS,
		TOTAL_PRICE_DIS,
		CUPON
	};
	
	float totalPrice;
	
	//charge = base_charge + items * item_charge
	//std::string GetProductList(){}
	Transaction();

	//Transaction();
	
	std::string GetAccountDetails();
	
	void SetAccountDetails(bool &correct);
	/*
	void CreateCupon(std::string cuponVal);
	void DestroyCupon(std::string cuponVal);
	
	void SetDiscount(Discoint localDiscount, Product product.name, float disAmount);
	void SetDiscount(Discoint localDiscount, Product product.name, int quantity, float disAmount);
	void SetDiscount(Discoint localDiscount, Product product.name, int quantity, int percentage);
	void SetDiscount(Discoint localDiscount, float price, float decrease);
	void SetDiscount(Discount localDiscount);
	//void ApplyCupon(std::string);
	*/
private:
	std::string bankName;
	unsigned long long accountNum;  //they are big to ensure that values entered are int values
	unsigned long routeNum;
	
	
	//print Bank name
	//get bank account number [7<20; int]
	//get route/transit mumber [9]
	
	std::vector<std::string> cupons = {};
};
