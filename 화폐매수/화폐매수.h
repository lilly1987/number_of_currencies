
void number_of_currencies(unsigned long long  p) {
	unsigned long long *pm = new unsigned long long[10];//ȭ��ݾ�
	unsigned int *tm = new unsigned int[10];//ȭ��ż�
	unsigned long long t = p;
	unsigned int m = 50000, i,s=0;
	//arr_num(pm,10,0);//0���� �ʱ�ȭ
	//arr_num(tm,10,0);
	fill_n(pm, 10, 0);
	fill_n(tm, 10, 0);
	// ȭ����� ���ϱ�
	for (i = 0; i < 10; i++)
	{
		tm[i] = t / m;
		pm[i] = m;
		t -= (t / m )*m;
		if (s==1)
		{
			m /= 2;
			s = 0;
		}
		else {
			m /= 5;
			s = 1;
		}
	}
	string x;
	for ( i = 0; i < 10; i++)
	{
		x += to_string(pm[i]) + '\t';
		x += to_string(tm[i]) + '\n';
	}
	cout << x;
	delete pm, tm;

}