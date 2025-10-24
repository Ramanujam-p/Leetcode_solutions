class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
       tm date = {0};
       date.tm_mday = day;
       date.tm_mon = month - 1;
       date.tm_year = year - 1900;
       mktime(&date);
       const char a[7][10] ={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
       return a[date.tm_wday];
    }
};