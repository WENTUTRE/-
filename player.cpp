#include "player.h"

#include <iostream>
using namespace std;

player::player()
{
	name = 1;
	vector<int> deck(0);
	amount = 0;
}

player::player(string name)     
{
	this->name = name;
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
	
	if (a == "Y")
	{
		amount += 1;
		return 1;
	}
	else if (a == "N")
	{
		amount += 1;
		return 0;
	}
	else
		cout << "try again." << endl; //如果輸入不相關的答案,要再一次重新輸入
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
	if (getAmount() == player2.getAmount()) //先確定牌數是否相同
	{
		if (getPoint() > player2.getPoint()) //玩家點數大,則贏
			cout << getName() << "win." << endl;
		else if (getPoint() <= player2.getPoint()) //玩家點數小或與莊家相同,則輸
			cout << getName() << "lose." << endl;
	}
	else if (getAmount() < player2.getAmount()) //玩家的牌比較少,則輸
	{
		cout << getName() << "lose." << endl;
		display();
		player2.display();
	}
	else //玩家的牌較多,則贏
	{
		cout << getName() << "win." << endl;
		display();
		player2.display();
	}
}

void player::display()   //顯示得點與手牌
{
	cout << getName() << ":" << endl;
	cout << getPoint() << endl;
	MyCard();
}
