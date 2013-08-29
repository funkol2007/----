#include "shejimoshi15.h"
int main(int argc,char** argv)
{
	Factory myfactory=Factory();
	myfactory.SetString("A");
	Iuser* myuser=myfactory.GetUser();
	myuser->CreateUser();
	Idepartment* mydepartment=myfactory.GetDepartment();
	mydepartment->CreatDepartment();
	return 0;
}
