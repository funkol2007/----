#include <iostream>
using namespace std;
class persion
{
public:
	string name;
	persion(string Name):name(Name) {}
	void show()
	{
		cout<<endl;
		cout<<name<<" 的装扮完成！ "<<endl;
	}
};
class zhuangban
{
public:
	persion p;
	zhuangban(persion peo):p(peo) {}
	virtual void decorate() {}
	void show()
	{
		p.show();
	}
	
};
class Tshirt:zhuangban
{	
public:
	Tshirt(persion peo):zhuangban(peo) {} 
	void decorate()
	{
		cout<<" T-shirt"<<endl;
	}
};
class Shoes:zhuangban
{
public:
	Shoes(persion peo):zhuangban(peo) {} 
	void decorate()
	{
		cout<<" Shoes "<<endl;
	}
};
class Tie:zhuangban
{
public:
	Tie(persion peo):zhuangban(peo) {}
	void decorate()
	{
		cout<<" Tie "<<endl;
	}
};
class neiku:zhuangban
{
public:
	neiku(persion peo):zhuangban(peo) {} 
	void decorate()
	{
		cout<<" neiku "<<endl;
	}
};

