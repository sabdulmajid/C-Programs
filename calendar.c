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