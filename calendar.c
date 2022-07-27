#include <stdio.h>
#include <stdbool.h>
/* Code with nitty-gritty detail
bool is_leap_year(int year) {
  if (year % 4 != 0) {
    return false;
  } else if (year % 100 != 0) {
      return true;
    } else if (year % 400 != 0) {
      return false;
    } else {
      return true;
    }
}
*/

// Efficient version of above commented function
bool is_leap_year(int year) {
    return (year % 4 == 0 && (year % 100 || year % 400 == 0));
}

int days_in_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void add_days_to_date(int *mm, int *dd, int *yy, int days_left_to_add) {
  int days_left_in_month;
  while (days_left_to_add > 0) {
    days_left_in_month = days_in_month[*mm] - *dd;
    if (*mm == 2 && is_leap_year(*yy)) {
      days_left_in_month += 1;
    }
    if (days_left_to_add >= days_left_in_month) {
      days_left_to_add -= days_left_in_month;
      days_left_to_add -= 1;
      *dd = 1;
      if (*mm != 12) {
        *mm += 1;
      } else {
        *mm = 1;
        *yy += 1;
        }
    } else {
        *dd = *dd + days_left_to_add;
        days_left_to_add = 0;
    }
  }
}