#include "Transaction.h"


std::string Transaction::GetBasket(){
	std::string strBasket="";
	for(int i = 0; i<basket.size(); i+=1){
		strBasket+=basket[i];
		strBasket+="\n";
	}
		return strBasket;
}