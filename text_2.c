#include<stdio.h>
int isLeapYear(int year) {
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        return 1;
    } else {
        return 0;
    }
}

int main(void) {
    int year, month, day;
    scanf("%d %d %d", &year, &month, &day);

    int daysInMonthNonLeapYear[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int daysInMonthLeapYear[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int totalDays = 0;
    for(int i = month; i <= 12; i++) {
        totalDays += isLeapYear(year) ? daysInMonthLeapYear[i] : daysInMonthNonLeapYear[i];
    }
    totalDays -= day;
    int futureYear;
    for(futureYear = year + 1; totalDays < 10000; futureYear++) {
        totalDays += isLeapYear(futureYear) ? 366 : 365;
    }
    futureYear--;
    totalDays -= isLeapYear(futureYear) ? 366 : 365;
    int futureMonth;
    for(futureMonth = 1; totalDays < 10000; futureMonth++) {
        totalDays += isLeapYear(futureYear) ? daysInMonthLeapYear[futureMonth] : daysInMonthNonLeapYear[futureMonth];
    }
    futureMonth--;
    totalDays -= isLeapYear(futureYear) ? daysInMonthLeapYear[futureMonth] : daysInMonthNonLeapYear[futureMonth];

    int futureDay = 10000 - totalDays;

    printf("%d-%d-%d", futureYear, futureMonth, futureDay);

    return 0;    
}
