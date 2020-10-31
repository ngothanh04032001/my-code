#include<iostream>
#include<process.h>
using namespace std;
const int LIMIT=100;
class safearay
{
	private:
		int arr[LIMIT];
	public:
		int& operator [](int n)
		{
			if(n<0||n>=LIMIT)
			{cout<<"\nindex out of bounds";exit(1);}
			return arr[n];
		}
};
int main()
{
	safearay sa1;
	for(int j=0;j<LIMIT;j++)
	{
		int temp=sa1[j];
		cout<<"element "<<j<<"is "<<temp<<endl;
	}
	return 0;
}
