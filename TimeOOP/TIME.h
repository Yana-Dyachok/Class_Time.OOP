#pragma once
#include <iostream>;
typedef unsigned int ui;
class Time
{
private:
	ui hours;
	ui minutes;
	ui secunds;
public:
	Time(void);//конструктор по замовчуванню
	friend std::istream& operator>>(std::istream& in, Time& t);//  перевантаження оператора >>
	friend std::ostream& operator<<(std::ostream&, Time& t);//  перевантаження оператора <<
	bool operator>=(const Time& other);//метод перевантаження оператора >=
	bool operator<=(const Time& other); //метод перевантаження оператора <=
	bool operator==(const Time& other); //метод перевантаження оператора ==
	bool operator>(const Time& other); //метод перевантаження оператора >
	bool operator<(const Time& other); //метод перевантаження оператора <
	bool operator!=(const Time& other); //метод перевантаження оператора !=
	Time& operator--();//метод перевантаження префіксного декремента
	Time& operator++();//метод перевантаження префіксного інкремента
	Time& operator--(int value); //метод перевантаження постфіксного декремента
	Time& operator++(int value); //метод перевантаження постфіксного інкремента
	Time& operator-=(const Time& other); //метод перевантаження оператора -=
	Time& operator+=(const Time& other); //метод перевантаження оператора +=
	~Time(void); //деструктор
};