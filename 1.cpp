#include<iostream>;
//test
using namespace std;
int main()
	{
	int n,i;

	double result=0;
	cout<<"下面将进行阶乘运算n!\n请输入n的值\n";
	cin>>n;
	if(n<1)
	{
		cout<<"输入错误！"<<endl;
		return 1;
	}
	result=1;
	for (i=2;i<=n;i++)result*=i;
	cout<<result<<endl;
	return 0;
}
