#include <iostream.h>
#include <Windows.h>

int main()
{
	int a,d;
float r,c;
SetConsoleOutputCP(1251);
cout<<"¬ведите a-> ";
cin>>a;
cout<<"¬ведите c-> ";
cin>>c;
cout<<"¬ведите d-> ";
cin>>d;
if ((d+a-1)!=0)
{r=(sqrt(25/c)-d+2)/(d+a-1);
	cout<<"–езультат "<<r<<endl;
}
else
	cout<<"ошибка делени€ на 0 ";
return 0;
}
