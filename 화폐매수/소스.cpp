#include <iostream> //std
#include <string> //getline
#include <time.h>
#include "�迭���.h"
#include "�迭ȸ��.h"
#include "�迭�Ҵ�.h"
#include "����.h"
#include "�˻�.h"
#include "ȭ��ż�.h"

using namespace std;

int main(int argc, char* argv[]) {

	unsigned long long  n;//r:��,c:��

	do
	{
		// �Է� �ޱ�
		cout << "���� ������  �Է�." << endl;
		cout << "0 �Է½� ����" << endl;
		cout << "�迭1 ����:";
		cin >> n;
		if (n == 0)
		{
			break;
		}

		// �ʱ�ȭ
		clock_t begin, end, t;//�ð� ������

		begin = clock();
		number_of_currencies(n);
		end = clock();          // �ð�����		
		t = end - begin;

		cout << "����ð� : " << t << endl;

	} while (true);
}