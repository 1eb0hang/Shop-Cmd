#include "Program.h"

#include <array>
#include <string>
#include <iostream>

Program::Program(){
	page = Program::Pages::PRODUCTS;
}

void Program::ProductsPage(){
	system("clear");
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
	
	std::cout<<"\n\n[-1]\tGot to CHECKOUT\n";
}

void Program::SelectProduct(Product::Products selection){
	switch(selection){
		case Product::Products::BREAD:
			basket.push_back(Product::Products::BREAD);
			ProductsPage();
			std::cout<<"\n BREAD has been added to the basket";
			system("sleep 3");
			ProductsPage();
			break;
		
		case Product::Products::BUNS:
			basket.push_back(Product::Products::BUNS);
			ProductsPage();
			std::cout<<"\n BUNS has been added to the basket";
			system("sleep 3");
			ProductsPage();

			break;
		
		case Product::Products::MILK:
			basket.push_back(Product::Products::MILK);
			ProductsPage();
			std::cout<<"\n MILK has been added to the basket";
			system("sleep 3");
			ProductsPage();

			break;
		
		case Product::Products::JUICE:
			basket.push_back(Product::Products::JUICE);
			ProductsPage();
			std::cout<<"\n JUICE has been added to the basket";
			system("sleep 3");
			ProductsPage();

			break;
		
		case Product::Products::SODA:
			basket.push_back(Product::Products::SODA);
			ProductsPage();
			std::cout<<"\n SODA has been added to the basket";
			system("sleep 3");
			ProductsPage();

			break;
		
		case Product::Products::TEA:
			basket.push_back(Product::Products::TEA);
			ProductsPage();
			std::cout<<"\n TEA has been added to the basket";
			system("sleep 3");
			ProductsPage();

			break;
		
		case Product::Products::COFFEE:
			basket.push_back(Product::Products::COFFEE);
			ProductsPage();
			std::cout<<"\n COFFEE has been added to the basket";
			system("sleep 3");
			ProductsPage();

			break;
		
		case Product::Products::OATS:
			basket.push_back(Product::Products::OATS);
			ProductsPage();
			std::cout<<"\n OATS has been added to the basket";
			system("sleep 3");
			ProductsPage();

			break;
		
		case Product::Products::CHEESE:
			basket.push_back(Product::Products::CHEESE);
			ProductsPage();
			std::cout<<"\n CHEESE has been added to the basket";
			system("sleep 3");
			ProductsPage();

			break;
		
		case Product::Products::POLONY:
			basket.push_back(Product::Products::POLONY);
			ProductsPage();
			std::cout<<"\n POLONY has been added to the basket";
			system("sleep 3");
			ProductsPage();

			break;
		
		case Product::Products::ACHAR:
			basket.push_back(Product::Products::ACHAR);
			ProductsPage();
			std::cout<<"\n ACHAR has been added to the basket";
			system("sleep 3");
			ProductsPage();

			break;
		
		case Product::Products::NAPPIES:
			basket.push_back(Product::Products::NAPPIES);
			ProductsPage();
			std::cout<<"\n NAPPIES has been added to the basket";
			system("sleep 3");
			ProductsPage();

			break;
		
		case Product::Products::AIRTIME:
			basket.push_back(Product::Products::AIRTIME);
			ProductsPage();
			std::cout<<"\n AIRTIME has been added to the basket";
			system("sleep 3");
			ProductsPage();

			break;
		
		case Product::Products::DATA:
			basket.push_back(Product::Products::DATA);
			ProductsPage();
			std::cout<<"\n DATA has been added to the basket";
			system("sleep 3");
			ProductsPage();

			break;
		
		default:
			ProductsPage();
			std::cout<<"\n\nPlease choose from the options provided"<<std::endl;
			system("sleep 3");
			ProductsPage();

			break;
		
	};
}


/*void Program::AcountPage(){
	//
}*/

//void Program::EnterAccountDetails(){}

void Program::CheckOutPage(){
	system("clear");
	//std::cout<<"This is checkout page\n";
	std::cout<<"\nPlease confirm selected products:\n";
	
	// Loop through vector of products
	
	// Option for next page
}

//void Program::CheckOut(){}

void Program::Select(Pages currentPage){
	std::cout<<"\n\nPlease select from the list above\n\n\n ";
	int selection;
	std::cin>>selection;
	
	switch(currentPage){
		case Program::Pages::PRODUCTS:
			if(selection<=0){
				SelectProduct((Product::Products)selection);
			}else{
				currentPage = Program::Pages::CHECKOUT;
			}
			break;
			
		case Program::Pages::ACCOUNT:
			//EnterAccountDetails();
			std::cout<<"enter account details\n";
			break;
			
		case Program::Pages::CHECKOUT:
			//CheckOut();
			std::cout<<"Checkout\n";
			break;
	}
}

void Program::Run(){
	bool exit = false;
	bool validExit = false;
	
	std::cout <<"Shop\n\n";
	while(exit == false){
	}
	
}