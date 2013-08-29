#include "shejimoshi16.h"
int main(int argc,char **argv)
{
	State* start=new StateA();
	Work* mywork=new Work(start);
	for(int i=8;i!=26;++i)
	{
		mywork->SetTime(i);
		mywork->GetState();
	}
	return 0;
}/*
//²âÊÔ°¸Àı
#include "shejimoshi16.h"
int main()
{
	War *war = new War(new ProphaseState());
	for(int i = 1; i < 40;i += 5)
	{
		war->SetDays(i);
		war->GetState();
	}
	delete war;
	return 0;
}
*/
