/*
nếu không nằm trong đoạn
a -> z
A -> Z
thì báo lỗi và kết thúc

Nếu thỏa nằm trong đoạn đó thì kiểm tra
nếu đang là hoa -> thường
nếu đang là thường -> hoa

a: 97
A: 65

----------A--------Z----a-------z------->


*/
#include <stdio.h>
#include <conio.h>

int main()
{
	char kytu;

	printf("\nNhap vao ky tu: ");
	scanf("%c", &kytu);

	if((kytu >= 'a' && kytu <= 'z') || (kytu >= 'A' && kytu <= 'Z'))
	{
		// XỬ LÝ
		
		// đang là thường
		if(kytu >= 'a' && kytu <= 'z')
		{
			kytu -= 32;
		}
		
		// nếu để vậy là sai nè: if(kytu >= 'A' && kytu <= 'Z')
		else
		{
			kytu += 32;
		}
		printf("\nKy tu sau khi bien doi la: %c", kytu);
	}
	else
	{
		printf("\nKy tu khong hop le !");
	}


	getch();
	return 0;
}
