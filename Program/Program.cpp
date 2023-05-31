#include "Program.h"

#include <array>
#include <string>
#include <iostream>

Program::Program(){
	page = Program::Pages::PRODUCTS;
	system("clear");
	discount = (Transaction::Discount)0;
	ProductsPage();

}

Program::~Program(){
	//system("clear");
	std::cout<<"\n";
}

void Program::ProductsPage(){
	system("clear");
	Product::Products price;
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
		price = static_cast<Product::Products>(i);
		std::cout<<"["<<i<<"]"<<"\t"<<products[i]<<"\t\tR"<<product.GetPrice(price)<<std::endl;
	}
	
	std::cout<<"\n\n[-1]\tGot to CHECKOUT\n";
}

void Program::SelectProduct(int selection){
	switch(selection){
		case Product::Products::BREAD:
			//basket.push_back(Product(Product::Products::BREAD, 1));
			basket[0].quantity +=1;
			ProductsPage();
			std::cout<<"\n BREAD has been added to the basket\n";
			break;
			
		case Product::Products::BUNS:
			//basket.push_back(Product::Products::BUNS);
			basket[1].quantity +=1;
			ProductsPage();
			std::cout<<"\n BUNS has been added to the basket";
			break;
		
		case Product::Products::MILK:
			//basket.push_back(Product::Products::MILK);
			basket[2].quantity +=1;
			ProductsPage();
			std::cout<<"\n MILK has been added to the basket";
			break;
		
		case Product::Products::JUICE:
			//basket.push_back(Product::Products::JUICE);
			basket[3].quantity +=1;
			ProductsPage();
			std::cout<<"\n JUICE has been added to the basket";

			break;
		
		case Product::Products::SODA:
			//basket.push_back(Product::Products::SODA);
			basket[4].quantity +=1;
			ProductsPage();
			std::cout<<"\n SODA has been added to the basket";
			
			break;
		
		case Product::Products::TEA:
			//basket.push_back(Product::Products::TEA);
			basket[5].quantity +=1;
			ProductsPage();
			std::cout<<"\n TEA has been added to the basket";

			break;
		
		case Product::Products::COFFEE:
			//basket.push_back(Product::Products::COFFEE);
			basket[6].quantity +=1;
			ProductsPage();
			std::cout<<"\n COFFEE has been added to the basket";
			break;
		
		case Product::Products::OATS:
			//basket.push_back(Product::Products::OATS);
			basket[7].quantity +=1;
			ProductsPage();
			std::cout<<"\n OATS has been added to the basket";

			break;
		
		case Product::Products::CHEESE:
			//basket.push_back(Product::Products::CHEESE);
			basket[8].quantity +=1;
			ProductsPage();
			std::cout<<"\n CHEESE has been added to the basket";
			break;
		
		case Product::Products::POLONY:
			//basket.push_back(Product::Products::POLONY);
			basket[9].quantity +=1;
			ProductsPage();
			std::cout<<"\n POLONY has been added to the basket";

			break;
		
		case Product::Products::ACHAR:
			//basket.push_back(Product::Products::ACHAR);
			basket[10].quantity +=1;
			ProductsPage();
			std::cout<<"\n ACHAR has been added to the basket";

			break;
		
		case Product::Products::NAPPIES:
			//basket.push_back(Product::Products::NAPPIES);
			basket[11].quantity +=1;
			ProductsPage();
			std::cout<<"\n NAPPIES has been added to the basket";

			break;
		
		case Product::Products::AIRTIME:
			//basket.push_back(Product::Products::AIRTIME);
			basket[12].quantity +=1;
			ProductsPage();
			std::cout<<"\n AIRTIME has been added to the basket";

			break;
		
		case Product::Products::DATA:
			//basket.push_back(Product::Products::DATA);
			basket[13].quantity +=1;
			ProductsPage();
			std::cout<<"\n DATA has been added to the basket";

			break;
			
		default:
			ProductsPage();
			std::cout<<"\n\nPlease choose from the options provided"<<std::endl;

			break;
		
	};
}


void Program::EnterAccountDetails(){
	bool inputCorrect = false;
	while(!inputCorrect){
		transaction.SetAccountDetails(inputCorrect);
	}
	page = Program::Pages::RECEIPT;
}

void Program::CheckOutPage(){
	system("clear");
	Product::Products list;
	//std::cout<<"This is checkout page\n";
	
	std::cout<<"\nPlease confirm selected products: ";
	std::string outString = "";
	bool emptyBasket = true; // Chek if basket id empty
	for(int i = 0; i<basket.size(); i+=1){
		if(basket[i].quantity>0)
			emptyBasket=false;
	}
	
	
	if(emptyBasket==true){
		outString = "";
		outString = "\n\nYou have nothing in your basket at the moment";
	}else{
		outString = "\n\n\tPRODUCT\tPRICE\tQUANTITY\tTOTAL\n\n";
		
		for(int i = 0; i<basket.size(); i+=1){
			if(basket[i].quantity>0){
				list = static_cast<Product::Products>(i);
				outString += "\t"+product.GetName(list)+"\t"
				+"R"+std::to_string(product.GetPrice(list))+"\t"
				+std::to_string(basket[i].quantity)+"\t"
				+"R"+std::to_string(product.GetPrice(list) * basket[i].quantity)+"\n";
			}
		}
	}
	
	std::cout<<outString;
	
	std::cout<<"\n\n[-1]\tGo to ACCOUNT INFORMATION";//IF yes send signal for Account page
	std::cout<<"\n\n[-2]\tGo to PRODUCTS\n";//IF yes send out signal to go to Products Page
}

void Program::Reciept(){
	CheckOutPage();
	Product::Products list;
	float total;
	for(int i =0; i<basket.size(); i+=1){
		if(basket[i].quantity>0){
			total+=product.GetPrice(list)*basket[i].quantity; //charge = base_charge + items * item_charge
		}
	}
	
	std::string cuponBool;
	std::cout<<"\n\n\t\tBase\tR";
	std::cout<<"\n\t\tTotal\tR"+std::to_string(total);
	std::cout<<"\n\tCupon Code? Y/N";
	std::cin>>cuponBool;
	
	//if(){}else{}
}


void Program::Select(Pages &currentPage){
	std::cout<<"\n\nPlease select from the list above\n\n\n>> ";
	int selection;
	std::cin>>selection;
	
	switch(currentPage){
		case Program::Pages::PRODUCTS:
			if(selection>=0){
				SelectProduct(selection);
				//std::cout<<selection;
			}else{
				currentPage = Program::Pages::CHECKOUT;
				CheckOutPage();
				//std::cout<<"Checkout";
			}
			break;
			
		case Program::Pages::ACCOUNT:
			
			//std::cout<<"enter account details\n";
			break;
			
		case Program::Pages::CHECKOUT:
			//CheckOut();
			//std::cout<<"Checkout\n";
			CheckOutPage();
			if(selection == -1){
				currentPage=Program::Pages::ACCOUNT;
				EnterAccountDetails();
			}else if(selection == -2){
				currentPage=Program::Pages::PRODUCTS;
				ProductsPage();
			}else{
				std::cout<<"\nPlease enter from the available options\n";
			}
			break;
		
		case Program::Pages::RECEIPT:
			std::cout<<"Reciept page\n";
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