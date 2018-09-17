#pragma once

// 이미 정렬된 두 배열 병합
template<typename T1>
void merge_sort(T1 *&a, T1 *&b, T1 *&c, const unsigned int an, const unsigned int bn) {
	unsigned int i = 0, j = 0, k = 0, p;
	while (true)
	{
		if (a[i] < b[j]) {// a:n , b:m

			c[k++] = a[i++];
			if (i >= an)
			{
				for (T1 p = j; p < bn; p++)
				{
					c[k++] = b[p];
				}
				break;
			}
		}
		else {
			c[k++] = b[j++];
			if (j >= bn)
			{
				for (T1 p = i; p < an; p++)
				{
					c[k++] = a[p];
				}
				break;
			}
		}

	}

}
// 이미 정렬된 두 배열 병합. 반환 방식. 이게 편함
template<typename T1>
T1* merge_sort(T1 *&a, T1 *&b, const unsigned int an, const unsigned int bn) {
	T1 *c = new T1[an + bn];
	merge_sort(a, b, c, an, bn);
	return c;
}

// 랭킹 번호 부여하기
template<typename T1>
void f_rnk(T1 *&data, T1 *&rank, const unsigned int c) {
	unsigned int i, j;
	for (i = 0; i < c; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (data[i] < data[j])
			{
				rank[i] ++;
			}
		}
	}
}