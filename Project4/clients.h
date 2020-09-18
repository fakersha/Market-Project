#pragma once
class clients
{public:
	Gold gold;
	Silver silver;
	vector<Client>clienlist;
	Client client1("levani", 200, gold);
	Client client2("tornike", 200, silver);

	clienlist.push_back(client1);
	clienlist.push_back(client2);

};

