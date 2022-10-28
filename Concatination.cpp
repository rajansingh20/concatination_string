// Program in C++
#include<iostream>
#include<cstring>
using namespace std;

class String
{
	char str[200];
	public:
		void readstring()
		{
			cout<<"Enter a string: ";
			cin>>str;
		}
		void print()
		{
			cout<<"Entered String is : "<<str<<endl;
		}
		String operator + (String x)
		{
			String t;
			strcpy(t.str,str);
			strcat(t.str,x.str);
			return t;
		}
};
int main()
{
	String s11,s22,s33,s44,s55;
	s11.readstring();
	s22.readstring();
	s33.readstring();
	s44.readstring();
	s55=s11+s22+s33+s44;
	s55.print();
	return 0;
}
