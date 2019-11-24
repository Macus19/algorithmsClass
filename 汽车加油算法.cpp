#include<iostream>
using namespace std;
#define MAX 1005
int counter; // ��¼���ټ��ʹ���
int distances[MAX]; // ��¼����վ֮��ľ���
int canDrive; // һ�μ��Ϳ�����ʻ�ľ���
int num; // ����վ����

void lessCount() {
	int sum = 0;
	for (int i = 0; i <= num; i++) {
		if (distances[i] > canDrive) {
			cout << "No Solution!" << endl;
			return;
		}
	}
	for (int i = 0; i <=num; i++) {
		sum += distances[i];
		if (sum > canDrive) {
			counter++;
			sum = distances[i];
		}
	}
	cout << counter << endl;
};

int main() {
	cin >> canDrive >> num;
	for (int i = 0; i <= num; i++) {
		cin >> distances[i];
	}
	lessCount();
	system("pause");
	return 0;
}