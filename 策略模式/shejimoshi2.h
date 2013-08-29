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
		cout<<"��������Ʒ�ܼ�Ϊ:\t"<<total<<"ʵ���տ�\t"<<total<<endl;
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
		cout<<"��������Ʒ�ܼ�Ϊ:\t"<<total<<"ʵ���տ�\t"<<result<<endl;
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
		cout<<"��������Ʒ�ܼ�Ϊ:\t"<<total<<"ʵ���տ�\t"<<result<<endl;
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
		if(acceptcash=="�����")
		{
			cash=new cashdazhe(0.8);
		}
		else if(acceptcash=="��300��100")
		{
			cash=new cashfanxian(300,100);
		}
		else if(acceptcash=="�����շ�")
		{
			cash=new cashnormal();
		}
	}

};
