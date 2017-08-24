#include <iostream>
#include <vector>
using namespace std;

// cin / cout �� ���� �ð� �ʰ��� �߻��Ѵ�.

// �ذ�å���δ� scanf / printf �� ����ϰų�,
// cin / cout ���� std::ios::sync_with_stdio(false) �� �̸� ȣ�����־ 
// �ð� ������ ���� ����� �ִ�.

int main()
{
	int N, M;
	int Sum_S, Sum_E;
	scanf("%d %d", &N, &M);
	
	vector<int> arr(N+1);
	int Ds[100001] = {0};
	for (int i = 1; i <= N; i++)
	{
		scanf("%d", &arr[i]);
		Ds[i] = Ds[i-1] + arr[i];
	}

	while (M--)
	{
		int ans = 0;
		scanf("%d %d", &Sum_S, &Sum_E);
		printf("%d\n", Ds[Sum_E]-Ds[Sum_S-1]);
	}
	return 0;
}