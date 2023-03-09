#include<iostream>
using namespace std;
int main() {
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	cout << "请输入小猪A的重量" << endl;
	cin >> num1;
	cout << "请输入小猪B的重量" << endl;
	cin >> num2;
	cout << "请输入小猪C的重量" << endl;
	cin >> num3;

	cout << "小猪A的重量：" << num1 << endl;
	cout << "小猪B的重量：" << num2 << endl;
	cout << "小猪C的重量：" << num3 << endl;

	if (num1 > num2) 
	{
		if (num1 > num3)
		{
			cout << "小猪A的重量最大" << endl;

		}
		else
		{
			cout << "小猪C的重量最大" << endl;
		}

	}
	else
	{

		if (num2 > num3)
		{
			cout << "小猪B的重量最大" << endl;

		}
		else
		{
			cout << "小猪C的重量最大" << endl;
		}


	}



	system("pause");

	return 0;
}