#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// �� ��Ÿ�� ����??--> �迭�� ���ͷ� �ٲٴϱ� �ذ��.
int main()
{
	int N, M;
	cin >> N >> M;
	vector<int>A(N);
	vector<int>B(M);
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	for (int i = 0; i < M; i++)
	{
		cin >> B[i];
	}
	
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	
	vector<int>C(N+M);
	int LoopCount = N + M;
	int i = 0;	//A�� �ε���,
	int j = 0;	//B�� �ε���,
	int K = 0; // C�� �ε���,
	while(i<N && j<M)
	{
		if (A[i] <= B[j])
		{
			C[K++] = A[i++];// �̰� ������ k�� i�� �����Ѵ�.
		}
		else
		{
			C[K++] = B[j++];
		}
	}
	while (i<N)
	{
		C[K++] = A[i++];
	}
	while (j < M)
	{
		C[K++] = B[j++];
	}

	LoopCount = N + M;
	for (int i = 0; i < LoopCount; i++)
	{
		cout << C[i] << " ";
	}
	return 0;
}