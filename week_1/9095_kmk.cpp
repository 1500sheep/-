#include<iostream>
using namespace std;
//D[n] �� ���� n�� 1,2,3�� �������� ��Ÿ���� ����� ��.
//D[n] = D[n-1]+D[n-2]+D[n-3];
int main()
{
	int T;
	cin >> T;
	int D[11];
	D[0] = 0;
	D[1] = 1;
	D[2] = 2;
	D[3] = 4;

	while (T--)
	{
		int n;
		cin >> n;
		
		for (int i = 4; i <= n; i++)
		{
			D[i] = D[i - 3] + D[i - 2] + D[i - 1];
		}

		cout << D[n] << endl;


	}
}