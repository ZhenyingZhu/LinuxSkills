#include <iostream>
int main()
{
	int v1, v2;
	std::cout<<"Ϊ�ȴ�С������2��"<<std::endl;
	std::cin>>v1>>v2;
	int lower, upper;
	if(v1<=v2)
	{
		lower=v1;
		upper=v2;
	}
	else
	{
		lower=v2;
		upper=v1;
	}
	std::cout<<"С����"<<lower<<",��������"<<upper<<"��"<<std::endl;
	return 0;
}