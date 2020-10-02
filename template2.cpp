#include <iostream>
#include <string>
using namespace std;

template <class T>
void swapfn(T&a, T&b)
{
	T c;
	c=a;
	a=b;
	b=c;
	cout<<a<<" and "<<b<<endl;
	return;
}

int main()
{
	int i_one = 3, i_two = 5;
	float f1 = 5.6, f2 = 7.3;
	string str1 = "donkey", str2 = "apple";
	cout<< "The swap of " <<i_one<< " and " <<i_two<< " is ";
	swapfn(i_one, i_two);
	//Test your template on float and string types
	cout<< "The swap of " <<f1<< " and " <<f2<< " is ";
	swapfn(f1, f2);
	cout<< "The swap of " <<str1<< " and " <<str2<< " is ";
	swapfn(str1, str2);
	return 0;
}

