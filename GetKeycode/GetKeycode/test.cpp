//#include <stdio.h>
//#include <conio.h>
//
//int main()
//{
//	int ch;
//	while (1){
//		if (_kbhit() != 0) //������̱��û�
//		{
//			ch = _getch(); //��ȡ��ֵ
//			printf("%d\n", ch); //��ӡ��ֵ
//			//if (ch == 27)
//			//	break;
//		}
//	}
//	return 0;
//}

#include <stdio.h>
#include <conio.h>

int main()
{
	char a, b;
	while (1)
	{
		a = _getch(); //��һ�ζ�ȡ
		b = _getch(); //�ڶ��ζ�ȡ
		printf("%d\n", b); //��ӡ�ڶ��λ�ȡ�ļ�ֵ
	}
}