#include<iostream>
#include<algorithm>
using namespace std;
#define MAXLENGTH 1005
int program[MAXLENGTH];
int main() {
	int num; // �ļ�����
	int length; // �Ŵ�����
	int sum = 0; // �ɴ�ĳ���ĳ���
	int counter = 0; // ������
	cin >> num >> length;
	for (int i = 0; i < num; i++) {
		cin >> program[i];
	};
	sort(program, program + num);
	for (int i = 0; i < num; i++) {
		sum += program[i];
		if (sum <= length) {
			counter++;
		}
		else {
			break;
		}
	}
	cout << counter << endl;
	system("pause");
	return 0;
}