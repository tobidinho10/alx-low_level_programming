#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are 
 * left in the year, taking leap year into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int mont, int day, int year)

	if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
        {
		if (month > 2 && day >= 60)
		{
			day++;
		}
		printf("Day of the yaer: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
       }
       else
       {
	       printf"(Day of the year: %d\n", day);
	       printf("Remainingda days: %d\n", 365 - day);
       }
}
