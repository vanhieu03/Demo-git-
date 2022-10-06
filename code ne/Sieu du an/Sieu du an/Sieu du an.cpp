#include<iostream>
using namespace std;
int fib(int n)
{
	if (n == 1 || n == 0)
		return n;
	else
		return fib(n - 1) + fib(n - 2);
}
int main()
{
	int n;
	cout << "Nhap so luong cac so trong chuoi fibonacci: ";
	cin >> n;
	cout << n << " so dau trong day fibonacci dau tien : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << fib(i) << endl;
	}
	return 0;
}