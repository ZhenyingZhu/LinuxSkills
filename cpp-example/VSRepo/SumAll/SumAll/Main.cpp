#include <iostream>
int main()
{
	int sum = 0, input_value;
	std::cout<<"������������Ҷ������������"<<std::endl;
	while(std::cin>>input_value)
	{
		sum+=input_value;
	}
	std::cout<<"�����"<<sum<<"��"<<std::endl;

//Test while condition
/*	int show;
	bool value;
	value=(std::cin>>show);
	std::cout<<value<<std::endl;
*/
	return 0;
}