/**	README ****************************************************
	PROJECT:	XXXX
	AUTHOR:		Li Kong
*** END *******************************************************/
#ifndef _SHEJIMOSHI23_H
#define _SHEJIMOSHI23_H
#include <iostream>
#include <list>
using namespace std;
class Backer
{
public:
	Backer(){}
	~Backer(){}
	void backjitui()
	{
		std::cout<<"¿¾¼¦ÍÈ"<<endl;
	}
	void backyangrou()
	{
		std::cout<<"¿¾ÑòÈâ"<<endl;
	}

};
class Command
{
public:
	Command(Backer* back){backer=back;}
	~Command(){}
	virtual void print()=0;
protected:
	Backer* backer;
};
class Commandyangrou:public Command
{
public:
	Commandyangrou(Backer* back):Command(back){}
	~Commandyangrou(){}
	void print()
	{
		backer->backyangrou();
	}
};
	
class Commandjitui:public Command
{
public:
	Commandjitui(Backer* back):Command(back){}
	~Commandjitui(){}
	void print()
	{
		backer->backjitui();
	}
};
class Waiter
{
private:
	Command* command;
	list<Command*> commandlist;
public:
	Waiter(){}
	~Waiter(){}
	void AddCommand(Command* com)
	{
		commandlist.push_back(com);
	}
	void CancelCommand(Command* com)
	{
		list<Command*>::iterator ite;
		for(ite=commandlist.begin();ite!=commandlist.end();ite++)
		{
			if(*ite==com)
				commandlist.erase(ite);
		}
	}
	void SetList()
	{
		list<Command*>::iterator iter;
		for(iter=commandlist.begin();iter!=commandlist.end();iter++)
		{
			(*iter)->print();
		}	
	}		
};

#endif
