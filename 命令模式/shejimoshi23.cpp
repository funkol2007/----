#include "shejimoshi23.h"
int main(int argc,char** argv)
{
	Backer* dachu=new Backer();
	Waiter* girl=new Waiter();
	Command* command1= new Commandyangrou(dachu);
	Command* command2= new Commandjitui(dachu);
	Command* command3= new Commandjitui(dachu);
	girl->AddCommand(command1);
	girl->AddCommand(command2);	girl->AddCommand(command3);
	girl->SetList();
	return 0;
}
