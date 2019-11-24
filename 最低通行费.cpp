#include<iostream>
#include<algorithm>
using namespace std;
#define MAXLENGTH 105
//cost[i][j]��ʾ��i��j����Ҫ����С����

void minimumCost(int n, int cost[][MAXLENGTH]) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			// ��ڵ�����
			if (i == 1 && j == 1) {
				cost[i][j] = cost[i][j];
			}
			// ������һ�е����
			else if (i == 1 && j != 1) {
				cost[i][j] = cost[i][j] + cost[i][j - 1];
			}
			// �����һ�е����
			else if (i != 1 && j == 1) {
				cost[i][j] = cost[i][j] + cost[i - 1][j];
			}
			//�������
			else {
				cost[i][j] = min(cost[i][j - 1], cost[i - 1][j])+cost[i][j];
			}
		}
	}
	cout << cost[n][n] << endl;
}

int main() {
	int cost[MAXLENGTH][MAXLENGTH] = { 0 };
	int n;//�����εĿ��
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> cost[i][j];
		}
	}
	minimumCost(n, cost);
	system("pause");
	return 0;
}