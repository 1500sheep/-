#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	string s;
	cin >> s;
	stack <int> st;
	int numcount = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '(')
		{
			st.push(i);  //  '(' �϶��� �ε������� Ǫ���Ѵ�. 
		}
		else 
		{
			if (st.top()+1==i)
			{
				st.pop();  // top+1�� ���� �ε��� ���� �ִٴ� ���� top=i-1�̶�� ���̰�, �ᱹ �� ���� ��(s[i-1])�� '(' ���ٴ� ���̴�. ---> �������� �����. 
				numcount += st.size();
			}
			else
			{
				numcount++;
				st.pop();
			}
		}
	}

	cout << numcount;

	return 0;
}

//���Ǻκ� �� ���� Ȯ���� ��������.