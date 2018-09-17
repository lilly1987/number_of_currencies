#include <iostream> //std
#include <string> //getline
#include <time.h>
#include "배열출력.h"
#include "배열회전.h"
#include "배열할당.h"
#include "정렬.h"
#include "검색.h"
#include "화폐매수.h"

using namespace std;

int main(int argc, char* argv[]) {

	unsigned long long  n;//r:행,c:열

	do
	{
		// 입력 받기
		cout << "양의 정수만  입력." << endl;
		cout << "0 입력시 종료" << endl;
		cout << "배열1 갯수:";
		cin >> n;
		if (n == 0)
		{
			break;
		}

		// 초기화
		clock_t begin, end, t;//시간 측정용

		begin = clock();
		number_of_currencies(n);
		end = clock();          // 시간설정		
		t = end - begin;

		cout << "수행시간 : " << t << endl;

	} while (true);
}