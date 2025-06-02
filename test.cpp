#include <iostream>
using namespace std;

int Same_V(int a, int b, int c);
int Most_Bigger_Value(int a, int b, int c);
int T_same(int a, int b, int c);
int Fac(int n);

int most(int a, int b, int c)
{
	if (a > b && a > c)
		return a;
	if (b > a && b > c)
		return b;
	if (c > a && c > b)
		return c;
}

int main() {
	//// 1번 문제
	//string name;
	//
	//cin >> name;
	//cout << name << "??!\0" << endl;

	//// 2번 문제
	//int year = 0;
	//cin >> year;
	//cout << year - 543 << endl;

	//// 3번 문제

	//int A = 0;
	//int B = 0;
	//int C = 0;

	//cin >> A;
	//cin >> B;
	//cin >> C;

	//cout << (A + B) % C << endl;
	//cout << ((A % C) + (B % C)) % C << endl;
	//cout << (A * B) % C << endl;
	//cout << ((A % C) * (B % C)) % C << endl;

	//// 4번 문제

	//int input1 = 0;
	//int input2 = 0;

	//cin >> input1;
	//cin >> input2;

	//
	//cout << (input2 % 10) * input1 << endl;
	//cout << ((input2 - ((input2 / 100) * 100)) / 10) * input1 << endl; // 십의 자리를 구하기 위해선 100의 자리의 값을 뺴면 된다.
	//cout << (input2 / 100) * input1 << endl;
	//cout << input2 * input1 << endl;

	//// 5번 문제

	//long long a, b, c;
	//cin >> a >> b >> c;
	//cout << a + b + c << endl;

	//// 6번 문제
	//
	//std::cout << "\\    /\\\n";
	//std::cout << " )  ( ')\n";
	//std::cout << "(  /  )\n";
	//std::cout << " \\(__)|\n";
	//	
	
	//// 7번 문제
	//std::cout << "|\\_/|\n";
	//std::cout << "|q p|   /}\n";
	//std::cout << "( 0 )\"\"\"\\\n";
	//std::cout << "|\"^\"`    |\n";
	//std::cout << "||_/=\\\\__|\n";

	// 8번 문제

	//long long a, b;
	//cin >> a >> b;
	//if (a > b) {
	//	cout << '>' << endl;
	//}
	//else if (a < b) {
	//	cout << '<' << endl;
	//}
	//else if (a == b) {
	//	cout << "==" << endl; // '와 "의 차이점?
	//}

	// 9번 문제

	//int score  = 0;
	//cin >> score;

	//if (score > 89) {
	//	cout << "A" << endl;
	//}
	//else if (score < 90 && score > 79) {
	//	cout << "B" << endl;
	//}
	//else if (score < 80 && score > 69) {
	//	cout << "C" << endl;
	//}
	//else if (score < 70 && score > 59) {
	//	cout << "D" << endl;
	//}
	//else
	//	cout << "F" << endl;


	// 10번 문제

	//int year = 0;
	//cin >> year;

	//if ((year % 4) == 0 && ((year % 100) != 0 || (year % 400) == 0))
	//	cout << "1" << endl;
	//else
	//	cout << "0" << endl;

	// 11번 문제

	//int	a = 0;
	//int b = 0;
	//cin >> a;
	//cin >> b;

	//if (a > 0 && b > 0)
	//	cout << "1" << endl;
	//else if (a < 0 && b > 0)
	//	cout << "2" << endl;
	//else if (a < 0 && b < 0)
	//	cout << "3" << endl;
	//else if (a > 0 && b < 0)
	//	cout << "4" << endl;

	// 12번 문제
	
	//int hour = 0;
	//int min = 0;
	//int timeout = 0;
	//
	//cin >> hour >> min;
	//cin >> timeout;
	//
	//int sum = min + timeout;
	//int rest = sum % 60;
	//
	////cout << ((timeout + min) / 60) + hour << " " << ((timeout + min) % 60) << endl;
	//
	//hour += ((timeout + min) / 60);
	//
	//if (hour > 23) {
	//	int H = hour - 24;
	//	cout << H << " " << rest << endl;
	//}
	//else if (hour <= 23) {
	//	
	//	cout << hour << " " << rest << endl;
	//}

	// 13번 문제
	//int a, b;
	//int time;
	//int time_r;
	//int H_r, M_r;
	//cin >> a >> b;
	//
	//time = a * 60 + b;
	//
	//if (time > 45) {
	//	time_r = time - 45;
	//}
	//else if (time <= 45) {
	//	
	//	time_r = 24 * 60 + (time - 45);
	//}
	//
	//H_r = time_r / 60;
	//M_r = time_r % 60;
	//
	//if (H_r == 24) {
	//	H_r = H_r - 24;
	//}
	//
	//cout << H_r << " " << M_r << endl;

	// 14번 문제

	//int fst, scd, trd;
	//int gap;
	//cin >> fst >> scd >> trd;
	//if (fst > 0 && fst <= 6 && scd > 0 && scd <= 6 && trd > 0 && trd <= 6)
	//{
	//	if (fst == scd && scd == trd)
	//		cout << 10000 + 1000 * fst;
	//	else
	//	{
	//		if (fst == scd || fst == trd)
	//			cout << 1000 + 100 * fst;
	//		else if (scd == trd)
	//			cout << 1000 + 100 * scd;
	//		else {
	//			gap = most(fst, scd, trd);
	//			cout << 100 * gap;
	//		}
	//	}

	//}


	// 15번 문제
	//int n = 0;
	//cin >> n;

	//for (int i = 1; i < 10; i++) {
	//	printf("%d * %d = %d\n", n,i, i * n);
	//	}

	// 16번 문제

	//int T = 0;
	//cin >> T;
	//for (int i = 0; i < T; i++) {
	//	int a, b;
	//	cin >> a >> b;
	//	cout << a + b << endl;
	//}

	// 17번 문제

	int n = 0;
	cin >> n;

	int Fac(n);



	return 0;
}
int Fac(int n) {
	if (n <= 0) {
		return n;
	}
}

int T_same(int a, int b, int c) {
	int value = 0;
	if (a == b && b == c && c == a) {
		value = a;
	}
	return value;
}

int Same_V(int a, int b, int c) {
	int value = 0;
	if ((a == b) != c) {
		value = a;
		return value;
	}
	else if ((c == b) != a) {
		value = b;
		return value;
	}
	else if ((a == c) != b) {
		value = c;
		return value;
	}
	else
		return 0;
}

int Most_Bigger_Value(int a, int b, int c) {
	int value = 0;
	if (a > (b | c)) {
		value = a;
		return value;
	}
	else if (b > (a | c)) {
		value = b;
		return value;
	}
	else if (c > (a | b)) {
		value = c;
		return value;
	}
	else
		return 0;
}