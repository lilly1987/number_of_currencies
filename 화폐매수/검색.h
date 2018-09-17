
// d : �迭
// l : �迭 ũ��
// v : �O����
template<typename T1, typename T2>
unsigned int BinarySearch(T1 *&d, unsigned int c, T2 &v) {
	unsigned int l = 0, h = c - 1, m=0;//l:���� ��ġ, h: ū ��ġ , m �߰���
	do
	{		
		if (l>h)// �� ��ġ�� �����ؼ� ���� �ѱ��� �� �˻� �ؓR�ٴ� ��
		{
			return -1;
		}
		m = int((l + h) / 2);
		if (v == d[m]) // ������� ��ȯ
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