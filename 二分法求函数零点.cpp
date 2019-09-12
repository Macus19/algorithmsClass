#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
//Ѱ��ƽ��������
double calculate(double x) {
	return pow(x, 5) - 15 * pow(x, 4) + 85 * pow(x, 3) - 225 * pow(x, 2) + 274 * x - 121;
}
//���ַ���ƽ��������
double findSquareRoot(double low,double high) {
	if (high - low <= 1e-6) {
		return high;
	}
	double mid = (low + high) / 2.0;
	if (calculate(mid)*calculate(low) < 0) {
		return findSquareRoot(low, mid);
	};
	if (calculate(mid)*calculate(high)) {
		return findSquareRoot(mid, high);
	}
}

int main() {
	double root;
	root = findSquareRoot(1.5, 2.4);
	cout << setiosflags(ios::fixed) << setprecision(6) << root;
	system("pause");
	return 0;
}