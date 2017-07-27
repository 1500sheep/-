#include <iostream>
using namespace std;

// �����ϴµ� ���� �ָ���.

long long int D[101][11];

int main()
{
	int n;

	cin >> n;
	D[1][0] = 0;
	for (int i = 1; i <= 9; i++)
	{
		D[1][i] = 1;
	}
	
	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			D[i][j] = 0;
			if(j-1 >=0) D[i][j] += D[i - 1][j - 1];
			if (j + 1 <= 9) D[i][j] += D[i -1 ][j + 1];
			D[i][j] %= 1000000000;
		}

	}
	long long int ans=0;
	for (int i = 0; i <= 9; i++)
	{
		ans += D[n][i];
		ans %= 1000000000;
	}

	ans%= 1000000000;
	cout << ans;
	return 0;
}
/*
100���� 0 ~ 99�ϱ� 100�����ϸ� ����
10���� 0 ~ 9�ϱ� 10�����ϸ� ����
D[101][11]�� ��ƾ� ��ĭ���� �����������Ȼ���
*/