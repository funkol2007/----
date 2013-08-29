#include <iostream>
using namespace std;
class Windows
{
private:
	static Windows* instance;
	Windows() {}
	~Windows()
	{
		if(Windows::instance)
			delete instance;
	}
public:
	static Windows* makeObject()
	{
		if(instance==NULL)
		{
			instance=new Windows();
		}
		return instance;
	}
	void display()
	{
		cout<<"Hello World!"<<endl;
	}
};
Windows* Windows::instance=NULL;
