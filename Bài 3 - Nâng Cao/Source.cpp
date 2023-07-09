/* 
Nhập một ngày, kiểm tra hợp lệ
Nếu hợp lệ tìm ngày kế tiếp và ngày trước đó

các trường hợp đặc biệt:

* tìm ngày kế tiếp *
th1: ngày hiện tại là ngày cuối tháng
th2: ngày hiện tại là ngày cuối năm

* tìm ngày trước đó *
th1: ngày hiện tại là ngày đầu tháng
th2: ngày hiện tại là ngày đầu năm

Lưu ý: Cẩn thận tháng 2

*/
#include <stdio.h>
#include <conio.h>

int main()
{
	int ngay, thang, nam;

	printf("\nNhap ngay:");
	scanf("%d", &ngay);

	printf("\nNhap thang:");
	scanf("%d", &thang);

	printf("\nNhap nam:");
	scanf("%d", &nam);

	// coi như dữ liệu hợp lệ, ta đi xử lý

	int ngayketiep, thangketiep, namketiep;
	int ngaytruocdo, thangtruocdo, namtruocdo;

	// có tối đa 31 ngày
	if(thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
	{
		// trường hợp bình thường
		if(ngay >= 2 && ngay <= 30)
		{
			ngayketiep = ngay + 1;
			thangketiep = thang;
			namketiep = nam;

			ngaytruocdo = ngay - 1;
			thangtruocdo = thang;
			namtruocdo = nam;
		}

		// trường hợp đầu tháng
		else if(ngay == 1)
		{
			ngayketiep = ngay + 1;
			thangketiep = thang;
			namketiep = nam;

			namtruocdo = nam;

			// xét tháng trước đó xem có bao nhiêu ngày
			thangtruocdo = thang - 1;
			if(thangtruocdo == 0)
			{
				thangtruocdo = 12;
				namtruocdo = nam - 1;
			}
			
			if(thangtruocdo == 1 || thangtruocdo == 3 || thangtruocdo == 5 || thangtruocdo == 7 || thangtruocdo == 8 || thangtruocdo == 10 || thangtruocdo == 12)
			{
				ngaytruocdo = 31;

			}
			else if(thangtruocdo == 4 || thangtruocdo == 6 || thangtruocdo == 9 || thangtruocdo == 11)
			{
				ngaytruocdo = 30;
			}
			else // thangtruocdo == 2
			{
				// nhuận
				if((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)
				{
					ngaytruocdo = 29;
				}
				else
				{
					ngaytruocdo = 28;
				}
			}
		}
		else if(ngay == 31) // cuối tháng
		{
			ngayketiep = 1;
			thangketiep = thang + 1;
			namketiep = nam;

			if(thangketiep == 13)
			{
				thangketiep = 1;
				namketiep = nam + 1;
			}

			ngaytruocdo = 30;
			thangtruocdo = thang;
			namtruocdo = nam;
			
		}
	}
	else if(thang == 4 || thang == 6 || thang == 9 || thang == 11)
	{
		// trường hợp bình thường
		if(ngay >= 2 && ngay <= 29)
		{
			ngayketiep = ngay + 1;
			thangketiep = thang;
			namketiep = nam;

			ngaytruocdo = ngay - 1;
			thangtruocdo = thang;
			namtruocdo = nam;
		}

		// trường hợp đầu tháng
		else if(ngay == 1)
		{
			ngayketiep = ngay + 1;
			thangketiep = thang;
			namketiep = nam;

			namtruocdo = nam;

			// xét tháng trước đó xem có bao nhiêu ngày
			thangtruocdo = thang - 1;
			if(thangtruocdo == 0)
			{
				thangtruocdo = 12;
				namtruocdo = nam - 1;
			}
			
			if(thangtruocdo == 1 || thangtruocdo == 3 || thangtruocdo == 5 || thangtruocdo == 7 || thangtruocdo == 8 || thangtruocdo == 10 || thangtruocdo == 12)
			{
				ngaytruocdo = 31;

			}
			else if(thangtruocdo == 4 || thangtruocdo == 6 || thangtruocdo == 9 || thangtruocdo == 11)
			{
				ngaytruocdo = 30;
			}
			//else // thangtruocdo == 2
			//{
			//	// nhuận
			//	if((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)
			//	{
			//		ngaytruocdo = 29;
			//	}
			//	else
			//	{
			//		ngaytruocdo = 28;
			//	}
			//}
		}

		// trường hợp cuối tháng
		else if(ngay == 30)
		{
			ngayketiep = 1;
			thangketiep = thang + 1;
			namketiep = nam;

			ngaytruocdo = 29;
			thangtruocdo = thang;
			namtruocdo = nam;
		}
	}
	else // tháng 2
	{
		if(ngay == 1)
		{
			ngayketiep = 2;
			thangketiep = thang;
			namketiep = nam;

			ngaytruocdo = 31;
			thangtruocdo = 1;
			namtruocdo = nam;
		}

		// nhuận có tối đa 29
		if((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)
		{
			
			if(ngay >= 2 && ngay <= 28)
			{
				ngayketiep = ngay + 1;
				thangketiep = thang;
				namketiep = nam;

				ngaytruocdo = ngay - 1;
				thangtruocdo = thang;
				namtruocdo = nam;
			}
			else if(ngay == 29)
			{
				ngayketiep = 1;
				thangketiep = 3;
				namketiep = nam;

				ngaytruocdo = 28;
				thangtruocdo = thang;
				namtruocdo = nam;
			}

			
		}
		else // không nhuận tối đa 28
		{
			if(ngay >= 2 && ngay <= 27)
			{
				ngayketiep = ngay + 1;
				thangketiep = thang;
				namketiep = nam;

				ngaytruocdo = ngay - 1;
				thangtruocdo = thang;
				namtruocdo = nam;
			}
			else if(ngay == 28)
			{
				ngayketiep = 1;
				thangketiep = 3;
				namketiep = nam;

				ngaytruocdo = 27;
				thangtruocdo = thang;
				namtruocdo = nam;
			}
		}
	}

	printf("\nNgay hien tai la ngay %d thang %d nam %d", ngay, thang, nam);
	printf("\nNgay ke tiep la ngay %d thang %d nam %d", ngayketiep, thangketiep, namketiep);
	printf("\nNgay truoc do la ngay %d thang %d nam %d", ngaytruocdo, thangtruocdo, namtruocdo);

	getch();
	return 0;
}