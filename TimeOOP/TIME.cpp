#include "TIME.h"
#include <iostream>;
typedef unsigned int ui;
Time::Time() { //����������� �� ������������
	hours = 0; // ��������� �������� ���������
	minutes = 0;
	secunds = 0;
}

std::ostream& operator<<(std::ostream& os, Time& t) { // ������������� �������� <<
	os << "hour=" << t.hours << "\t minuts=" << t.minutes << "\t secunds=" << t.secunds;
	return os;
}

std::istream& operator>>(std::istream& in, Time& t) {
	std::cout << "hours, minutes, secunds:" << std::endl;
	in >> t.hours >> t.minutes >> t.secunds;
	return in;
}

bool Time:: operator>=(const Time& other) {//����� �������������� ��������� >=
	if (this->hours >= other.hours) return true;
	else if (this->minutes >= other.minutes)return true;
	else if (this->secunds >= other.secunds)return true;
	else return false;
}

bool Time:: operator<=(const Time& other) {//����� �������������� ��������� <=
	if (this->hours <= other.hours) return true;
	else if (this->minutes <= other.minutes)return true;
	else if (this->secunds <= other.secunds)return true;
	else return false;
}

bool Time:: operator==(const Time& other) {//����� �������������� ��������� ==
	if ((this->hours == other.hours) and (this->minutes == other.minutes) and (this->secunds == other.secunds))return true;
	else return false;
}

bool Time:: operator>(const Time& other) {//����� �������������� ��������� >
	if (this->hours > other.hours) return true;
	else if (this->minutes > other.minutes)return true;
	else if (this->secunds > other.secunds)return true;
	else return false;
}

bool Time:: operator<(const Time& other) {//����� �������������� ��������� <
	if (this->hours < other.hours) return true;
	else if (this->minutes < other.minutes)return true;
	else if (this->secunds < other.secunds)return true;
	else return false;
}

bool Time:: operator!=(const Time& other) {//����� �������������� ��������� !=
	if ((this->hours != other.hours) or (this->minutes != other.minutes) or (this->secunds != other.secunds))return true;
			else return false;
}

Time& Time::operator--() {//����� �������������� ����������� ����������
	this->hours--;
	this->minutes--;
	this->secunds--;
	return *this;
}

Time& Time::operator++() {//����� �������������� ����������� ����������
	this->hours++;
	this->minutes++;
	this->secunds++;
	return *this;
}

Time& Time::operator--(int value) {//����� �������������� ������������ ����������
	Time val(*this);
	this->hours--;
	this->minutes--;
	this->secunds--;
	return val;
}

Time& Time::operator++(int value) {//����� �������������� ������������ ����������
	Time val(*this);
	this->hours++;
	this->minutes++;
	this->secunds++;
	return val;
}

Time& Time::operator-=(const Time& other) {//����� �������������� ��������� -=
	Time val(*this);
	this->hours -= other.hours;
	this->minutes -= other.minutes;
	this->secunds -= other.secunds;
	return val;
}

Time& Time::operator+=(const Time& other) {//����� �������������� ��������� +=
	Time val(*this);
	this->hours += other.hours;
	this->minutes += other.minutes;
	this->secunds += other.secunds;
	return val;
}
Time::~Time(void) {}