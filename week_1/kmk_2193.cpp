#include <iostream>
using namespace std;

int main()
{
	long long D[91];  //���� ���� : 1<n<90 �̶� �ؼ� �ܼ��� D[90]; �� �����ߴ�.
	// ������ D[90]�� �����ϸ� ������ �ε����� 89���� �̹Ƿ� 90�� ���� �����Ⱚ�� ����.
	// ���� ���ϴ� �ε�����+1 ��ŭ ������ �־�� �Ѵ�.

	int n;
	cin >> n;
	D[1] = 1;
	D[2] = 1;
		for (int i = 3; i <= n; i++)
		{
			D[i] = D[i - 1] + D[i - 2];
		}

		cout << D[n] << endl;
		return 0;
}