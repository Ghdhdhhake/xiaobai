#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <tchar.h>

float f(float x, float y, float z) 
{
	float a = x * x + 9.0f / 4.0f * y * y + z * z - 1;
	return a * a * a - x * x * z * z * z - 9.0f / 80.0f * y * y * z * z * z;
}

float h(float x, float z) 
{
	for (float y = 1.0f; y >= 0.0f; y -= 0.001f)
		if (f(x, y, z) <= 0.0f)
			return y;
	return 0.0f;
}

int main() 
{
	HANDLE o = GetStdHandle(STD_OUTPUT_HANDLE);
	_TCHAR buffer[25][80] = { _T(' ') };
	_TCHAR ramp[] = _T(".:-=+*#%@");

	for (float t = 0.0f;; t += 0.1f) {
		int sy = 0;
		float s = sinf(t);
		float a = s * s * s * s * 0.2f;
		for (float z = 1.3f; z > -1.2f; z -= 0.1f) {
			_TCHAR* p = &buffer[sy++][0];
			float tz = z * (1.2f - a);
			for (float x = -1.5f; x < 1.5f; x += 0.05f) {
				float tx = x * (1.2f + a);
				float v = f(tx, 0.0f, tz);
				if (v <= 0.0f) {
					float y0 = h(tx, tz);
					float ny = 0.01f;
					float nx = h(tx + ny, tz) - y0;
					float nz = h(tx, tz + ny) - y0;
					float nd = 1.0f / sqrtf(nx * nx + ny * ny + nz * nz);
					float d = (nx + ny - nz) * nd * 0.5f + 0.5f;
					*p++ = ramp[(int)(d * 5.0f)];
				}
				else
					*p++ = ' ';
			}
		}

		for (sy = 0; sy < 25; sy++) {
			COORD coord = { 0, sy };
			SetConsoleCursorPosition(o, coord);
			WriteConsole(o, buffer[sy], 79, NULL, 0);
		}
		Sleep(33);
	}
}



//#include <stdio.h>
//
//int main()
//
//{
//    int i, j, k, n = 0, x = 0, y = 50;
//
//    //爱心的头部没有规律，所以直接打印
//    printf("\n\n\n\n\n");
//    printf("         lovelove                   lovelove\n");
//    printf("       lovelovelove               lovelovelove\n");
//    printf("     lovelovelovelove           lovelovelovelove\n");
//    printf("   lovelovelovelovelove       lovelovelovelovelove\n");
//    printf("  lovelovelovelovelovelo     lovelovelovelovelovelo\n");
//    printf(" lovelovelovelovelovelove   lovelovelovelovelovelov\n");
//    for (i = 0; i < 2; i++)
//    {
//        printf("lovelovelovelovelovelovelovelovelovelovelovelovelove\n");
//
//    }
//
//    for (i = 0; i < 5; i++)    //爱心的中间部分的上部分
//    {
//        y = 50;
//        y = y - i * 2;
//        n++;
//        for (k = 0; k < n; k++)    //在每一行的起始位置先打印空格
//        {
//            printf(" ");
//        }
//        while (1)     //空格后面打印love，但是要注意love即使没打印完，也要换行
//        {
//            if (x < y)
//            {
//                printf("l");
//                y--;
//            }
//            else
//                break;
//            if (x < y)
//            {
//                printf("o");
//                y--;
//            }
//            else
//                break; if (x < y)
//            {
//                printf("v");
//                y--;
//            }
//                else
//                break; if (x < y)
//            {
//                printf("e");
//                y--;
//            }
//                else
//                break;
//        }
//        printf("\n");
//    }
//
//
//    //最下面的部分，具体内容同上，没和上一部分放一起是因为从这行开始多两个空格
//    for (i = 0, n = 3; i < 10; i++)
//    {
//        y = 37;
//        y = y - i * 4;
//        n++;
//        for (k = 0; k < n; k++)
//        {
//            printf("  ");
//        }
//        while (1)
//        {
//            if (x < y)
//            {
//                printf("l");
//                y--;
//            }
//            else
//                break;
//            if (x < y)
//            {
//                printf("o");
//                y--;
//            }
//            else
//                break; if (x < y)
//            {
//                printf("v");
//                y--;
//            }
//                else
//                break; if (x < y)
//            {
//                printf("e");
//                y--;
//            }
//                else
//                break;
//        }
//        printf("\n");
//    }
//
//    printf("\n\n\n\n\n\n\n\n\n\n\n\n");
//    return 0;
//}


//#include<stdio.h>
//#include<Windows.h>
//int main()
//{
//	system(" color 0c");//设计程序颜色 
//	printf("遇见你是一件很开心的事情,爱你哟！！！\n");//打印文字 
//
//	float x, y, a;//定义变量x,y,a 
//
//	for (y = 1.5f; y > -1; y -= 0.1f)
//	{
//		for (x = -1.5f; x < 1.5f; x += .05f) {
//			a = x * x + y * y - 1;
//			putchar(a * a * a - x * x * y * y * y < 0.0f ? '*' : ' ');
//		}
//
//		Sleep(100);//停顿函数（1.5秒钟） 
//		putchar('\n'); //换行 
//	}
//
//	return 0;
//}