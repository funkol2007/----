#include "shejimoshi6.h"
#include <string>
int main(int argc,char **argv)
{
	persion xiaoming("Xiao Ming");

	neiku nei(xiaoming);
	Tshirt tshirt(xiaoming);
	Shoes shoes(xiaoming);
	tshirt.decorate();
	nei.decorate();
	shoes.decorate();
	xiaoming.show();
	return 0;
}
