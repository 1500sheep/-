#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// reverse(��Ʈ���̸�.begin(), ��Ʈ���̸�.end()); ��Ʈ���� ������ �ٲ��ش�. ����� #include<algorithm>
int main()
{
	string AfterConvert="";
	//65 ==A95
	long int N; // ���� ����;
	int B; // ���ϴ� ����.

	cin >> N >> B;

	while (N > 0)
	{
		int r = N%B;
		if (r < 10)
		{
			AfterConvert += (char)(r+'0'); //�߿�
		}
		else
		{
			AfterConvert += (char)(r - 10 + 'A');
		}
		N /= B;
	}
	reverse(AfterConvert.begin(), AfterConvert.end());

	cout << AfterConvert << endl;;
	return 0;


}