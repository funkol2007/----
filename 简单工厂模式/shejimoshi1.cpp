#include <iostream>
#include "shejimoshi1.h"
using namespace std;
int main(int argc,char **argv)
{
	try
	{
		Operator *oper;
		operatorfactory operfac;
		oper=operfac.CreatorOperator("*");
		oper->SetnumA(9);
		oper->SetnumB(30);
		oper->Getresult();
	}
	catch(...)
	{
		cerr<<"ERROR OCCURED!"<<endl;
	//	exit(0);
	}
	return 0;
}

