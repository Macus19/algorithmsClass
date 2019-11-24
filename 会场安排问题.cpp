#include<iostream>
#include<algorithm>
using namespace std;
#define MAXLENGTH 1005
struct Meeting {
	int begin;
	int end;
	bool flag = false;
}meetings[MAXLENGTH];

bool cmp(Meeting a, Meeting b) {
	if (a.begin == b.begin) {
		return a.end > b.end;
	}
	else {
		return a.begin < b.begin;
	}
}

int main() {
	int n; // �ܹ��Ļ�����
	int num = 0; // �Ѱ��ŵĻ�������
	int counter = 0; // ��Ҫ���ŵĻ᳡����
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> meetings[i].begin >> meetings[i].end;
	}
	sort(meetings, meetings + n, cmp);
	while (n - num > 0) {
		int pointer = 0;
		for (int i = 0; i < n; i++) {
			if (meetings[i].begin > pointer && !meetings[i].flag) {
				meetings[i].flag = true;
				pointer = meetings[i].end;
				num++;
			}
		}
		counter++;
	}
	cout<<counter<<endl;
	system("pause");
	return 0;
}