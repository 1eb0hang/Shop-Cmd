#include "Program.h"

#include <array>
#include <string>
#include <iostream>


void Program::ProductsPage(){
	std::array<std::string, 14> products {		
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
	
	std::cout<<"############   PRODUCTS   ############\n";
	for(int i=0; i<products.size(); i+=1){
		std::cout<<"["<<i<<"]"<<"\t"<<products[i]<<std::endl;
	}
}

/*void Program::AcountPage(){
	//
}*/

//void Program::CheckOutPage(){}

void Program::Run(){
	bool exit = false;
	bool validExit = false;
	
	std::cout <<"Shop\n\n";
	while(exit == false){
	}
	
}