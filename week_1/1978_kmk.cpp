#include<iostream>
using namespace std;

//�Ҽ� ã�� ����
// rere �ο� �Լ�  �� ����� �ٽ� �غ���.
bool is_prime(int x)
{
	if (x < 2)
	{
		return false;
	}
	for (int i = 2; i*i <= x; i++)
	{
		if (x%i == 0)
		{
			return false;
		}
	}
	return true;
}


int main()
{
	int N;
	cin >> N;
	int SosuCount = 0;
	int sosu[100];

	for (int i = 0; i < N; i++)
	{
		cin >> sosu[i];
	}
	///////////////////////////////////////
	for (int i = 0; i < N; i++)
	{	
		if (is_prime(sosu[i]))
		{
			SosuCount++;
		}
	}
	cout << SosuCount;
}