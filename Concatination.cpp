// Program in C++
#include<iostream>
#include<cstring>
using namespace std;

class String
{
	char str[200];
	public:
		void read()
		{
			cout<<"Enter a string: ";
			cin>>str;
		}
		void print()
		{
			cout<<"String is : "<<str<<endl;
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
	String s11,s22,s33;
	s11.read();
	s22.read();
	s33=s11+s22;
	s33.print();
	return 0;
}
