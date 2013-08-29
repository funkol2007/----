#include "shejimoshi8.h"
int main(int argc,char **argv)
{
	DaXueShengfactory factory;
	LeiFeng *leifeng=factory.CreatorLeiFeng();
	leifeng->saodi();
	leifeng->maimi();
	leifeng->xiyi();
	leifeng->jiangke();
	return 0;
}
