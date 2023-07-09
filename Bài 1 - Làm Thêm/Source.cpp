#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

int main()
{
	int nguoi;

	printf("\n-------------- Menu --------------\n");
	printf("\n1. Keo");
	printf("\n2. Bua");
	printf("\n3. Bao");
	printf("\n----------------------------------\n");

	printf("\nNguoi choi nhap vao lua chon: ");
	scanf("%d", &nguoi);

	if(nguoi == 1)
	{
		printf("\nNguoi choi chon Keo");
	}
	else if(nguoi == 2)
	{
		printf("\nNguoi choi chon Bua");
	}
	else if(nguoi == 3)
	{
		printf("\nNguoi choi chon Bao");
	}

	/* 
	Sleep(x)
x tính theo mili giây
1 giây = 1000 mili giây
	*/

	printf("\nLoading");
	Sleep(1000); // 1 giây
	printf(".");
	Sleep(1000); // 1 giây
	printf(".");
	Sleep(1000); // 1 giây
	printf(".");

	srand(time(NULL)); // reset lại thời gian
	// [a, b] => a + rand() % (b - a + 1)
	int may = 1 + rand() % 3;

	if(may == 1)
	{
		printf("\nMay ra Keo");
	}
	else if(may == 2)
	{
		printf("\nMay ra Bua");
	}
	else if(may == 3)
	{
		printf("\nMay ra Bao");
	}

	// Kiểm tra điều kiện thắng thua
	if(nguoi == 1)
	{
		if(may == 1)
		{
			printf("\nHoa nhau !");
		}
		else if(may == 2)
		{
			printf("\nMay thang !");
		}
		else if(may == 3)
		{
			printf("\nNguoi thang !");
		}
	}
	else if(nguoi == 2)
	{
		if(may == 1)
		{
			printf("\nNguoi thang !");
		}
		else if(may == 2)
		{
			printf("\nHoa nhau !");
		}
		else if(may == 3)
		{
			printf("\nMay thang !");
		}
	}
	else if(nguoi == 3)
	{
		if(may == 1)
		{
			printf("\nMay thang !");
		}
		else if(may == 2)
		{
			printf("\nNguoi thang !");
		}
		else if(may == 3)
		{
			printf("\nHoa nhau !");
		}
	}

	getch();
	return 0;
}