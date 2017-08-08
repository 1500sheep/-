#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	bool minus = false;
	
	string n;
	cin >> n;
	vector<int> num;
	vector<int> sign;
	int cur = 0;
	sign.push_back(1); // �� ���°���??  -> ó������ ������ ����ϱ�
	for (int i = 0; i < n.size(); i++)
	{
		if (n[i] == '-' || n[i] == '+')
		{
			if (n[i] == '-')
			{
				sign.push_back(-1);
			}
			else
			{
				sign.push_back(1);
			}
			num.push_back(cur); // ��Ծ�����.
			cur = 0;
		}
		else
			cur = cur * 10 + (n[i] - '0');
			/// num.push_back(cur);  ���Ⱑ �ƴ�. ������;
	}

	num.push_back(cur); //���� ���� Ŀ��Ʈ�ѹ��� ���ؼ� �ۼ��Ѵ�. ������� ���� ����� 0�� ����Ǳ� ������ ��������.
	int ans = 0;
	for (int i = 0; i < num.size(); i++)
	{
		if (sign[i] == -1)
		{
			minus = true;
		}
		if (minus)
		{
			ans -= num[i];
		}
		else
		{
			ans += num[i];
		}
		
	}
	
	cout << ans;

	return 0;
}