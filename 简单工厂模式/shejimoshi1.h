#include<iostream>
#include <string>
using namespace std;
class Operator
{
//private:	
public:
	double numA;
	double numB;
	double result;
	Operator():numA(0),numB(0){}
	virtual void Getresult(){}
	void SetnumA(double numberA){numA=numberA;}
	double GetnumA(){return numA;}
	void SetnumB(double numberB){numB=numberB;}
	double GetnumB(){return numB;}
};
class operatorAdd:public Operator
{
	void Getresult()
	{
		result=numA+numB;
		cout<<numA<<"+"<<numB<<"\nTHE RESULT IS "<<result<<endl;
	}
};
class operatorMiner:public Operator
{
	void Getresult()
	{
		result=numA-numB;
		cout<<numA<<"-"<<numB<<"\nTHE RESULT IS "<<result<<endl;
	}
};
class operatorMulti:public Operator
{
	void Getresult()
	{
		result=numA*numB;
		cout<<numA<<"*"<<numB<<"\nTHE RESULT IS "<<result<<endl;
	}
};
class operatorDiv:public Operator
{
	void Getresult()
	{
		result=numA/numB;
		cout<<numA<<"/"<<numB<<"\nTHE RESULT IS "<<result<<endl;
	}
};
class operatorfactory
{
public:

	operatorfactory() {}
	Operator *optr;
	Operator* CreatorOperator(string oper)
	{
		try{
		if (oper== "+")
		{
			optr=new operatorAdd;return optr;
		}
		else if(oper== "-")
		{
			optr=new operatorMiner;return optr;
		}
		else if(oper=="*")
		{
			optr=new operatorMulti;return optr;
		}
		else if(oper=="/")
		{
			optr=new operatorDiv;return optr;
		}
		}catch(...)
		{
			cerr<<"NO ERROR!"<<endl;
			return NULL;
		}
	}
};

