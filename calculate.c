#include<stdio.h>		//����һ�����㳤��������ĳ���//
int calculate(int length, int wigth, int highth);
	int main()
{
		int m_length;
		int m_width;
		int m_highth;
		int volume;

		printf("�������������󳤷���ĳ����(�س�������)\n");
		printf("������ɺ�����0&�س�\n");
			scanf_s("%d\n", &m_length);
			scanf_s("%d\n", &m_width);
			scanf_s("%d\n", &m_highth);
		

		volume = calculate(m_length, m_width, m_highth);
		printf("���������Ϊ��");
		printf("%d\n", volume);

	return 0;
}
	
	int calculate(int length,int wigth,int highth)
	{
		int volume = length * wigth * highth;
		return volume;
	}