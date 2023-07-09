#include <stdio.h>
#include <conio.h>
#define DANSO 69000000
#define TYLE 2.5
int main()
{
	int x = 0;

	// năm 1
	// 101.8 / 100 = 1.018

	float tyle = (100 + TYLE) / 100;

	x += DANSO * tyle; // x = x + ...
	x += DANSO * tyle;
	x += DANSO * tyle;
	x += DANSO * tyle;
	x += DANSO * tyle;
	x += DANSO * tyle;
	x += DANSO * tyle;
	x += DANSO * tyle;
	x += DANSO * tyle;
	x += DANSO * tyle;

	printf("\nDan so sau 10 nam la: %d", x);

	getch();
	return 0;
}