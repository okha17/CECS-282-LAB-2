
// Osman Khan
// CECS 282-07
// Proj 2 -MyDate 
// 10/02/19
using namespace std;

#include<string> 
#ifndef MYDATE_H
#define MYDATE_H

class myDate {
private:
	int month, day, year;
public:
	myDate();
	myDate(int, int, int);
	void display();
	void increaseDate(int);
	void decreaseDate(int);
	int daysBetween(myDate);
	int getMonth();
	int getDay();
	int getYear();
	int dayOfYear();
	string dayName();
};
#endif 
