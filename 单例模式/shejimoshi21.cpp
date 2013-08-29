#include "shejimoshi21.h"
int main(int argc,char **argv)
{
	Windows* w=Windows::makeObject();
	Windows* w1=Windows::makeObject();
	w->display();
	w1->display();
	if(w==w1)
		cout<<"OH,SAME!"<<endl;
	return 0;
}
