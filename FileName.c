#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int year = 0;
	int month = 0;

	printf("Enter a year:\n");
	scanf("%d", &year);
	printf("Enter a month (1-12):\n");
	scanf("%d", &month);
	if (month > 12 || month < 1)
	{
		printf("Invalid month\n");
		return 0;
	}
	switch(month)
	{
	case 1:case 3:case 5:case 7:case 8:case 10:case 12:
		printf("Month %d/%d has 31 days.\n", month, year);
			break;
	case 4:case 6:case 9:case 11:
		printf("Month %d/%d has 30 days.\n", month, year);
		break;
		case 2:
			if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
				printf("Month 2/%d has 29 days.\n", year);
			else
				printf("Month 2/%d has 28 days.\n", year);
			break;
		
	}
	return 0;
}
