#include "shejimoshi24.h"
int main(int argc,char** argv)
{
	APPNAME name=JIAXIN;		
	APPNAME name1=QINGJIA;
	APPNAME name2=SHENGZHI;
	JingLi* jingli=new JingLi("MangerWang");
	ZongJian* zongjian=new ZongJian("MangerLi");
	ZongJingli* zongjingli=new ZongJingli("MangerLei");
	jingli->setsuper(zongjian);
	zongjian->setsuper(zongjingli);
	zongjingli->setsuper(NULL);
	Application* app1=new Application(name,1000);
	Application* app2=new Application(name,2000);
	Application* app3=new Application(name,3000);
	Application* app4=new Application(name1,3);
	Application* app5=new Application(name1,7);
	Application* app6=new Application(name1,30);
	Application* app7=new Application(name1,50);
	Application* app8=new Application(name2,7000);
	Application* app9=new Application(SHENGZHI,12000);
	employee xiaoming=employee("xiaoming");
	xiaoming.SendApplication(app1,jingli);
	xiaoming.SendApplication(app2,jingli);
	xiaoming.SendApplication(app3,jingli);
	xiaoming.SendApplication(app4,jingli);
	xiaoming.SendApplication(app5,jingli);
	xiaoming.SendApplication(app6,jingli);
	xiaoming.SendApplication(app7,jingli);
	xiaoming.SendApplication(app8,jingli);
	xiaoming.SendApplication(app9,jingli);
	return 0;
}
