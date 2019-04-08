
#include <iostream>
#include "Time.h"

using namespace std;



Time::Time()
{
	cout << "time()" << endl;
	this->minutes=0;
	this->seconds=0;
	this->hours=0;
	
}


Time::~Time()
{
	cout << "~time()" << endl;
}
int Time::Gethours()
{
	return this->hours;
}
int Time::Getseconds()
{
	return this->seconds;
}
int Time::Getminutes()
{
	return this->minutes;
}
int  Time::Check() const
{
	int zh,zm,zs,newsec = 0;
	zh = 0 - this->hours;
	zm = 0 - this->minutes;
	zs = 0 - this->seconds;
	newsec = -1*(zh * 3600 + zm * 60 + zs);
	return(newsec);

}
void Time::Setseconds(int b)
{
	if (b < 0 && b >= 60)
	{
		throw "Incorrect value";
	}
	this->seconds = b;
}
void Time::Sethours(int a)
{
	if (a < 0 && a >= 24)
	{
		throw "Incorrect value";
	}
	this->hours = a;
}
void Time::Setminutes(int c)
{
	if (c < 0 && c >= 60)
	{
		throw "Incorrect value";
	}
	this->minutes = c;
}
bool operator>=(const Time & T1, const Time & T2)
{
	int Te1 = T1.Check();
	int Te2 = T2.Check();
	return Te1 >= Te2;
}
Time& Time::operator-=(const Time& T1)
{
	int n = 2;
	this->hours -= n;
	this->minutes -= n;
	this->seconds -= n;
	
	return *this;
}