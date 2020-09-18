#include "Market.h"

void Market::AddProducts(product product)
{
	products.push_back(product);

}

void Market::ShowProducts()
{
		int i=0;
	for (auto item : products) {
		cout <<"ID : "<<i++ <<" Product Name : "<< item.GetName() << " " <<" Price : "<< item.GetPrice() << endl;
	}
}

void Market::DeleteProduct(int id)
{
	vector<product> newProducts(products.size());
	int index=0;
	for (int i = 0; i < products.size(); i++)
	{
		if (id!=i)
		{
			newProducts[index] = products[i];
			index++;
		}
	}
	cout << "Admin removed " << products[id].GetName() << " from product list" <<endl;
	products = newProducts;
	ShowProducts();
}
