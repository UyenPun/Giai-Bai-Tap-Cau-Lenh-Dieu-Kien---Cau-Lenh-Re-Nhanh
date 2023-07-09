/* 
Nhập vào 1 số có tối đa 9 chữ số
rồi in ra cách đọc của số này

GIẢI THUẬT
B1: Kiểm tra số lượng chữ số của số hiện tại
Nếu số lượng > 9 => không xử lý

B2: Nếu số lượng nằm trong đoạn từ 1-> 9
thì mình xét từng trường hợp để xử lý

5 -> Nam
15 -> Muoi| Nam
115 -> Mot Tram| Muoi Nam
1115 -> Mot Ngan| Mot Tram Muoi Nam
11115 -> Muoi| Mot Ngan Mot Tram Muoi Nam

xét 1 chữ số: in ra đọc từ mot -> chin
xet 2 chu so
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int x;

	printf("\nNhap vao x = ");
	scanf("%d", &x);

	int soluongchuso = log10((float)x) + 1;

	if(soluongchuso > 9)
	{
		printf("Khong xu ly");
	}
	else
	{
		// cứ thế xét các chữ số từ trên xuống

		// xét 3 chữ số
		if(soluongchuso == 3)
		{
			int temp = x / 100;

			if(temp == 1)
			{
				printf("Mot Tram ");
			}
			else if(temp == 2)
			{
				printf("Hai Tram ");
			}
			else if(temp == 3)
			{
				printf("Ba Tram ");
			}
			else if(temp == 4)
			{
				printf("Bon Tram ");
			}
			else if(temp == 5)
			{
				printf("Nam Tram ");
			}
			else if(temp == 6)
			{
				printf("Sau Tram ");
			}
			else if(temp == 7)
			{
				printf("Bay Tram ");
			}
			else if(temp == 8)
			{
				printf("Tam Tram ");
			}
			else if(temp == 9)
			{
				printf("Chin Tram ");
			}
			soluongchuso--;
			x %= 100; // x ban đầu là 125 => x % 100 = 25
		}

		// xét 2 chữ số
		if(soluongchuso == 2)
		{
			int temp = x / 10;

			if(temp == 1)
			{
				printf("Muoi ");
			}
			else if(temp == 2)
			{
				printf("Hai Muoi ");
			}
			else if(temp == 3)
			{
				printf("Ba Muoi ");
			}
			else if(temp == 4)
			{
				printf("Bon Muoi ");
			}
			else if(temp == 5)
			{
				printf("Nam Muoi ");
			}
			else if(temp == 6)
			{
				printf("Sau Muoi ");
			}
			else if(temp == 7)
			{
				printf("Bay Muoi ");
			}
			else if(temp == 8)
			{
				printf("Tam Muoi ");
			}
			else if(temp == 9)
			{
				printf("Chin Muoi ");
			}
			soluongchuso--;
		}

		// xét 1 chữ số
		if(soluongchuso == 1)
		{
			int temp = x % 10;

			if(temp == 1)
			{
				printf("Mot");
			}
			else if(temp == 2)
			{
				printf("Hai");
			}
			else if(temp == 3)
			{
				printf("Ba");
			}
			else if(temp == 4)
			{
				printf("Bon");
			}
			else if(temp == 5)
			{
				printf("Nam");
			}
			else if(temp == 6)
			{
				printf("Sau");
			}
			else if(temp == 7)
			{
				printf("Bay");
			}
			else if(temp == 8)
			{
				printf("Tam");
			}
			else if(temp == 9)
			{
				printf("Chin");
			}
		}
	}

	getch();
	return 0;
}