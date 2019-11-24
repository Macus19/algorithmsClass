#include<iostream>
using namespace std;
#define MAXLENGTH 10000
double cost[MAXLENGTH][MAXLENGTH];
void findCheapest(double cost[][MAXLENGTH],int n) {
	for (int r = 2; r <= n; r++) {
		//�������ȴӳ���Ϊ2�Ŀ�ʼ�������Ž⣬����˵1��2��2��3���ǳ���Ϊ2�ģ�һֱ������Ϊn
		for (int i = 1; i <= n-r+1; i++) {
			//i�ӵ�һ����ʼ��һֱ�����һ��
			int j = r + i - 1;
			//i��j�ĳ��Ⱦ���r
			for (int k = i; k <= j; k++) {
				//��i��j����;��ĳһվ��ʹ��i��j�Ļ�������
				int temp = cost[i][k] + cost[k][j];
				if (temp < cost[i][j]) {
					cost[i][j] = temp;
				}
			}
		}
	}
}
int main() {
	int n;//վ����
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			cin >> cost[i][j];
		}
	}
	for (int i = 1; i < n; i++) {
		cost[i][i] = 0;
	}
	findCheapest(cost, n);
	cout << cost[1][n] << endl;
	system("pause");
	return 0;
}