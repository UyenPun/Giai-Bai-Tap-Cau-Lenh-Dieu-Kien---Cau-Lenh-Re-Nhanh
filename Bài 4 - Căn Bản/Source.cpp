#include <stdio.h>
#include <conio.h>

int main()
{
	int thang, nam;

	printf("\nNhap vao thang: ");
	scanf("%d", &thang);

	if(thang < 1 || thang > 12)
	{
		printf("\nThang khong hop le!");
		getch();
		return 0; // Kết thúc chương trình
	}

	printf("\nNhap vao nam: ");
	scanf("%d", &nam);

	if(thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
	{
		printf("\nCo 31 ngay");
	}
	else if(thang == 4 || thang == 6 || thang == 9 || thang == 11)
	{
		printf("\nCo 30 ngay");
	}
	else // tháng 2
	{
		// xét năm nhuận
		if((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)
		{
			printf("\nCo 29 ngay");
		}
		else
		{
			printf("\nCo 28 ngay");
		}
	}

	getch();
	return 0;
}