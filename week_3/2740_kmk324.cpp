#include<iostream>
using namespace std;

int main()
{
	int A[101][101];
	int B[101][101];
	int C[101][101];
	int N, M; // ��� A�� N��M��
	int K; // ��� B�� M�� K��
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cin >> A[i][j];
	}

	cin >> M >> K;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < K; j++)
			cin >> B[i][j];
	}
	/////////////////////////////////��� A,B�Է³�//////////
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < K; j++)
		{
			C[i][j] = 0;
			for (int k = 0; k < M; k++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
		
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < K; j++)
		{
			cout << C[i][j] << " ";
		}
		cout << endl;
	}


}