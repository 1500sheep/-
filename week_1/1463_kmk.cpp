#include <iostream>
using namespace std;
// bottom-up ���,
// ���������� ���� ��.
// ���� �������� ��Ÿ�� ������ �ߴµ� ����ü ������ ����?
int main()
{
	int D[100000];
	
	int select;

	cin >> select;
	D[1] = 0;
	for (int i = 2; i <= select; i++)
	{
		D[i] = D[i-1] + 1;
		if (i % 3 == 0 && D[i] > D[i / 3] + 1)
		{
			D[i] = D[i / 3] + 1;
		}
		if (i % 2 == 0 && D[i] > D[i / 2] + 1)
		{
			D[i] = D[i / 2] + 1;
		}
	}
	cout << D[select];

	return 0;
}