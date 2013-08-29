#include <iostream>
using namespace std;
#include <string>
class cashcomp
{
public:
	cashcomp() {}
	virtual void cashin(double total)=0;
};
class cashnormal:public cashcomp
{
public:
	cashnormal() {};
	 void cashin(double total)
	{
		cout<<"你所买物品总价为:\t"<<total<<"实际收款\t"<<total<<endl;
	}
};
class cashdazhe:public cashcomp
{	
public:
	double zhekou;
	cashdazhe(double zhe)
	{
		zhekou=zhe;
	}
	 void cashin(double total)
	{	
		int result= total*zhekou;
		cout<<"你所买物品总价为:\t"<<total<<"实际收款\t"<<result<<endl;
	}
};
class cashfanxian:public cashcomp
{
public:
	int huafei;
	int fanhui;
	cashfanxian(int hua,int fan)
	{
		huafei=hua;
		fanhui=fan;
	}
	 void cashin(double total)
	{
	
		int num=total/huafei;
		double result=total-num*fanhui;
		cout<<"你所买物品总价为:\t"<<total<<"实际收款\t"<<result<<endl;
	}
};
class context
{
private:
	cashcomp *cash;
public:
	cashcomp* Getcash(){return cash;}
	context(string acceptcash)
	{
		if(acceptcash=="打八折")
		{
			cash=new cashdazhe(0.8);
		}
		else if(acceptcash=="满300返100")
		{
			cash=new cashfanxian(300,100);
		}
		else if(acceptcash=="正常收费")
		{
			cash=new cashnormal();
		}
	}

};
