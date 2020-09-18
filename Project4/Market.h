#pragma once
#include "product.h"	
#include "Client.h"
#include "Card.h"
using std::vector;
using std::cout;
using std::cin;
using std::string;
using std::endl;
class Market
{

public:
	vector<product>products;
	void AddProducts(product product);
	void ShowProducts();
	void DeleteProduct(int id);

};

