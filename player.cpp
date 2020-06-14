#include "player.h"

#include <iostream>
using namespace std;

player::player()
{
	name = 1;
	point = 0;
	vector<int> deck(0);
	amount = 0;
}

player::player(string name)     
{
	this->name = name;
	point = 0;
	vector<int> deck(0);
	amount = 0;
	
}

void player::setName(string name)
{
	this->name = name;
}





string player::getName()    //得到名字
{
	return name;
}


bool player::action()      //是否抽排
{
	string a;
    cout << "第" << amount + 1 << "次,是否加牌? Y/N......." ;
	cin >> a;
	cout << "---------------------------" << endl;
	amount+=1;
	
	if (a == "Y")
		return 1;
	else if (a == "N")
		return 0;
	else
		cout << "try again." << endl;
	return action();
}

bool player::overflow()    //是否爆
{
	if (getPoint() > 10.5)
		return 1;
	else
		return 0;
}

void player::compare(player player2)   //比大小
{
	if (getAmount() == player2.getAmount())
	{
		if (getPoint() > player2.getPoint())
			cout << getName() << "win." << endl;
		else if (getPoint() <= player2.getPoint())
			cout << getName() << "lose." << endl;
	}
	else if (getAmount() < player2.getAmount())
	{
		cout << getName() << "lose." << endl;
		display();
		player2.display();
	}
	else
	{
		cout << getName() << "win." << endl;
		display();
		player2.display();
	}
}

void player::display()   
{
	cout << getName() << ":" << endl;
	cout << getPoint() << endl;
	MyCard();
}
