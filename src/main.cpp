#include <bits/stdc++.h>
using namespace std;
int main(void)
{
/*	string a;
	a="Wow Fantastic Baby";
	a+=" ";
	a+="how you like that!";
	
	std::cout<<a<<"\n"<<a.size();
	*/
	ios::sync_with_stdio(false); //C 표준 stream 과 c++ 표준 stream 동기화를 끊는다( false.
	cout<<"a\n";
	printf("b\n"); //동기화가 되지 않아서 b가 먼저 출력되거나 나중에 출력된다.
	cout<<"c\n";

	string c="456";
	cin.tie(NULL);
	c[0]++;
	cout<<c;
	
	return 0;
}