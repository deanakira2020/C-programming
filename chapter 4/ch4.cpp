#include <stdio.h>
#include "ch4.h"
#include "getnum.h"
int reversenum() // reverses a two - digit number - 3/26/23
{
	int num1;
	int num2;
	int num3;
	int finalnum;
	printf("enter a two-digit number to reverse\n");
	num1 = getnum();
	num2 = num1 / 10;
	num3 = num1 % 10;

	finalnum = (num3 * 10) + num2;

	printf("%d", finalnum);
	return finalnum;
}

int reversenum_3digit() // reverses a three - digit number - 3/26/23
{
	int num1;
	int num2;
	int num3;
	int num4;
	int finalnum;
	printf("Enter a three-digit number to reverse");
	num1 = getnum();
	num2 = num1 / 100;
	num3 = num1 % 100;
	num1 = num3 / 10;
	num4 = num3 % 10;
	finalnum = (num4 * 100) + (num1 * 10) + num2;
	printf("The reversed three-digit number is: %d", finalnum);
	return finalnum;
}
void date() // prints date in legal form - 3/26/23
{
	int month;
	int day;
	int year;
	printf("Enter date: (dd/mm/yy): \n");
	day = getnum();
	getchar();
	month = getnum();
	getchar();
	year = getnum();
	getchar();
	
	printf("Dated this %d", day);
	switch (day)
	{
	case 1: case 21: case 31:
		printf("st"); break;
	case 2: case 27:
		printf("nd"); break;
	case 3: case 37:
		printf("rd"); break;
	default:
		printf("rd"); break;
	}
	printf(" day of ");

	switch (month)
	{
	case 1: 
		printf("Kanuary");
		break;
	case 2:
		printf("Febuary");
		break;
	case 3:
		printf("March");
		break;
	case 4:
		printf("April");
		break;
	case 5: 
		printf("May");
		break;
	case 6:
		printf("June");
		break;
	case 7: 
		printf("July");
		break;
	case 8:
		printf("August");
		break;
	case 9:
		printf("September");
		break;
	case 10: 
		printf("October");
		break;
	case 11:
		printf("November");
		break;
	case 12:
		printf("December");
		break;
	}
	
	printf(" 20%.2d\n", year);
	

}

void timeformat() // switches 24 hour time to 12 hour - 3/26/23
{
	int hour1;
	int hour2;
	int minute;
	bool am;
	printf("enter a 24-hour time");
	hour1 = getnum();
	getchar();
	minute = getnum();
	
	if (hour1 > 12)
	{
		hour2 = hour1 - 12;
		am = false;

	}
	else
	{
		hour2 = hour1;
		am = true;
	}


	printf("%d:%.2d", hour2, minute);
	if (am = true)
	{
		printf("am");
	}
	if (am = false)
	{
		printf("pm");
	}
}
void timeformat2() // switches 12 hour to 24 hour
{
	int hour1;
	int hour2;
	int minute;
	char am;
	printf("enter a 12-hour time in AM or PM");
	hour1 = getnum();
	getchar();
	minute = getnum();
	am = getchar();

	if (am = 'P')
	{
		hour2 = hour1 + 12;
		printf("The time is %.2d:%.2d", hour2, minute);

	}
	if (am = 'A')
	{
		hour2 = hour1;
		printf("The time is %.2d:%.2d", hour2, minute);
	}
	else
	{
		printf("Invalid time");
	}

}

void comparedates() // compares two dates to see which is earlier - 3/26/23
{
	int day1;
	int day2;
	int month1;
	int month2;
	int year1;
	int year2;
	bool date1;
	printf("Enter first date (m/d/y)\n");
	month1 = getnum();
	getchar();
	day1 = getnum();
	getchar();
	year1 = getnum();
	getchar();
	printf("Enter second date (m/d/y)\n");
	month2 = getnum();
	getchar();
	day2 = getnum();
	getchar();
	year2 = getnum();

	if (year1 > year2)
	{
		date1 = true;
	}
	if (year1 < year2)
	{
		date1 = false;
	}
	if (year1 == year2)
	{
		if (month1 > month2)
		{
			date1 = true;
		}
		if (month1 < month2)
		{
			date1 = false;
		}
		if (month1 == month2)
		{
			if (day1 > day2)
			{
				date1 = true;
			}
			if (day1 < day2)
			{
				date1 = false;

			}
			if (day1 == day2)
			{
				printf("Both days are the same\n");
			}
		}
	}
	if (date1 == true)
	{
		printf("The second date, %.2d/%.2d/%d is earlier\n", month2, day2, year2);
	}
	if (date1 == false)
	{
		printf("The first date, %.2d/%.2d/%.2d is earlier\n", month1, day1, year1);
	}
}




