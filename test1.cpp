#include <iostream>
#include <string>
using namespace std;


int main()
{
	//string words[5];
	//int max_len = 0;

	//for (int i = 0; i < 5; i++)
	//{
	//	cin >> words[i];
	//	if ((int)words[i].size() > max_len)
	//	{
	//		max_len = words[i].size();
	//	}
	//}
	//
	//for (int i = 0; i < max_len; i++)
	//{
	//	for (j = 0; j < 5; j++)
	//	{
	//		if (i < i);
	//	}
	//}

	string words[5];
	int max_len = 0;

	// 5줄 입력받기
	for (int i = 0; i < 5; ++i) {
		cin >> words[i];
		if ((int)words[i].size() > max_len) {
			max_len = words[i].size();
		}
	}

	// 세로 읽기
	for (int i = 0; i < max_len; ++i) {
		for (int j = 0; j < 5; ++j) {
			if (i < words[j].size()) {
				cout << words[j][i];
			}
		}
	}

	cout << endl;


	return 0;
}

#pragma region 배열문제1
//unsigned int n;
//cin >> n;
//
//int* storage = new int[n];
//for (int i = 0; i < n; i++)
//{
//	cin >> storage[i];
//}
//
//int value;
//cin >> value;
//
//int count = 0;
//for (int i = 0; i < n; i++)
//{
//	if (value == storage[i])
//		count++;
//}
//
//cout << count << end;
//
//delete[] storage;
#pragma endregion

#pragma region 배열2
//int num;
//int X;
//cin >> num >> X;
//int* array = new int[num];
//
//for (int i = 0; i < num; i++)
//{
//	cin >> array[i];
//}
//
//for (int i = 0; i < num; i++)
//{
//	if (array[i] < X)
//	{
//		cout << array[i] << " ";
//	}
//}
//
//delete[] array;
#pragma endregion

#pragma region 배열3
//int n;
//cin >> n;
//int* arr = new int[n];
//
//for (int i = 0; i < n; i++)
//{
//	cin >> arr[i];
//}
//int max = arr[0];
//int min = arr[0];
//for (int i = 0; i < n; i++)
//{
//	if (arr[i] > max)
//	{
//		max = arr[i];
//	}
//	if (arr[i] < min)
//	{
//		min = arr[i];
//	}
//
//}
//cout << min << " " << max << endl;
//
//delete[] arr;
#pragma endregion

#pragma region 배열 중 최대값 구하기
//int n[9];
//int count = 0;
//for (int i = 0; i < 9; i++)
//{
//	cin >> n[i];
//}
//
//int max = n[0];
//
//for (int i = 0; i < 9; i++)
//{
//	if (max < n[i])
//	{
//		max = n[i];
//		count = i;
//	}
//}
//
//cout << max << endl;
//cout << count + 1 << endl;

#pragma endregion

#pragma region 배열5
//int N, M;
//cin >> N >> M;
//
//// 바구니 배열 동적할당 및 초기화
//int* basket = new int[N];
//for (int i = 0; i < N; i++) {
//    basket[i] = 0;
//}
//
//// M번 작업 수행
//for (int m = 0; m < M; m++) {
//    int i, j, k;
//    cin >> i >> j >> k;
//
//    // 인덱스 보정: i~j는 1-based → 0-based 로 변환
//    for (int b = i - 1; b <= j - 1; b++) {
//        basket[b] = k;
//    }
//}
//
//// 결과 출력
//for (int i = 0; i < N; i++) {
//    cout << basket[i] << " ";
//}
//cout << endl;
//
//// 동적 메모리 해제
//delete[] basket;
#pragma endregion

#pragma region 배열6
//int N, M;
//// N은 배열 범위, M은 시행횟수
//
//cin >> N >> M;
//int j, k, dump;
//
//int* Box = new int[N];
//
//for (int i = 0; i < N; i++)
//{
//	Box[i] = i + 1; // 각 box에 맞는 숫자 기입;
//}
//for (int i = 0; i < M; i++)
//{
//	cin >> j >> k; // 바구니 정하기
//	dump = Box[j - 1]; // 선택한 바구니 값 복사해놓기;
//	Box[j - 1] = Box[k - 1]; // 두 번째 값 첫 번째 박스에 넣기
//	Box[k - 1] = dump; // 복사한 값 붙여넣기
//
//}
//
//// 출력
//for (int i = 0; i < N; i++)
//{
//	cout << Box[i] << " ";
//}
//
//delete[] Box;
#pragma endregion 

#pragma region 배열7
//	// 학생의 수 1 ~ 30
//	// 제출 안 한 학생의 번호를 구하기
//int check[30];
//int a, b[2];
//int count = 0;
//// 배열의 값들 0으로 초기화
//for (int i = 0; i < 30; i++)
//{
//	check[i] = 0;
//}
//
//// 28명의 출석인원들 체크하기
//for (int i = 0; i < 28; i++)
//{
//	cin >> a;
//	check[a - 1] = a;
//}
//
//// 출석 체크 시작 0이면 비출석
//for (int i = 0; i < 30; i++)
//{
//	if (check[i] != 0)
//	{
//		continue;
//	}
//	else if (check[i] == 0)
//	{
//		b[count] = i + 1;
//		count++;
//	}
//}
//
//if (b[0] < b[1])
//{
//	cout << b[0] << endl;
//	cout << b[1] << endl;
//}
//else {
//	cout << b[1] << endl;
//	cout << b[0] << endl;
//}
#pragma endregion 

#pragma region 배열의 내용물 값들 비교
//
//	//int A;
//	//int B[11] = { 0 };
//	//int count = 0;
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	cin >> A;
//	//	B[i] = A % 42;
//	//}
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	for (int j = 0; j < 10; j++)
//	//	{
//	//		if (B[i] != B[j])
//	//		{
//	//			count++;
//	//		}
//	//		if (j == i)
//	//		{
//	//			count--;
//	//		}
//	//	}
//	//}
//
//	//count = count - 70;
//
//	//cout << count << endl;
//
//int n[10], mod[10] = { 0 }, index = 0, flag = 0;
//for (int i = 0; i < 10; i++) {
//	cin >> n[i];
//}
//for (int i = 0; i < 10; i++) {
//	if (flag == 0) {
//		mod[index] = n[i] % 42;
//		index++;
//		flag++;
//		continue;
//	}
//	int cnt = 0;
//	for (int j = 0; j < index; j++) {
//		if (n[i] % 42 == mod[j]) {
//			cnt++;
//		}
//	}
//	if (cnt == 0) {
//		mod[index] = n[i] % 42;
//		index++;
//	}
//}
//cout << index << endl;
#pragma endregion

#pragma region 배열의 범위 이동

//int N, M;
//cin >> N >> M;
//int* box = new int[N];
//int* dump = new int[N];
//
//for (int i = 0; i < N; i++)
//{
//	box[i] = i + 1;
//	dump[i] = 0;
//}
//
//for (int i = 0; i < M; i++)
//{
//	int a, b = 0;
//	cin >> a >> b;
//	int index = b - 1;
//	for (int j = a - 1; j < b; j++)
//	{
//		dump[j] = box[index];
//		index--;
//	}
//	for (int k = a - 1; k < b; k++)
//	{
//		box[k] = dump[k];
//	}
//}
//
//
//for (int i = 0; i < N; i++)
//{
//	cout << box[i] << " ";
//}
//
//delete[] box;
//delete[] dump;

#pragma endregion 

#pragma region (형변환 주의) 배열로 평균내기
//	// 시험 본 갯수
//int n;
//cin >> n;
//
//// 시험 점수를 저장할 배열
//double* arr = new double[n];
//// 변형된 시험 점수를 저장할 배열
//float* sum = new float[n];
//
//// 변형된 점수의 총합
//float total = 0;
//
//// 점수 기입
//for (int i = 0; i < n; i++)
//{
//	cin >> arr[i];
//}
//// 최대값 초기화
//float max = 0;
//
//// 배열 중 최댓값 선택
//for (int i = 0; i < n; i++)
//{
//	if (max < arr[i])
//		max = arr[i];
//}
//
//
//// arr[i]와 max가 모두 int일 경우 (arr[i] / max)는 항상 0 또는 1만 반환되기 때문에 sum[i]의 대부분이 0이 될 수 있습니다. 해결 방법은 실수형 나눗셈으로 바꾸는 것입니다.
//// 기존 점수 변형 및 변형된 점수 배열에 기입
//for (int i = 0; i < n; i++)
//{
//	sum[i] = ((double)arr[i] / max) * 100;
//	total = total + sum[i];
//
//}
//
//float avg = total / n;
//
//cout << avg << endl;
//
//delete[] arr;
//delete[] sum;


#pragma endregion

#pragma region 문자열(string과 char* 주의점)

//string arr;
//cin >> arr;
//int n = 0;
//cin >> n;
//cout << arr[n - 1] << endl;
//
//return 0;

#pragma endregion

#pragma region 문자열 널위치 주의
//char arr[101];
//cin >> arr;
//cout << strlen(arr) << endl;
#pragma endregion

#pragma region 첫끝문자 출력
//int t = 0;
//cin >> t;
//for (int i = 0; i < t; i++)
//{
//	char arr[1005] = { 0 };
//	cin >> arr;
//	int n = strlen(arr);
//	if (arr[0] != NULL)
//	{
//		cout << arr[0];
//	}
//	if (arr[n] == NULL)
//	{
//		cout << arr[n - 1];
//	}
//	cout << endl;
//}
#pragma endregion

#pragma region 문자열 분리해서 합하기
//int N;
//cin >> N;
//
//string numbers;
//cin >> numbers;
//
//int sum = 0;
//for (int i = 0; i < N; i++) {
//    sum += numbers[i] - '0';  // 문자를 정수로 변환
//}
//
//cout << sum << endl;

#pragma endregion

#pragma region 알파벳 인덱스 변환
//string s;
//cin >> s;
//
//int pos[26]; // 알파벳 26
//for (int i = 0; i < 26; i+글자+) {
//    pos[i] = -1; // 모두 처음엔 -1로 초기화
//}
//
//for (int i = 0; i < s.length(); i++) {
//    int index = s[i] - 'a'; // 알파벳을 인덱스로 변환
//    if (pos[index] == -1) {
//        pos[index] = i; // 처음 등장한 위치만 저장
//    }
//}
//
//for (int i = 0; i < 26; i++) {
//    cout << pos[i] << " ";
//}


#pragma endregion

#pragma region 삼중 for문
//int t;
//cin >> t;
//for (int i = 0; i < t; i++)
//{
//    string s;
//    int N;
//    cin >> N >> s;
//    for (int j = 0; j < s.length(); j++)
//    {
//        for (int k = 0; k < N; k++)
//        {
//            cout << s[j];
//        }
//
//    }
//    cout << endl;
//}
//
//


#pragma endregion

#pragma region 한줄 전체 입력받기
//string line;
//getline(cin, line); // 한 줄 전체 입력받기
//
//int count = 0;
//stringstream ss(line);
//string word;
//
//while (ss >> word) {
//    count++;
//}
//
//cout << count << '\n';


#pragma endregion

#pragma region 배열의 개수 맞추기
//int chess[6] = { 1,1,2,2,2,8 };
//int num[6] = { 0 };
//
//int white[6] = { 0 };
//
//for (int i = 0; i < 6; i++)
//{
//	cin >> white[i];
//}
//
//for (int i = 0; i < 6; i++)
//	num[i] = chess[i] - white[i];
//	}
//	for (int i = 0; i < 6; i++)
//	{
//		{
//			cout << num[i] << " ";
//		}
//
//		return 0;

#pragma endregion

#pragma region 별찍기
//int n = 0;
//cin >> n;
//
//// 윗부분
//for (int i = 1; i <= n; i++) {
//    for (int j = 0; j < n - i; j++) cout << " ";
//    for (int j = 0; j < 2 * i - 1; j++) cout << "*";
//    cout << "\n";
//}
//
//// 아랫부분
//for (int i = n - 1; i >= 1; i--) {
//    for (int j = 0; j < n - i; j++) cout << " ";
//    for (int j = 0; j < 2 * i - 1; j++) cout << "*";
//    cout << "\n";
//}

#pragma endregion

#pragma region 배열의 대칭성 검사
//string s = { 0 };
//cin >> s;
//
//int len = s.length();
//int j = len - 1;
//
//for (int i = 0; i < len; i++)
//{
//	if (s[i] == s[j])
//	{
//		j--;
//		continue;
//	}
//	else
//	{
//		cout << 0 << endl;
//		return 0;
//	}
//}
//cout << 1 << endl;

#pragma endregion

#pragma region 문자열의 등장횟수와 중복 검사
//	//string s = { 0 }; // 입력받을 변수 생성
//	//cin >> s; // 문자열 입력받기
//	//int len = s.length(); // 문자열의 길이 반환
//	//
//	//int pos[26]; // 알파벳 26
//	//for (int i = 0; i < 26; i++) {
//	//    pos[i] = 0; // 모두 처음엔 0으로 초기화
//	//}
//
//	//// 알파벳 중복된 것 증가
//
//
//
//	//int count = 0;
//
//	//for (int i = 0; i < len; i++)
//	//{
//	//	s[i] = toupper(s[i]);
//	//}
//
//	//for (int i = 0; i < len; i++)
//	//{
//	//	for (int j = 0; j < len; j++)
//	//	{
//
//	//	}
//	//}
//
//	string s;
//	cin >> s;
//
//	int pos[26] = { 0 }; // A~Z의 등장 횟수
//
//	for (int i = 0; i < s.length(); i++) {
//		char ch = toupper(s[i]);     // 대문자로 변환
//		pos[ch - 'A']++;             // 알파벳 빈도 수 증가
//	}
//
//	int maxCount = 0; // 최대 빈도
//	int maxIndex = -1;
//	bool isDuplicated = false;
//
//	for (int i = 0; i < 26; i++) {
//		if (pos[i] > maxCount) {
//			maxCount = pos[i];
//			maxIndex = i;
//			isDuplicated = false;
//		}
//		else if (pos[i] == maxCount && maxCount != 0) {
//			isDuplicated = true;
//		}
//	}
//
//	if (isDuplicated)
//		cout << "?" << endl;
//	else
//		cout << char(maxIndex + 'A') << endl;
//
//	return 0;
//}
#pragma endregion

#pragma region 문자변형
//string s;
//cin >> s;

//string patterns[] = { "dz=", "c=", "c-", "d-", "lj", "nj", "s=", "z=" };

//int count = 0;

//for (int i = 0; i < 8; i++) {
//    size_t pos = s.find(patterns[i]);
//    while (pos != string::npos) {
//        s.replace(pos, patterns[i].length(), "#"); // 임시 문자로 대체
//        pos = s.find(patterns[i]); // 다시 검색
//    }
//}

//// 최종 길이가 알파벳 수
//cout << s.length() << endl;
#pragma endregion

#pragma region 그룹 문자체크
//// 1. 단어를 한 글자씩 읽으면서, 이전에 나온 문자인지 확인.
//// 2. 이전 문자와 다를 경우, 이미 나온 문자면 → 그룹 단어가 아님.
//// 3. 아니면 계속 진행.
//// 4. 끝까지 문제가 없으면 그룹 단어
//
//bool isGroupWord(const string& word)
//{
//	vector<bool> visited(26, false); // 알파벳 사용 여부
//	char prev = 0;
//
//	for (char ch : word) // for (size_t  i = 0; i < word.length(); i++) { char ch = word[i]}
//	{
//		if (ch != prev)
//		{
//			if (visited[ch - 'a'])
//				return false;
//			visited[ch - 'a'] = true;
//		}
//		prev = ch;
//	}
//	return true;
//}
//
//int main()
//{
//	int n = 0; // 변수 생성
//	cin >> n; // 변수 N에 시행 횟수 입력
//
//	int count = 0;
//
//	for (int i = 0; i < n; ++i)
//	{
//		string s;
//		cin >> s;
//		if (isGroupWord(s))
//			count++;
//	}
//
//	cout << count << endl;


#pragma endregion

#pragma region 학점 평균 계산
//struct Grade {
//	float ap = 4.5;
//	float a0 = 4.0;
//	float bp = 3.5;
//	float b0 = 3.0;
//	float cp = 2.5;
//	float c0 = 2.0;
//	float dp = 1.5;
//	float d0 = 1.0;
//	float f = 0.0;
//	int count = 0;
//};
//
//bool CharToFloat(string s, float* gd, Grade& g)
//{
//	if (s == "P")
//	{
//		return false;
//	}
//
//	if (s == "A+")
//	{
//		gd[g.count] = g.ap;
//	}
//	else if (s == "A0")
//	{
//		gd[g.count] = g.a0;
//	}
//	else if (s == "B+")
//	{
//		gd[g.count] = g.bp;
//	}
//	else if (s == "B0")
//	{
//		gd[g.count] = g.b0;
//	}
//	else if (s == "C+")
//	{
//		gd[g.count] = g.cp;
//	}
//	else if (s == "C0")
//	{
//		gd[g.count] = g.c0;
//	}
//	else if (s == "D+")
//	{
//		gd[g.count] = g.dp;
//	}
//	else if (s == "D0")
//	{
//		gd[g.count] = g.d0;
//	}
//	else if (s == "F")
//	{
//		gd[g.count] = g.f;
//	}
//	return true;
//
//}
//
//float GradeCal(float* credit, float* grade, int count)
//{
//	float mul = 0.0;
//	float creditall = 0.0;
//
//	for (int i = 0; i < count; i++)
//	{
//		mul += credit[i] * grade[i];
//		creditall += credit[i];
//
//	}
//	float total = mul / creditall;
//
//	return total;
//}
//
//// 로직
//// 1. 과목명과 학점 그리고 성적을 입력받기 ex) programming 3.0 a+ 이런식
//// 2. 20번의 시행횟수(배열의 각각의 크기가 20짜리이다
//// 3. string, float 같은 배열들은 지역변수로 빼서 저장
//
//	string s;
//	float credit[20] = { 0 };
//	string chargrade;
//	float floatgrade[20] = { 0 };
//
//	Grade g;
//
//	float total;
//
//	/*전공평점은 전공과목별(학점 × 과목평점)의 합을 학점의 총합으로 나눈 값이다.
//	P / F 과목의 경우 등급이 P또는 F로 표시되는데, 등급이 P인 과목은 계산에서 제외해야 한다.
//
//		과연 치훈이는 무사히 졸업할 수 있을까 ?*/
//	int n = 20;
//	for (int i = 0; i < n; i++)
//	{
//		float temp_credit;
//		cin >> s >> temp_credit >> chargrade; // 과목 학점 성적 기입
//		if (CharToFloat(chargrade, floatgrade, g))
//		{
//			credit[g.count] = temp_credit;
//			g.count++;
//		}// 학점 변환
//
//	}
//
//
//
//	total = GradeCal(credit, floatgrade, g.count);
//	cout.precision(6);
//	cout << fixed << total << endl;
//
//
#pragma endregion

#pragma region 이중 배열들의 합
	//// 첫째 줄에 행렬의 크기 N 과 M이 주어진다. 둘째 줄부터 N개의 줄에 행렬 A의 원소 M개가 차례대로 주어진다.
	//// 이어서 N개의 줄에 행렬 B의 원소 M개가 차례대로 주어진다.
	//// N과 M은 100보다 작거나 같고, 행렬의 원소는 절댓값이 100보다 작거나 같은 정수이다.

	//int n = 0, m = 0;
	//cin >> n >> m;
	//
	//int** A = new int* [n];
	//for (int i = 0; i < n; i++)
	//	A[i] = new int[m];

	//int** B = new int* [n];
	//for (int i = 0; i < n; i++)
	//	B[i] = new int[m];

	//for (int i = 0; i < n; i++)
	//{
	//	for (int j = 0; j < m; j++)
	//	{
	//		cin >> A[i][j];
	//	}
	//}

	//for (int i = 0; i < n; i++)
	//{
	//	for (int j = 0; j < m; j++)
	//	{
	//		cin >> B[i][j];
	//	}
	//}

	//int** sum = new int* [n];
	//for (int i = 0; i < n; i++)
	//{
	//	sum[i] = new int[m];
	//}
	//

	//for (int i = 0; i < n; i++)
	//{
	//	for (int j = 0; j < m; j++)
	//	{
	//		sum[i][j] = A[i][j] + B[i][j];
	//		cout << sum[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	//for (int i = 0; i < n; i++)
	//{
	//	delete[] A[i];
	//	delete[] B[i];
	//	delete[] sum[i];
	//}

	//delete[] A;
	//delete[] B;
	//delete[] sum;
#pragma endregion

#pragma region 최대값 구하기

//int arr[9][9] = { 0 };
//for (int i = 0; i < 9; i++)
//{
//	for (int j = 0; j < 9; j++)
//	{
//		cin >> arr[i][j];
//	}
//}
//
//
//
//int max = arr[0][0];
//int row = 0;
//int col = 0;
//for (int i = 0; i < 9; i++)
//{
//	for (int j = 0; j < 9; j++)
//	{
//		if (max <= arr[i][j])
//		{
//			max = arr[i][j];
//			row = i + 1;
//			col = j + 1;
//		}
//	}
//}
//cout << max << endl;
//cout << row << " " << col << endl;
#pragma endregion