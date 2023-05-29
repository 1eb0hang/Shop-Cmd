#pragma once
#include <string>
#include <array>

class Product{
public:
	enum Products : unsigned int{
		BREAD,
		BUNS,
		MILK,
		JUICE,
		SODA,
		TEA,
		COFFEE,
		OATS,
		CHEESE,
		POLONY,
		ACHAR,
		NAPPIES,
		AIRTIME,
		DATA
	};
	 
	Products name;
	float price;
	int quantity;
	
	Product();
	Product(Products pName, int pQuantity);
	
	float GetPrice(Products product);
	std::string GetName(Products product);
	
private:
	
	std::array<std::string, 14> names {	
		"BREAD",
		"BUNS",
		"MILK",
		"JUICE",
		"SODA",
		"TEA",
		"COFFEE",
		"OATS",
		"CHEESE",
		"POLONY",
		"ACHAR",
		"NAPPIES",
		"AIRTIME",
		"DATA"
	};
	
	std::array<float, 14> prices {
		15.0,
		15.0,
		20.0,
		25.0,
		23.0,
		15.0,
		40.0,
		65.0,
		43.0,
		45.0,
		150.0,
		250.0,
		10.0,
		100.0
	};
	
};