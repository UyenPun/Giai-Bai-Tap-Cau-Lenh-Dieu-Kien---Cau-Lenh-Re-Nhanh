#include <stdio.h>
#include <conio.h>

int main()
{
	float a, b, c;

	printf("\nNhap canh 1: ");
	scanf("%f", &a);

	printf("\nNhap canh 2: ");
	scanf("%f", &b);

	printf("\nNhap canh 3: ");
	scanf("%f", &c);

	// trường hợp không hợp lệ
	if(a + b <= c || a + c <= b || b + c <= a)
	{
		printf("\n3 canh khong tao thanh tam giac");
		getch();
		return 0; // Kết thúc chương trình
	}

	// Xử lý
	/* 
	nguyên tắc: Đưa trường hợp đặc biệt lên hàng đầu
	1. đều
	2. vuông cân
	3. vuông
	4. cân
	5. thường
	*/

	if(a == b && b == c)
	{
		printf("\nTam giac deu !");
		getch();
		return 0; // Kết thúc
	}

	// cân
	if(a == b || a == c || b == c)
	{
		// vuông
		if(a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
		{
			printf("\nTam giac vuong can !");
			getch();
			return 0;
		}
		printf("\nTam giac can !");
		getch();
		return 0;
	}

	// vuông
	if(a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
	{
		printf("\nTam giac vuong !");
		getch();
		return 0;
	}

	printf("\nTam giac thuong !");

	getch();
	return 0;
}