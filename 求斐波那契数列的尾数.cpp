#include<iostream>
using namespace std;
//���Შ�������е�β��
int main() {
	int n, tmp;
	long long arr[100000];
	cin >> n;
	if (n == 0) {
		return;
	};
	arr[0] = 1;
	arr[1] = 1;
	for (int i = 2; i <= n; i++) {
		//������ֻ��β����ֹ�������
		arr[i] = (arr[i - 1] + arr[i - 2]) % 10;
	}
	cout << arr[n - 1];
	system("pause");
	return 0;
}