#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int x;

	printf("\nNhap vao x = ");
	scanf("%d", &x);

	if(x < 1)
	{
		printf("\nSo x khong hop le !");
		getch();
		return 0; // kết thúc
	}

	/*if((int)pow(2.0, 31) % x == 0)
	{
		printf("\nCo dang 2^k");
	}
	else
	{
		printf("\nKhong co dang 2^k");
	}*/

	/* log2(2^k) = k 
	kiểm tra nếu log2(x) mà là số nguyên thì đó là có dạng 2^k và k = log2(x)
	
	loga(b) / loga(c) = logc(b)
	
	
	*/

	double kq = log10((double)x) / log10(2.0);
	if(kq == (int)kq)
	{
		printf("\nCo dang 2^%d", (int)kq);
	}
	else
	{
		printf("\nKhong co dang 2^k");
	}

	getch();
	return 0;
}