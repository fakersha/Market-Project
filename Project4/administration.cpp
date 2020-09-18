#include "administration.h"


administration::administration(string _Nickname, string _Password)
{

	Nickname = _Nickname;
	Password = _Password;


}






void administration::addclient(Client client)
{
	newclient.push_back(client);
}

bool administration::checkadmin(string Password)
{

	if(Password == "Admin1")
	{
		return true;
	}
	return false;
}

void administration::addproduct(product product)
{
	marketi.products.push_back(product);
}

void administration::deleteproduct(int id)
{
	marketi.DeleteProduct(id);
}





