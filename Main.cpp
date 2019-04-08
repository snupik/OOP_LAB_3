#include <iostream>
#include "Time.h"
using namespace std;
void Sort(Time** Times, int n);
void Minusone(Time** Times, int n);
int main()
{	
	Time T1;
	T1.Sethours(2);
	T1.Setseconds(3);
	T1.Setminutes(3);
	Time T2;
	T2.Sethours(2);
	T2.Setseconds(1);
	T2.Setminutes(5);
	cout << "Comparison T1 >= T2: " << (T1 >= T2) << endl;
	T1 -=T1;
	cout << "NEW T1 " << T1.Gethours()<< T1.Getseconds()<< T1.Getminutes() << endl;
	const int numberO = 5;
	Time** Times = new Time*[numberO];
	Times[0] = new Time;
	Times[0]->Sethours(1);
	Times[0]->Setminutes(2);
	Times[0]->Setseconds(2);
	Times[1] = new Time;
	Times[1]->Sethours(2);
	Times[1]->Setminutes(3);
	Times[1]->Setseconds(4);
	Times[2] = new Time;
	Times[2]->Sethours(1);
	Times[2]->Setminutes(4);
	Times[2]->Setseconds(6);
	Times[3] = new Time;
	Times[3]->Sethours(8);
	Times[3]->Setminutes(3);
	Times[3]->Setseconds(3);
	Times[4] = new Time;
	Times[4]->Sethours(1);
	Times[4]->Setminutes(1);
	Times[4]->Setseconds(1);
	Sort(Times, numberO);
	cout << "Time array after sorting: " << endl;
	for (int i = 0; i < numberO; i++)
	{
		cout << i << ": " << Times[i]->Check() << endl;
	}
	cout << "Time-2sec " << endl;
	Minusone(Times, numberO);
	for (int i = 0; i < numberO; i++)
	{
		cout << i << ": " << Times[i] << endl;
	}
	
	delete[] Times;
	
	system("pause");
	return 0;
}
void Sort(Time** Times, int n)
{
	Time*temp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j <= n - 2; j++)
		{
			if (Times[j]->Check() < Times[j + 1]->Check())
			{
				temp = Times[j];
				Times[j] = Times[j + 1];
				Times[j + 1] = temp;
			}
		}
	}
}
void  Minusone(Time** Times, int n)
{
	for (int i = 0; i < n; i++)
	{
		Times[i] -= Times[i]->Check();
		
		
	}
}