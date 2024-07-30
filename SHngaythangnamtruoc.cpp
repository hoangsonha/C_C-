#include<iostream>
using namespace std;
#include<math.h>
#include<string>
class Time
{
private:
	int day;
	int month;
	int year;
public:
	Time(int day, int month, int year) {
		this->day = day;
		this->month = month;
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
	void setday(int newday) {
		this->day = newday;
	}
	void setmonth(int newmonth) {
		this->month = newmonth;
	}
	void setyear(int newyear) {
		this->year = year;
	}
	void settime(int day, int month, int year) {
		this->day = day;
		this->month = month;
		this->year = year;
	}
	void previousday() {
		if (day == 1) {
			switch (month) {
			case 1: {
				year -= 1;
				month = 12;
				day = 31;
				break;
			}
			case 2:
			case 4: 
			case 6:
			case 9:
			case 11: {
				year = year;
				month -= 1;
				day = 31;
				break;
			}
			case 3: {
				if (year % 4 == 0) {
					year = year;
					month -= 1;
					day = 29;
					break;
				}
				else {
					year = year;
					month -= 1;
					day = 28;
					break;
				}
			}
			
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: {
				year = year;
				month = month - 1;
				day = 30;
				break;
			}
			}
			
		}
		else {
			day--;
		}
	}
	void nextday() {
		if (year % 4 == 0) {
			if (day == 30) {
				switch (month) {
				case 4:
				case 6:
				case 9:
				case 11: {
					year = year;
					month += 1;
					day = 1;
					break;
				}

			}

			}
			else {
				if (day == 31) {
					switch (month) {
					case 1:
					case 3:
					case 5:
					case 7:
					case 8:
					case 10: {
						year = year;
						month += 1;
						day = 1;
						break;
					}
					case 12: {
						year += 1;
						month = 1;
						day = 1;
						break;
					}


					}
				}
				else {
					if (day == 29) {
						switch (month) {
						case 2: {
							year = year;
							month += 1;
							day = 1;
							break;
						}
						}
					}
					else {
						day++;
					}
				}
			}
		}
		else {
			if (year % 4 != 0) {
				if (day == 30) {
					switch (month) {
					case 4:
					case 6:
					case 9:
					case 11: {
						year = year;
						month += 1;
						day = 1;
						break;
					}

					}

				}
				else {
					if (day == 31) {
						switch (month) {
						case 1:
						case 3:
						case 5:
						case 7:
						case 8:
						case 10: {
							year = year;
							month += 1;
							day = 1;
							break;
						}
						case 12: {
							year += 1;
							month = 1;
							day = 1;
							break;
						}


						}
					}
					else {
						if (day == 28) {
							switch (month) {
							case 2: {
								year = year;
								month += 1;
								day = 1;
								break;
							}
							}
						}
						else {
							day++;
						}
					}
				}
			}
			
		}
	}
	void display() {
		string ngay = to_string(this->day);
		string thang = to_string(this->month);
		string nam = to_string(this->year);
		if (ngay.size() == 1) {
			ngay = "0" + ngay;
		}
		if (thang.size() == 1) {
			thang = "0" + thang;
		}
		
		cout << ngay << "/" << thang << "/" << nam << endl;
	}
};
int main() {
	Time s1(27, 12, 2020);
	s1.display();
	s1.nextday();
	s1.display();
	s1.nextday();
	s1.display();
	s1.nextday();
	s1.display();
	s1.nextday();
	s1.display();
	s1.previousday();
	s1.display();
	return 0;
}





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int songaytrongthang(int month, int year) {
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		return 31;
	}
	else {
		if (month == 4 || month == 6 || month == 9 || month == 11) {
			return 30;
		}
		else {
			if (month == 2) {
				return (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) ? 29 : 28;
			}
		}
	}
}
int ngaytrongnam(int day, int month, int year) {
	int sum = 0;
	for (int i = 1;i < month;i++) {
		sum += songaytrongthang(i, year);
	}
	return sum + day;
}
void ngaytruoc(int day, int month, int year) {
	if (day == 1) {
		if (month == 1) {
			day = 31;
			month = 12;
			year--;
		}
		else {
			month--;
			day = songaytrongthang(month, year);
		}
	
	}
	else {
		day--;
	}
	cout << day << "/" << month << "/" << year;
}
void ngayke(int day, int month, int year) {
	int x = songaytrongthang(month, year);
	if (day == x) {
		if (month == 12) {
			day = 1;
			month = 1;
			year++;
		}
		else {
			day = 1;
			month++;
			year = year;

		}
	}
	else {
		day++;
	}
	cout << day << "/" << month << "/" << year;
}