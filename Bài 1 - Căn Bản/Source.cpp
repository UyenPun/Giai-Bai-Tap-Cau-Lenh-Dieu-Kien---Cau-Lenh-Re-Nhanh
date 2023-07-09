#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int a, b, c, d; // Khai báo các biến

	/*printf("\nNhap a = ");
	scanf("%d", &a);

	printf("\nNhap b = ");
	scanf("%d", &b);

	printf("\nNhap c = ");
	scanf("%d", &c);

	printf("\nNhap d = ");
	scanf("%d", &d);*/

	// Random
	/* 
công thức: muốn random 1 số x nằm 
trong đoạn [a, b] thì công thức là:
x = a + rand() % (b - a + 1)

mỗi lần trước khi random phải reset thời gian:
srand(time(0)); // reset lại thời gian.

và lưu ý là chỉ random ra được số nguyên
vd: 1, 2, 3, 4 ...
nếu muốn random ra số thực thì ta chia cho 10
vd: random số thực trong đoạn từ 0.0 -> 10.0
thì ta random số nguyên trong đoạn từ 0 -> 100
rồi lấy kết quả chia cho 10
	*/

	srand(time(0)); // reset lại thời gian.

	// a từ 1 --> 10
	a = 1 + rand() % 10;

	srand(time(0)); // reset lại thời gian.

	// b từ 11 --> 100
	b = 11 + rand() % 90;

	srand(time(0)); // reset lại thời gian.

	// c từ -80 --> 80
	c = -80 + rand() % 161;

	srand(time(0)); // reset lại thời gian.

	// d từ 0 --> 1000000
	d = rand() % 1000001;

	printf("\na = %d", a);
	printf("\nb = %d", b);
	printf("\nc = %d", c);
	printf("\nd = %d", d);

	int Min, Max; // Khai báo 2 biến

	// gán mặc định là số đầu
	Min = Max = a;

	/* Tìm Min */
	//if(b < Min)
	//{
	//	Min = b; // cập nhật min là b
	//}
	//if(c < Min)
	//{
	//	Min = c; // cập nhật min là c
	//}
	//if(d < Min)
	//{
	//	Min = d; // cập nhật min là d
	//}

	/* Tìm Max */
	//if(b > Max)
	//{
	//	Max = b; // cập nhật lại max là b
	//}
	//if(c > Max)
	//{
	//	Max = c; // cập nhật lại max là c
	//}
	//if(d > Max)
	//{
	//	Max = d; // cập nhật lại max là d
	//}

	/* Tìm Min */
	Min = a < b ? a : b;
	Min = Min < c ? Min : c;
	Min = Min < d ? Min : d;

	/* Tìm Max */
	Max = a > b ? a : b;
	Max = Max > c ? Max : c;
	Max = Max > d ? Max : d;

	printf("\nMin = %d", Min);
	printf("\nMax = %d", Max);

	getch();
	return 0;
}