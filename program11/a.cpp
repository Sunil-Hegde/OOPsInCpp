#include<iostream>
#include<cstdlib>
using namespace std;

class date{
    private:
        int day, month, year;

        bool isLeapYear(int y) {
            return (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));
        }

        int getDaysInMonth(int month, int year){
            if(month == 2){
                return isLeapYear(year) ? 29 : 28;
            } 
            int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

            return months[month - 1];
        }

        int totalDays(){
            int totalDays = day;
            for (int i = 1; i < month; ++i) {
                totalDays += getDaysInMonth(i, year);
            }
            totalDays += (year * 365) + (year / 4) - (year / 100) + (year / 400);
            return totalDays;
        }

        void totalDaysToDate(int totalDays){
            int y = totalDays / 365;
            totalDays %= 365;
            while (totalDays <= 0) {
                y--;
                totalDays += isLeapYear(y) ? 366 : 365;
            }
            year = y;
            for (month = 1; month <= 12; ++month) {
                int daysInMonth = getDaysInMonth(month, year);
                if (totalDays <= daysInMonth) {
                    break;
                }
                totalDays -= daysInMonth;
            }
            day = totalDays;
        }
    public: 
        date(int d, int m, int y) : day(d), month(m), year(y) {
            if (m < 1 || m > 12 || d < 1 || d > getDaysInMonth(m, y)) {
                cout << "Invalid date\n";
                exit(1);
            }
        }

        int operator-(date x){
            return totalDays() - x.totalDays();
        }

        date operator+(int days){
            int totalDaysCount = totalDays() + days;
            date newDate(1, 1, 1970);
            newDate.totalDaysToDate(totalDaysCount);
            return newDate;
        }

        friend std::ostream& operator<<(std::ostream& out, date d) {
            out << (d.day < 10 ? "0" : "") << d.day << '/'
                << (d.month < 10 ? "0" : "") << d.month << '/'
                << d.year;
            return out;
        }
};

int main() {
    int day, month, year, noOfDays;
    
    cout << "Enter a valid date (dd mm yyyy):\n";
    cin >> day >> month >> year;
    date d1(day, month, year);

    cout << "Enter a valid date which is lesser than the first date (dd mm yyyy):\n";
    cin >> day >> month >> year;
    date d2(day, month, year);

    noOfDays = d1 - d2;
    cout << "Difference between two dates in days: " << noOfDays << " days\n";

    cout << "Enter the number of days to be added to the first date:\n";
    cin >> noOfDays;
    d1 = d1 + noOfDays;
    cout << "The new date is: " << d1 << endl;

    return 0;
}