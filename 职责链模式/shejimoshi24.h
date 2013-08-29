/**	README	**************************************************
	PROJECT:		XXXXXX
	AUTHOR:			Li Kong
***	END	***************************************************/
#ifndef _SHEJIMOSHI24_H
#define _SHEJIMOSHI24_H
#include <iostream>
#include <string>
using namespace std;
enum APPNAME
{
	JIAXIN,QINGJIA,SHENGZHI
};
class Application
{	
public:
	APPNAME appname;
	int appnumber;
	Application(APPNAME name,int number):appname(name),appnumber(number){}
	~Application(){}
	void Setappname(APPNAME name)
	{
		appname=name;
	}
	void Setappnumber(int number)
	{
		appnumber=number;
	}
	APPNAME Getappname() const
	{
		return appname;
	}
	int Getappnumber() const
	{
		return appnumber;
	}
	
};
class Manger
{
protected:
	Manger* super;
public:
	string name;
	Manger(){};
	Manger(string str){name=str;super=NULL;}
	~Manger(){}
	virtual void setsuper(Manger* su)
	{
		super=su;
	}
	virtual void appresult(Application* app)=0;

};
class JingLi:public Manger
{
public:
	JingLi(string str){name=str;super=NULL;}
	~JingLi(){}
	void appresult(Application* app)
	{
		if(app->appname==SHENGZHI || app->appname==JIAXIN)
			super->appresult(app);
		else if(app->appname==QINGJIA)
		{
			if(app->appnumber<4)
				std::cout<<"����������٣�"<<endl;
			else
				super->appresult(app);
		}
		else
			std::cout<<"�������"<<endl;
	}
};
class ZongJian:public Manger
{
public:
	ZongJian(string str){name=str;super=NULL;}
	~ZongJian(){}
	void appresult(Application* app)
	{
		if(app->appname==SHENGZHI)
			super->appresult(app);
		else if(app->appname==QINGJIA)
		{
			if(app->appnumber<8)
				std::cout<<"�ܼࣺ������٣�"<<endl;
			else
				super->appresult(app);
		}
		else if(app->appname==JIAXIN)
		{
			if(app->appnumber<1001)
				std::cout<<"�ܼࣺ�����н��"<<endl;
			else
				super->appresult(app);
		}
		else
			std::cout<<"�������"<<endl;
	}	
};
class ZongJingli:public Manger
{
public:
	ZongJingli(string str){name=str;super=NULL;}
	~ZongJingli(){}
	void appresult(Application* app)
	{
		if(app->appname==SHENGZHI)
		{
			if(app->appnumber>9999)
				std::cout<<"�ܾ����õģ������鳤�ѣ�"<<endl;
			else 
				std::cout<<"�ܾ��������ˣ��ڶ���������"<<endl;
		}
		else if(app->appname==QINGJIA)
		{
			if(app->appnumber<31)
				std::cout<<"�ܾ���������٣�"<<endl;
			else
				std:cout<<"�ܾ������̫��������ɲ������У�"<<endl;
		}
		else if(app->appname==JIAXIN)
		{
			if(app->appnumber<2001)
				std::cout<<"�ܾ��������н��"<<endl;
			else
				std::cout<<"�ܾ����ɵĲ���Ҫ�Ķ࣡"<<endl;
		}
		else
			std::cout<<"�������"<<endl;
	}	
};
class employee
{
public:
	string name;
	employee(string str):name(str){}
	~employee(){}
	virtual void SendApplication(Application* app,Manger* manger)
	{
		manger->appresult(app);
	}
};

#endif
