/*
ax + by = c (1)
dx + ey = f (2)

Phân tích
(1) => x = (c - by)/a (*) đk: a != 0
thế x vào (2) ta được:
<=> d(c - by)/a + ey = f
<=> d(c - by) + eya = fa
<=> dc - dby + eya = fa
<=> y(ea - db) = fa - dc
<=> y = (fa - dc) / (ea - db) với dk: (ea - db) != 0

có được y thế vào (*) sẽ ra x


*/

#include <stdio.h>
#include <conio.h>

int main()
{
	float a, b, c, d, e, f; // Khai báo

	printf("\nNhap a = ");
	scanf("%f", &a);

	printf("\nNhap b = ");
	scanf("%f", &b);

	printf("\nNhap c = ");
	scanf("%f", &c);

	printf("\nNhap d = ");
	scanf("%f", &d);

	printf("\nNhap e = ");
	scanf("%f", &e);

	printf("\nNhap f = ");
	scanf("%f", &f);

	// y = (fa - dc) / (ea - db)
	// x = (c - by)/a
	float x, y; // Khai báo nghiệm

	if(e * a - d * b != 0)
	{
		y = (f * a - d * c) / (e * a - d * b);
		if(a != 0)
		{
			x = (c - b * y) / a;
			printf("\nNghiem cua he phuong trinh la\nx = %f\ny = %f", x, y);
		}
		else
		{
			printf("\nPhuong trinh vo nghiem !");
		}
		
	}
	else
	{
		printf("\nPhuong trinh vo nghiem !");
	}



	getch();
	return 0;
}