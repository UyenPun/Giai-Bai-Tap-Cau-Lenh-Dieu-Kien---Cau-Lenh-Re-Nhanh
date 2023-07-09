#include <stdio.h>
#include <conio.h>
#include <math.h>

/* ax^4 + bx^2 + c = 0
B1: nhập dữ liệu
B2: xử lý
đặt t = x^2 (t >= 0) thì pt trở thành dạng pt bậc 2
  + B2.1: Nếu a = 0 thì pt có dạng: bx + c = 0
	+ B2.1.1: Nếu b = 0 thì pt có dạng: c = 0
		+ B2.1.1.1: Nếu c = 0 thì pt vô số nghiệm
		+ B2.1.1.2: Ngược lại thì pt vô  nghiệm
	+ B2.1.2: Ngược lại thì x = -c/b
  + B2.2: Ngược lại: giải bình thường tính denta
B3: In kết quả

*/
int main()
{
	float a, b, c;

	printf("\nNhap a = ");
	scanf("%f", &a);

	printf("\nNhap b = ");
	scanf("%f", &b);

	printf("\nNhap c = ");
	scanf("%f", &c);

	// pt có dạng: bx + c = 0
	if(a == 0)
	{
		// pt có dạng: c = 0
		if(b == 0)
		{
			if(c == 0)
			{
				printf("\nPhuong trinh co vo so nghiem");
			}
			else
			{
				printf("\nPhuong trinh vo nghiem");
			}
		}
		else
		{
			float t = -c / b;
			if(t < 0)
			{
				printf("\nPhuong trinh vo nghiem");
			}
			else
			{
				float x1 = sqrt(t);
				float x2 = -x1;
				printf("\nPhuong trinh co nghiem\nx1 = %f\nx2 = %f", x1, x2);
			}
			
		}

	}
	else
	{
		float Denta = b * b - 4 * a * c;

		if(Denta > 0)
		{
			float t1 = (-b + sqrt(Denta)) / (2 * a);
			float t2 = (-b - sqrt(Denta)) / (2 * a);

			if(t1 < 0 && t2 < 0)
			{
				printf("\nPhuong trinh vo nghiem");
			}

			if(t1 >= 0)
			{
				float x1 = sqrt(t1);
				float x2 = -x1;
				printf("\nPhuong trinh co nghiem\nx1 = %f\nx2 = %f", x1, x2);
			}
			if(t2 >= 0)
			{
				float x1 = sqrt(t2);
				float x2 = -x1;
				printf("\nPhuong trinh co nghiem\nx1 = %f\nx2 = %f", x1, x2);
			}
		}
		else if(Denta == 0)
		{
			float t = -b / (2 * a);
			if(t >= 0)
			{
				float x1 = sqrt(t);
				float x2 = -x1;
				printf("\nPhuong trinh co nghiem\nx1 = %f\nx2 = %f", x1, x2);
			}
			else
			{
				printf("\nPhuong trinh vo nghiem");
			}
		}
		else // Denta < 0
		{
			printf("\nPhuong trinh vo nghiem");
		}
	}

	getch();
	return 0;
}