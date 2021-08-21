//#include <stdio.h>
//#include <conio.h>
//
//int main()
//{
//	int ch;
//	while (1){
//		if (_kbhit() != 0) //如果键盘被敲击
//		{
//			ch = _getch(); //获取键值
//			printf("%d\n", ch); //打印键值
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
		a = _getch(); //第一次读取
		b = _getch(); //第二次读取
		printf("%d\n", b); //打印第二次获取的键值
	}
}