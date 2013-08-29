#include <iostream>
using namespace std;
class LeiFeng
{
public:
	LeiFeng() {}
	 void saodi()
	{
		cout<<"É¨µØ"<<endl;
	}
	void xiyi()
	{
		cout<<"Ï´ÒÂ"<<endl;
	}
	void maimi()
	{
		cout<<"ÂòÃ×"<<endl;
	}
};
class DaXueSheng:public LeiFeng
{	
public:
	DaXueSheng() {}
	void jiangke()
	{
		cout<<"½²¿Î"<<endl;
	}
};
class ZhiYuanZhe:public LeiFeng
{
public:
	ZhiYuanZhe() {}
	void juanqian()
	{
		cout<<"¾èÇ®"<<endl;
	}	
};
class LeiFengfactory
{
public:
//	LeiFeng * leifeng;
	LeiFengfactory() {}
	virtual LeiFeng* CreatorLeiFeng()
	{
		return new LeiFeng();
	}
};
class DaXueShengfactory:public LeiFengfactory
{
public:
	DaXueShengfactory() {}
	virtual	LeiFeng* CreatorLeiFeng()
	{
		return new DaXueSheng();
	}
};
class ZhiYuanZhefactory:public LeiFengfactory
{
public:
	ZhiYuanZhefactory() {}
	virtual LeiFeng* CreatorLeiFeng()
	{
		return new ZhiYuanZhe();
	}
};
