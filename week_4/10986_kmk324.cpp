#include<iostream>
#include <algorithm>
#include<vector>
#include <cstdio>
using namespace std;
// #include <vector>�� #include < vector> �� �ߴٰ� ������ ���� ��� �߻�����...
// ���࿡�� ������ �������� ���� �˰��� ä����Ŀ��� ���� ���� ������� ����� �����ϸ� ������
// �߻����� �˾Ҵ�...
int main()
{
	int n, m;
	cin >> n >> m;

	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		a[i] %= m;
	}
	vector <long long> cnt(m, 0);
	cnt[0] = 1; //����.
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
		sum %= m;
		cnt[sum] += 1;
	}

	long long ans = 0;
	for (int i = 0; i < m; i++)
	{
		ans += (long long)cnt[i] * (long long)(cnt[i] - 1) / 2LL;
	}
	cout << ans;
	return 0;
}