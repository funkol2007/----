#include "shejimoshi2.h"
int main(int argc,char **argv)
{
	context cont1("�����");
	cont1.Getcash()->cashin(500);
	context cont2("��300��100");
	cont2.Getcash()->cashin(899);
	context cont3("�����շ�");
	cont2.Getcash()->cashin(399);
	cont3.Getcash()->cashin(900);
	return 0;
}
