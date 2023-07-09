/* 
số chính phương là số mà
khai căn bậc 2 ra kết quả số nguyên

4 -> sqrt(4) = 2.00000
5 -> sqrt(5) = 2.31245

*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int x;

	printf("\nNhap vao so nguyen duong x = ");
	scanf("%d", &x);

	if(x >= 0)
	{
		double kq = sqrt((double)x);

		if(kq == (int)kq)
		{
			printf("\nLa so chinh phuong");
		}
		else
		{
			printf("\nKhong phai la so chinh phuong");
		}
	}
	else
	{
		printf("\nGia tri x khong hop le !");
	}

	getch();
	return 0;
}


