#pragma once
class Time
{
private:

	int minutes;
	int seconds;
	int hours;



public:
	Time();
	~Time();
	void Sethours(int a);
	void Setseconds(int b);
	void Setminutes(int c);
	int Gethours();
	int Getseconds();
	int Getminutes();
	int Check() const;
	friend bool operator >= (const Time &T1, const Time &T2);
	Time& operator-=(const Time& T1);
};

