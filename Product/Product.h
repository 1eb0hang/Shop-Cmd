#pragma once

class Product{
public:
	enum Products{
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
	
	Product(Products pName);
	Product(Products pName, float pPrice, int pQuantity);
	
};