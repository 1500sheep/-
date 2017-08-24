#include<iostream>
#include <vector>
#include <algorithm>
#define MAX 2100000000
using namespace std;
// https://www.acmicpc.net/blog/view/9#comment-42 ���׸�ƮƮ�� ����

// ��尡 ����ϰ� �ִ� �κ� ex)n=10�� �� ��� 1=0~9�� Node_S�� Node_E�� ǥ��.
// �� ���1�� Node_S=0�̰� Node_E=9�̴�.
// �ּҰ��� ���ؾ� �ϴ� ������ Minimum_L �� Minimum_R�� ǥ��.

// Ʈ���� ��尡 ��� �迭 arr
// Ʈ���� ����� ���� ��� �迭 tree
int init(vector<int>&arr, vector<int> &tree, int node, int Node_S, int Node_E)
{
	if (Node_S == Node_E)
	{
		return tree[node] = arr[Node_S];
	}
	else
		return tree[node] = min(init(arr, tree, 2 * node, Node_S, (Node_S + Node_E) / 2), init(arr, tree, 2 * node + 1, (Node_S + Node_E) / 2 + 1, Node_E));
}

int MIN(vector<int> &tree, int node, int Node_S, int Node_E, int Minimum_L, int Minimum_R)
{
	if (Minimum_L > Node_E || Minimum_R < Node_S) // Ž�������� ����� ������ ����� ���
		return MAX;
	if (Minimum_L <= Node_S && Node_E <= Minimum_R)
		return tree[node]; //�����ʿ�

	return min(MIN(tree, node * 2, Node_S, (Node_S + Node_E) / 2, Minimum_L, Minimum_R), MIN(tree, node * 2 + 1, (Node_S + Node_E) / 2 + 1, Node_E, Minimum_L, Minimum_R));
}

int main()
{
	int n, m, a, b;
	scanf("%d %d", &n, &m);
	vector<int> arr(100005), tree(300000);
	for (int i = 0; i < n; i++)
	scanf("%d", &arr[i]);	
	
	init(arr, tree, 1, 0, n - 1);

	while (m--)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", MIN(tree, 1, 0, n - 1, a - 1, b - 1));
	}
	return 0;

}