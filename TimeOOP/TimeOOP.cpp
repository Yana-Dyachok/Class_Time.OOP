/*Реалізуйте клас Time, де членами класу є години, хвилини, секунди. 
	- перегрузіть time++;          -перегрузіть оператор  >= ;
	- перегрузіть time--;          -перегрузіть оператор  <= ;
	- перегрузіть ++time;          -перегрузіть оператор  == ;
	- перегрузіть --time;          -перегрузіть оператор  > ;
	- перегрузіть time+=time1;     -перегрузіть оператор  < ;
	- перегрузіть time-=time1;     -перегрузіть оператор  != ;*/
#include "TIME.h"
#include <iostream>
using namespace std;
int main()
{
	Time time;//створюємо об’єкт time
	Time time1;// створюємо об’єкт time1
	cin >> time; //перевантажуємо оператор>> для об’єкта time
	cout << time << endl; // перевантажуємо оператор << для об’єкта time
	cin >> time1;//перевантажуємо оператор >> для об’єкта time1
	cout << time1 << endl;// перевантажуємо оператор << для об’єкта time1
	bool ans = time >= time1;// перевантажуємо оператор >= 
	bool ans1 = time <= time1;// перевантажуємо оператор <=
	bool ans2 = time == time1;// перевантажуємо оператор ==
	bool ans3 = time < time1;// перевантажуємо оператор <
	bool ans4 = time > time1;// перевантажуємо оператор >
	bool ans5 = time != time1;// перевантажуємо оператор !=
	cout << "Overloading operator '>='  " << ans << endl; //виводимо
	cout << "Overloading operator '<='  " << ans1 << endl;
	cout << "Overloading operator '=='  " << ans2 << endl;
	cout << "Overloading operator '<'   " << ans3 << endl; //результати
	cout << "Overloading operator '>'   " << ans4 << endl;
	cout << "Overloading operator '!='  " << ans5 << endl;
	cout << "Overloading post-increment" << endl;
	time++; cout << time << endl; // перевантажуємо постфіксний інкремент
	cout << "Overloading pre-increment" << endl;
	++time; cout << time << endl; // перевантажуємо префіксний інкремент
	cout << "Overloading post-decrement" << endl;
	time--; cout << time << endl; // перевантажуємо постфіксний декремент
	cout << "Overloading pre-decrement" << endl;
	--time; cout << time << endl; // перевантажуємо префіксний декремент
	cout << "Overloading operator +=" << endl;
	time += time1; cout << time << endl; // перевантажуємо оператор +=
	cout << "Overloading operator -=" << endl;
	time -= time1; cout << time << endl; // перевантажуємо оператор -=
}