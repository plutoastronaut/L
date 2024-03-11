#include<stdio.h>		//这是一个计算长方体体积的程序//
int calculate(int length, int wigth, int highth);
	int main()
{
		int m_length;
		int m_width;
		int m_highth;
		int volume;

		printf("请依次输入所求长方体的长宽高(回车键隔开)\n");
		printf("输入完成后输入0&回车\n");
			scanf_s("%d\n", &m_length);
			scanf_s("%d\n", &m_width);
			scanf_s("%d\n", &m_highth);
		

		volume = calculate(m_length, m_width, m_highth);
		printf("长方体体积为：");
		printf("%d\n", volume);

	return 0;
}
	
	int calculate(int length,int wigth,int highth)
	{
		int volume = length * wigth * highth;
		return volume;
	}