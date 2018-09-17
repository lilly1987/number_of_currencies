#include <iostream> //std
#include <string> //getline

// �ܼ��� ��� ��¿����� cout �ݺ����� ���°� ���ɻ� ���� ����
// ���������� ������ �ִٸ� �𸦱�
// ������ �̸� ó���� �ѹ��� ����ϴ°� �� ����

using namespace std;

template<typename T1>
void arr_out(const char * front, T1 *&arr, unsigned int v1, const char * back) {
	string  s = "";
	for (int i = 0; i < v1; i++) {
		s += to_string(arr[i]) + '\t';
	}
	cout << front << endl << s << back << endl;
}
template<typename T1>
void arr_out(const char * front, T1 *&arr, unsigned int v1) {
	arr_out(front, arr, v1, "");
}
template<typename T1>
void arr_out(T1 *&arr, unsigned int v1, const char * back) {
	arr_out("", arr, v1, back);
}
template<typename T1>
void arr_out(T1 *&arr, unsigned int v1) {
	arr_out("", arr, v1, "");
}

template<typename T1>
void arr_out(const char * &front, T1 **&arr, unsigned int v1, unsigned int v2, const  char * &back) {

	string  s = "";
	for (int i = 0; i < v1; i++) {
		for (int j = 0; j < v2; j++) {
			s += to_string(arr[i][j]) + '\t';
		}
		s += '\n';
	}
	cout << front << endl << s << back << endl;
}
template<typename T1>
void arr_out(const char * &front, T1 **&arr, unsigned int v1, unsigned int v2) {
	arr_out(front, arr, v1, v2, "");
}
template<typename T1>
void arr_out(T1 **&arr, unsigned int v1, unsigned int v2, const char * &back) {
	arr_out("", arr, v1, v2, back);
}
template<typename T1>
void arr_out(T1 **&arr, unsigned int v1, unsigned int v2) {
	arr_out("", arr, v1, v2, "");
}


