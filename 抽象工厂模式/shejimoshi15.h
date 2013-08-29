#include <iostream>
#include <cstdlib>
using namespace std;
class Iuser
{
public:
	virtual void CreateUser(){}
};
class Auser:public Iuser
{
public:
	void CreateUser(){cout<<"HaHa Create User AAA!"<<endl;}
};
class Buser:public Iuser
{
public:
	void CreateUser(){cout<<"HaHa Create User BBB!"<<endl;}
};
class Idepartment
{
public:
	virtual void CreatDepartment(){}
};
class Adepartment:public Idepartment
{
public:
	void CreatDepartment(){cout<<"HaHa Create Department AAAAA!"<<endl;}
};
class Bdepartment:public Idepartment
{
public:
	void CreatDepartment(){cout<<"HaHa Create Department BBBBB!"<<endl;}
};
class Factory
{
private:
	Iuser* myuser;
	Idepartment* mydepartment;
	string s;
public:
	//Factory()
	void SetString(string str)
	{
		if(str=="A" || str=="B")
			s=str;
		else
		{
			cerr<<"String Your ENTERed MUST BE WRONG!"<<endl;
			abort();
		}
	}
	Iuser* GetUser()
	{
		if(s=="A")
			return new Auser();
		else if(s=="B")
			return new Buser();
	}
	Idepartment* GetDepartment()
	{
		if(s=="A")
			return new Adepartment();
		else if(s=="B")
			return new Bdepartment();
	}
	
	
};
