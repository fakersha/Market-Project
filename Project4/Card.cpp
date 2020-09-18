#include "Card.h"

void Card::Addcard()
{


	
	string _Name;
	int discount;
	cout << "please enter the card name :";
	cin >> _Name;
	cout << endl;
	cout << "Please enter discount :";
	cin >> discount;
	cout << "Admin Added the new card " << _Name << " With " << discount << " % discount " <<endl;
}
