#include <iostream.h>
#include <Windows.h>

int main()
{
	int a,d;
float r,c;
SetConsoleOutputCP(1251);
cout<<"������� a-> ";
cin>>a;
cout<<"������� c-> ";
cin>>c;
cout<<"������� d-> ";
cin>>d;
if ((d+a-1)!=0)
{r=(sqrt(25/c)-d+2)/(d+a-1);
	cout<<"��������� "<<r<<endl;
}
else
	cout<<"������ ������� �� 0 ";
return 0;
}
