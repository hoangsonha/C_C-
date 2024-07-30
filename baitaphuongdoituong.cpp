#include<iostream>
using namespace std;
#include<string>
class date
{
    private:
        int day;
        int month;
        int year;
    public:
        date(int day, int month, int year) 
        : day(day), month(month), year(year)
        {            
        }
        void setdate(int day, int month, int year) {
            this->day = day;
            this->month = month;
            this->year = year;
        }
        void setday(int day) {
            this->day = day;
        }
        void setmonth(int month) {
            this->month = month;
        }
        void setyear(int year) {
            this->year = year;
        }
        int getday() {
            return day;
        }
        int getmonth() {
            return month;
        }
        int getyear() {
            return year;
        }
        void display() {
          string day = to_string(this->day);
		  string month = to_string(this->month);
		  string year = to_string(this->year);
            if(day.size()==1) {
                day = "0" + day;
            }
            if(month.size()==1) {
                month = "0" + month;
            }
            
            cout<<"\n"<<day<<"/"<<month<<"/"<<year;
        }

};
int main() {
	date d(1, 1, 1997);
	d.display();
	d.setdate(12, 12, 2004);
	d.display();
	d.setmonth(3);
	d.display();	
	return 0;
}