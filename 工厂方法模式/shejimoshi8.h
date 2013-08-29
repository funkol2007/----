#include <iostream>
using namespace std;
class LeiFeng
{
public:
	LeiFeng() {}
	 void saodi()
	{
		cout<<"ɨ��"<<endl;
	}
	void xiyi()
	{
		cout<<"ϴ��"<<endl;
	}
	void maimi()
	{
		cout<<"����"<<endl;
	}
};
class DaXueSheng:public LeiFeng
{	
public:
	DaXueSheng() {}
	void jiangke()
	{
		cout<<"����"<<endl;
	}
};
class ZhiYuanZhe:public LeiFeng
{
public:
	ZhiYuanZhe() {}
	void juanqian()
	{
		cout<<"��Ǯ"<<endl;
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
