#include<bits/stdc++.h> 
using namespace std; 
int daynum(int day, int month, int year) 
{ 

	static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 
					4, 6, 2, 4 }; 
	year -= month < 3; 
	return ( year + year/4 - year/100 + 
			year/400 + t[month-1] + day) % 7; 
}
string monthname(int monthnum) 
{ 
	string months[] = {"January", "February", "March", 
					"April", "May", "June", 
					"July", "August", "September", 
					"October", "November", "December"
					}; 

	return (months[monthnum]); 
} 
int numberOfDays (int monthnum, int year) 
{ 
	if (monthnum == 0) 
		return (31); 
	if (monthnum == 1) 
	{
		if (year % 400 == 0 || 
				(year % 4 == 0 && year % 100 != 0)) 
			return (29); 
		else
			return (28); 
	} 
	if (monthnum == 2) 
		return (31); 
	if (monthnum == 3) 
		return (30); 
	if (monthnum == 4) 
		return (31); 
	if (monthnum == 5) 
		return (30); 
	if (monthnum == 6) 
		return (31);
	if (monthnum == 7) 
		return (31); 
	if (monthnum == 8) 
		return (30); 
	if (monthnum == 9) 
		return (31);
	if (monthnum == 10) 
		return (30); 
	if (monthnum == 11) 
		return (31); 
}
void printCalendar(int year) 
{ 
	printf ("Calendar - %d\n\n", year); 
	int days; 
	int current = daynum (1, 1, year); 
	for (int i = 0; i < 12; i++) 
	{ 
		days = numberOfDays (i, year); 
		printf("\n------%s------\n",
			monthname (i).c_str()); 
		printf(" Sun Mon Tue Wed Thu Fri Sat\n"); 
		int k; 
		for (k = 0; k < current; k++) 
			printf("	 "); 

		for (int j = 1; j <= days; j++) 
		{ 
			printf("%5d", j); 

			if (++k > 6) 
			{ 
				k = 0; 
				printf("\n"); 
			} 
		} 

		if (k) 
			printf("\n"); 

		current = k; 
	} 

	return; 
}
int main() 
{ 
int year;
printf("enter year") ;
scanf("%d",&year);
	printCalendar(year); 

	return (0); 
} 

