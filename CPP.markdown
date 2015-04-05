

# C++ Primer ���İ�
# Chapter 1
������
```
int main()
{
    return 0; # Means success
}
```

��������ָ��4��Ԫ�أ��������ͣ����������βα������塣  

Linux�±��룺
```
g++ hello.cc �Co hello
./hello # Execute
echo $? # see the return value from main
```

include����������ͷ�ļ���  
��׼��iostream����<>���������Զ�����á���  
istream��cin������ֵ�����ı������Ͳ�����ʱ�������ctrl+Zʱ�����ص�ֵΪ�٣�������while���С�  
ostream��cout�� cerror, clog��  
iostream�������д����������͵������  
```
#include <iosteam>
int main()
{
    std::cout << "Enter two numbers: " << std::endl; 
    int v1, v2; 
    std::cin >> v1 >> v2; 
    std::cout << "Sum :" << v1 + v2 << std::endl; 
}
```

`<<`��������ÿ�ν������������������Ϊostream�����ұ�Ϊ���ݡ��ñ��ʽִ����󣬷���ostream����  
Manipulator��������endl�����в�ˢ�»�������buff����  

����ǰ����std::��ʹ�������ռ�(namespace)std�ڵĺ�������������ⶨ�����ʱ��ͻ��  
������Scope����������ȡnamespace�еĶ���  

�������ͣ���int����ö�����ֵ��  


��������������������������������������������������������������������������������������


���ڳ���������
	std::cerr<<"Error"<<std::endl;
	return -1;

���ƽṹ��
����while������������ʽ��0ʱִ�С�
int sum=0; int val=1;
while(val<=10)
{
	sum+=val;
	++val;
}
��ѭ������for��ѭ��������ѭ�������ͷţ��������á�
int sum=0;
for(int val=1; val<=10; ++val)
	sum+=val;
����ִ��if��
if(����)
	ִ��;
else
	ִ��;
�ࣺ�Զ����������͡�istreamҲ�ǡ�
	��Ҫ�أ����֡������򡢿�ִ�в�����
Sales_item item; Sales_item���࣬item�Ƕ���
	��Ա������item1.same_isbn(item2)���Ǻ�����

�������.�������������Ķ����Ҳ������ǳ�Ա��
���ò�����()����סʵ�Ρ�

�������ͣ���C++ Primer ���İ�P30��
	bool�� true, false
char��8λ����wchar_t��������16λ����
short��16λ����int��16λ����long��32λ���� ����ʱǰ�ɼ� unsigned��C++��-1��unsigned���͵�255��
float��6λ��Ч���֣���double��10λ��Ч���֣���long double��10λ��Ч���֣���
20�ɶ���20��024��8���ƣ���0x14��
20UL�õ�long��unsigned���͡�
3.14159F=3.14159E0f
ת���ַ�����C++ Primer ���İ�P35��\n, \t, \b�˸����\0���ַ� \�ַ� ת�������֡�
�ַ�����cout<<��a����b����c��������������

C���Դ�Сд���С��ҹؼ��ʲ�����Ϊ���������ؼ��ʱ���C++ Primer ���İ�P41����
������һ��ΪСд��
��ʼ�����Ǹ�ֵ��ֱ�Ӹ�ֵ��int ival (1024); 
��������ĳ�ʼ���Զ�Ϊ0���������ڲ��Զ���ʼ����
��ı�����Ĭ�Ϲ��캯�����Զ��塣

���캯����������γ�ʼ���ĳ�Ա������
��׼����string���幹�캯����
	std::string all_nines(10,��9��); 

����ļ��У�һ���ļ����б����Ķ��壬��������Ҫ������ֻ��������������� extern int i; 
ȫ���������ж���ı��������ھֲ����������������򡣾ֲ����������ȫ�ֶ���ı��������������״�ʹ�õĵط���
���峣����const int bufsize = 512; 
���ã�������ǰ��&�������������ĵ�ַ��ϵ������ int &refVal = ival; 
	���õı���ֵ���ܱ���ֵ����&refValʼ��ָ��ival�ĵ�ַ��

�������͵�ͬ��ʣ� typedef double wages; wages salary; 
ö�٣� enum Points {point2d = 2, point2w, point3d=3, point3w}; 
	ö�ٵĵ�һ����ԱĬ��Ϊ0��֮��Ϊ1��2����ֵ���ĳ�Ա֮���Ĭ�ϵ�����
	enum������һ�����ͣ�����Ҫע�⸳ֵ�����͡�Points pt2w = 3; �����⡣

�����ࣺ����ӿں�ʵ�֡��ӿ�Ϊ��ִ�еĲ�����ʵ�ְ�������������Ҫ�����ݡ�
	class Sales_item {
	public: 
	// operations. 
	private: 
	std::string isbn;
	unsigned units_sold;
	double revenue;
};
������ж��private��public���ʱ�š����������Ƿ���Է��ʡ�public�еĳ�Ա�����Է��ʡ�private�е�ֻ��ִ�й涨�Ĳ����������޸����ݡ�
class�������Ĭ��һ��ʼ����private�� struct�����Ĭ��һ��ʼ��public��

ͷ�ļ������ӳ��������ֵ�ʹ�ú�������������Ķ��壬extern������������������������
Ԥ����ΰ���ͬһͷ�ļ���
	#ifndef SALESITEM.H
	#define SALESITEM.H
	//Define class. 
	#endif

using�����������ռ䣺�����֣���using std::cin; 
C++�̳�C��name.hΪcname��

��׼�����ͣ��ǻ������ͣ�����#include <>; using std:: ;
string
	��ʼ����string s1; string s2 (s1); string s1 (��value��); string s4(n,��c��); 
	���룺�ӷǿ��ַ���ʼ�����ո������
	����һ���У�while(getline(cin,line)) cout<<line<<endl; 
	һ�ַ���st��st.size()��һ������st�а����ո���ַ��������Ǳ�׼������string::size_type���ʹ���ģ�����Ϊ���޷��ų����ͣ����ܸ���int�͡�
	�ַ����ȴ�С�����αȽ�ÿ���ַ���С����֮ǰ��һ�������ַ���С�ڳ��ַ�����
	�±������[]��һ��size_type���������ʵ����ַ����±��0��ʼ���±�������κ�����ֵ�����½�Ϊ0��str.size()-1��
 
�����ַ����е����ַ��ĺ���������һ��intֵ��ʧ��Ϊ0������Ϊ��0ֵ��
tolower��toupper���ص����ַ���
 
vector���������ɰ���ͬһ������������ļ��ϡ�
��ʼ����vector<int> ivec; vector<T> v1; vector<T> v2(v1); vector<T> v3(n, i); vector<T> v4(n) //v4����ֵ��vector��ö�̬���Ԫ�ء���ʼֵ����Ԫ�����;�����
vector�Ĳ�����
v.size()���ص���vector<T>::size_type���͡�
���Ԫ�أ�v.push_back()��
 
�±����ivec[n]�������Ԫ�ء�
	��������vector<int>::iterator iter; ��׼���������Ͷ���iterator��Ա��
	begin ��end��vector<int>::iterator iter = ivec.end(); ָ�����Ԫ�ص���һ��λ�á�::const_iterator ֻ��д��
	�����ò�������*iter=0; ��ͬ��ivec[iter]=0�����ʵ�����ָ���Ԫ�ء�
	������������++��==��!=��
	����������룺iter1-iter2����difference_type���棬��signed��
	�м�Ԫ�أ�vector<int>����iterator mid = vi.begin()+vi.size()/2; 

bitset��λ������bitset<32> bitvec; λ��ֻ����������������λ���0��ʼ��Ϊ��ͽ�λ��
 
bitset �����ʼ����bitset<32> bitvec2(0xffff); 0~15λΪ1��16��32λΪ0��string strval(��1100��); bitset<32> bitvec4(strval); ��bitvec4Ϊ00110000������������롣bitset<32> bitval5(str, 5, 4); ��str�ĵ�5λ�����4���ַ���bitset<32> bitval6(str, str.size()-4); ʡ�Ե����������������ӵڶ��������𵽽�β���ַ��� 
	���Բ�����bool is_set = bitvec.any(); ����1Ϊtrue��
	λ��������Ϊsize_t����#include <cstddef>��
	��������������Ϊ�����ͣ�unsigned long number = b.to_ulong(); 
