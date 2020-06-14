#include <iostream>
#include <vector>
#include <ctime>
#include <string> 
#include "player.h"
#include "Card.h"
using namespace std;

int main()
{
	vector<int> deck(52); //公用牌組
	string name;

	for (int i = 0; i < 52; i++)
		deck[i] = i;

	//詢問名字
	cout << "Your player name is?......." ;
	cin >> name;

	//創建人物
	player p1(name);
	player p2("莊家");

	//洗牌
	p1.shuffle(deck);

	//第一輪拿牌
	p2.setCard(p1.drawCard(deck));
	p1.setCard(p1.drawCard(deck));
	p1.display();

	//第二輪之後
	for (int i = 0; i < 4; i++)
	{
		p2.setCard(p1.drawCard(deck));
		p2.getPoint();
		p2.getCard();

		//詢問是否加牌
		if (p1.action())
		{
			p1.setCard(p1.drawCard(deck));
			p1.display();
		}

		//確認是否爆牌
		if (p1.overflow())
			break;
		if (p2.overflow())
			break;
	}

	//結果
	if (p1.overflow())
	{
		cout << "玩家爆牌" << endl;
		cout << p1.getName() << " lose." << endl;
		p2.display();
	}
	else if (p2.overflow())
	{
		cout << "莊家爆牌" << endl;
		cout << p2.getName() << " lose." << endl;
		p2.display();
	}
	//若無爆牌,則比大小
	else p1.compare(p2);

	system("pause");
	return 0;
}
