#include <iostream>
int main()
{
	int mon;
	int start, monday;
	int week=1;
	std::cout<<"2013������"<<std::endl<<"�������·�"<<std::endl;
	std::cin>>mon;
	if(mon>=1 && mon<=12)
	{
		std::cout<<"��"<<'\t'<<"һ"<<'\t'<<"��"<<'\t'<<"��"<<'\t'<<"��"<<'\t'<<"��"<<'\t'<<"��"<<'\t'<<std::endl;
		start=6; monday=31;
		for(int j=1;j<start;++j)
		{
			std::cout<<" "<<'\t';
			++week;
		}
		for(int i=1;i<=monday;++i)
		{
			if(week<=7)
			{
				std::cout<<i<<'\t';
				++week;
			}
			else
			{
				std::cout<<std::endl;
				week=1;
			}
		}
		std::cout<<std::endl<<mon<<"�µ�����Ŷ"<<std::endl;
	}
	else
	{
		std::cout<<"�㿪��ϲ����"<<std::endl;
	}
	return 0;
}