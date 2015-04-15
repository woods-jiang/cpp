#include<iostream>

using namespace std;

class A
{
public:
	A()
	{
		data = 10;
	}
	int data;
};

int main()
{
	A A;

	cout << A.data << endl;

//	A theA;
	
	return 0;
}