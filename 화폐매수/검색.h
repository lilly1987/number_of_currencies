
// d : 배열
// l : 배열 크기
// v : 찿을값
template<typename T1, typename T2>
unsigned int BinarySearch(T1 *&d, unsigned int c, T2 &v) {
	unsigned int l = 0, h = c - 1, m=0;//l:작은 위치, h: 큰 위치 , m 중간값
	do
	{		
		if (l>h)// 각 위치가 교차해서 서로 넘길경우 다 검색 해밨다는 뜻
		{
			return -1;
		}
		m = int((l + h) / 2);
		if (v == d[m]) // 같을경우 반환
		{
			return m;
		}
		if (v < d[m])
		{
			h = m - 1;
		}
		else {
			l = m + 1;
		}
	} while (true);
}