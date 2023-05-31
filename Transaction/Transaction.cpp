#include "Transaction.h"
#include <iostream>

Transaction::Transaction(){
	bankName= "NedBank";
	totalPrice = 0;
	//CreateCupon("1f2f3f4f");
	//CreateCupon("coopon");
}

std::string Transaction::GetAccountDetails(){
	std::string output = "\n";
	output += "  Bank Name Recipient:\t"+bankName +"\n";
	output += "  Account Number:\t\t"+std::to_string(accountNum) +"\n";
	output += "  Route Number:\t\t"+std::to_string(routeNum) +"\n";
	return output;
}

void Transaction::SetAccountDetails(bool &correct){
	system("clear");
	system("clear");
	std::cout<<"\nEnter account Details\nPlease take extra care to check that you have entered everything correctly\n";

	std::cout<<"\nBank Name Recipient:\t"+bankName;
	std::cout<<"\n\nAccount Number:\t\t";
	std::cin>>accountNum;
	std::cout<<"\nRoute Number:\t\t";
	std::cin>>routeNum;
	
	system("clear");
	
	std::cout<<"Please make sure that you have entered all details correctly:\n";
	std::cout<<GetAccountDetails();
	
	std::cout<<"\nIs this correct? Y/N (default Y):";
	std::string inCorrect;
	std::cin>>inCorrect;
	
	if(inCorrect=="n" || inCorrect=="N"){
		correct = false;
	}else{
		correct = true;
	}
	
}
/*
void Transaction::DestroyCupon(std::string cuponVal){
	cupons.push_back(cuponVal);
}

void Transaction::CreateCupon(std::string cuponVal){
	int pos;
	for(int i = 0; i<cupons.size(); i+=1){
		if(cupons[i]==cuponVal){
			pos = i;
			i += cupons.size();
		}
	}
	
	cupons.erase(cupons.begin()+pos);
}
*/
/*
void Transaction::SetDiscount(Discoint localDiscount, Product product.name, float disAmount){
	product.price-=disAmount;
}

void Transaction::SetDiscount(Discoint localDiscount, Product product.name, int quantity, float disAmount){
	product.price -=(disAmount/quantity);
}

void Transaction::SetDiscount(Discoint localDiscount, Product product.name, int quantity, int percentage){
	product.price -=((percentage/100)*quantity);
}

void Transaction::SetDiscount(Discoint localDiscount, float price, float decrease){
	totalPrice
}

void Transaction::SetDiscount(Discount localDiscount){
	
}

*/
