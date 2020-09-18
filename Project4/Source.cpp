#include <iostream>
#include <vector>
#include <string>	
#include "Card.h"
#include "Food.h"
#include "drink.h"
#include "Gold.h"
#include "Silver.h"
#include "Bronze.h"
#include "administration.h"
#include <algorithm>
#include "Source.h"
#include "graphic.h"
using namespace std;

int Count(vector<string> Homeproduct, string name)
{
	int count = 0;
	for (int i = 0; i < Homeproduct.size(); i++)
	{
		if (name == Homeproduct[i])
		{
			count++;
		}
	}
	return count;
}


vector<string> Unique(vector<string> homeproduct)
{
	vector<string> Uniques(1);
	for (int i = 0; i < homeproduct.size(); i++)
	{
		bool foundString = false;
		for (int j = 0; j < Uniques.size(); j++)
		{
			if (Uniques[j]==homeproduct[i])
			{
				foundString = true;
				break;
			}
		}
		if (!foundString)
		{
			Uniques.push_back(homeproduct[i]);
		}
	}
	return Uniques;
}


int main(int argc, char*argv[])
{

	
	
	
	drink energy("Red-Bull", 3, 0.33);
	drink cocacola("Coca Cola", 1.5, 0.5);
	drink pepsicola("Pepsi Cola", 1.5, 0.5);
	drink beer("Heineken", 3, 0.5);
	drink beer1("Corona", 3, 0.33);
	drink juice("Campa", 3, 1);
	drink vodka("Absolute", 40, 1);
	drink whiskey("Chivas regal", 50, 1);
	drink wine("Red wine", 15, 0.7);
	drink wine1("Whine wine", 15, 0.7);

	food snickers("snicker", 2);
	food kitkat("kitkat", 2);
	food meat("meat", 25, 1);
	food apple("apple", 5, 1);
	food banana("banana", 5, 1);
	food orange("orange", 5, 1);
	food cheese("cheese", 20, 1);
	food bread("bread", 0.6);

	Market market;
	market.AddProducts(energy);
	market.AddProducts(cocacola);
	market.AddProducts(pepsicola);
	market.AddProducts(beer);
	market.AddProducts(beer1);
	market.AddProducts(juice);
	market.AddProducts(vodka);
	market.AddProducts(whiskey);
	market.AddProducts(wine);
	market.AddProducts(wine1);
	market.AddProducts(snickers);
	market.AddProducts(kitkat);
	market.AddProducts(apple);
	market.AddProducts(banana);
	market.AddProducts(orange);
	market.AddProducts(cheese);
	market.AddProducts(bread);
	Gold gold;
	Silver silver;
	Bronze bronze;
	administration admin;
	product prod;
	vector<Client>clientlist;
	const char* user1 = "user1.bmp";
	Client client1("levani", 200, gold);
	Client client2("tornike", 200, silver);
	Client client3("arkadi", 500, bronze);
	clientlist.push_back(client1);
	clientlist.push_back(client2);
	clientlist.push_back(client3);
	string Nickname;  cout << "Enter Nickname : " << endl; cin >> Nickname;
	
	bool isClinet = false;
	int clinetIndex;
	for (int i = 0; i < clientlist.size(); i++)
	{
		if (clientlist[i].Name == Nickname)
		{
			isClinet = true;
			clinetIndex = i;
		}
	}
	string clientName;
	double clientBalance;
	string prodName;
	double prodPrice;
	if ("Admin" == Nickname)
	{
		
		string Password;  cout << "Enter Password : " << endl; cin >> Password;
		if (admin.checkadmin(Password))
		{
            cout << "Hello " << Nickname << endl;
			cout << "Please select menu :" << endl;
			cout << "Add Product      :[1]" << endl;
			cout << "Remove product   :[2]" << endl;
			cout << "To add client    :[3]" << endl;
			cout << "Show all client  :[4]" << endl;
			cout << "Add client image :[5]" << endl;
			cout << "Add new Card     :[6]" << endl;
			int numb;
			cin >> numb;
			if (numb == 1)
			{
				cout << "Please write new item name :" << endl;
				cin >> prodName;
				cout << "Please write a price :" << endl;
				cin >> prodPrice;
				food newFood(prodName, prodPrice);
				market.AddProducts(newFood);
				cout << "Admin added  " << prodName << " in market base" << endl;
				market.ShowProducts();
			}
		    if (numb ==2)
			{
				int removeNumb;
				market.ShowProducts();
				cout << "please write product id what you want to remove" << endl;
				cin >> removeNumb;
				market.DeleteProduct(removeNumb);
			}
			if (numb ==3)
			{   
				cout << "please enter the name :" << endl;
				cin >> clientName;
				cout << "please enter the balance : " << endl;
				cin >> clientBalance;
				Client newclient(clientName, clientBalance);
				admin.addclient(newclient);
				cout << "Admin Added new client :" << clientName << " with balance :" << clientBalance << endl;
				

			}
			if (numb==4)
			{
			

				for (int i = 0; i < clientlist.size(); i++)
				{
					cout << "Client Name is: " << clientlist[i].GetName() << " With Balance: " << clientlist[i].GetBalance() << " GEL " << clientlist[i].GetCard().name << " card" << endl;
				}
				
			}
			if (numb==5)
			{
			
				graphic Add;
				int index;
				string imigename = "client.bmp";
				const char* user1 = "user1.bmp";
				const char* user2 = "user2.bmp";
				const char* user3 = "user3.bmp";
					cout << "Add photo to client :";
					cin >> index;
					switch (index)
					{
					case 1:
						cout << "Client Name is: " << clientlist[index - 1].GetName() << " With Balance: " << clientlist[index - 1].GetBalance() << " GEL " << clientlist[index - 1].GetCard().name << " card" << endl;
						Add.AddImage(user1);
						break;
					case 2:
						cout << "Client Name is: " << clientlist[index - 1].GetName() << " With Balance: " << clientlist[index - 1].GetBalance() << " GEL " << clientlist[index - 1].GetCard().name << " card" << endl;
						Add.AddImage(user2);
						break;
					case 3:
						cout << "Client Name is: " << clientlist[index - 1].GetName() << " With Balance: " << clientlist[index - 1].GetBalance() << " GEL " << clientlist[index - 1].GetCard().name << " card" << endl;
						Add.AddImage("C:\\Users\\mr.zi\\Desktop\\corona5.bmp");
						break;
					default:
						break;
					}
					

					

			}

			/*else
			{
				cout << "Wrong number" << endl;
			}*/
		}
		else
		{
			cout << "Wrong Password" << endl;
		}
	}
	if (isClinet)
	{
		int itemId = -1;
		double sumPrice = 0;
		cout << "Hello " << clientlist[clinetIndex].Name << endl;
		market.ShowProducts();
		char symbol;
		vector<string>Homeproduct; 

			bool selling = true;
		while (selling)
		{
			cout << "Please choose id what you want to buy" << endl;
			cin >> itemId;
			if (itemId>=0 && itemId <=16)
			{

				sumPrice += market.products[itemId].GetPrice();
				Homeproduct.push_back(market.products[itemId].GetName());
			}
			else
			{
				selling = false;
			}
		}
		
		double afterDiscount = 0;
		int count=0;
		string cardName = clientlist[clinetIndex].GetCard().name;
		cout << "Your products are :" << endl;

		vector<string> UniqueProducts = Unique(Homeproduct);

		for (int i = 0; i < UniqueProducts.size(); i++)
		{
			if (UniqueProducts[i]!="")
			{
			 cout << UniqueProducts[i] << " quantity: " << Count(Homeproduct, UniqueProducts[i]) << endl;
			}
		}


		cout << "Your price is :" << sumPrice << endl;
		cout << "But you have "<< cardName << " card and you have discount" <<  endl;
		if ("gold" == cardName)
			afterDiscount = gold.discount(sumPrice);
		{
		}
		if ("Silver" == cardName)
		{
			afterDiscount = silver.discount(sumPrice);
		}
		else if ("Bronze" == cardName)
		{
			Bronze bronze;
			afterDiscount = bronze.discount(sumPrice);
		}
		cout << "And you will be pay :" << afterDiscount << endl;

		double balance = clientlist[clinetIndex].GetBalance();
		double minusBalance = balance -= afterDiscount;
		clientlist[clinetIndex].SetBalance(minusBalance);


		if (clientlist[clinetIndex].GetBalance() > 0)
		{
			cout << "Your balance is " << clientlist[clinetIndex].GetBalance() << endl;
		}
		else
		{
			cout << "You have not enough money" << endl;
		}

	}
	else
	{
		system("exit");
	}

	
	SDL_DestroyWindow;
	SDL_Quit();

	system("pause");
	return 0;

}


