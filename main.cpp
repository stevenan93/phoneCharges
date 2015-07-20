#include<iostream>

using namespace std;

int main()
{
	int hours;
	double minutes;
    float num;
    int calltime;
    while(1)
    {
		cout << "Enter starting time of call: ";
		cin >> num;
		hours = int(num);
		minutes = (num - hours) * 100;
		if(hours > 23 || hours < 0)
			cout << "invalid hours, try again\n";
		else if(minutes > 59 || minutes < 0)
			cout << "invalid minutes, try again\n";
		else
		{
			cout << "How many minutes? ";
			cin >> calltime;
			if(calltime < 0)
				cout << "invalid calltime, try again\n";
			else
				break; //everything valid, leave loop
		}
	}
	double charges;
	if(hours <= 6)
	{
		charges = calltime * 0.12;
	}
	else if(hours >= 7)
	{
		if(hours == 19 && minutes > 0)
		{
			charges = calltime * 0.35;
		}
		else
		{
			charges = calltime * 0.55;
		}
	}
	cout << "\n\n***********TOTAL CHARGES************\n";
	cout << " CALL MADE AT : " << hours << " hours, " << minutes << " minutes";
	cout << "\n     DURATION : " << calltime << " minutes";
	cout << "\nTOTAL CHARGES : " << charges << "\n";
	cout << "*************************************\n\n";

}
