
void number_of_currencies(unsigned long long  p) {
	unsigned long long *pm = new unsigned long long[10];//화폐금액
	unsigned int *tm = new unsigned int[10];//화폐매수
	unsigned long long t = p;
	unsigned int m = 50000, i,s=0;
	//arr_num(pm,10,0);//0으로 초기화
	//arr_num(tm,10,0);
	fill_n(pm, 10, 0);
	fill_n(tm, 10, 0);
	// 화폐단위 구하기
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