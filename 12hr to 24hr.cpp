//Programmed By: Omar Baig
#include<iostream>
#include<iomanip>
using namespace std;

void display();
void input(int& h, int& m, int& s, string ampm);
void convert24to12(int& h, int& m, int& s, string ampm);
void convert12to24(int& h, int& m, int& s, string ampm);
void output(int h, int m, int s, string ampm);

int main()
{
	int a, h, m, s;
	string ampm;
	do{
		display();
		cin >> a;
		cout << endl;

		switch (a)
		{
		case 1:
			input(h, m, s, ampm);
			convert12to24(h, m, s, ampm);
			output(h, m, s, ampm);
			break;
		case 2:
			input(h, m, s, ampm);
			convert24to12(h, m, s, ampm);
			output(h, m, s, ampm);
			break;
		}
	} while (a != 99);
	
}

void display()
{
	cout << "Enter #" << endl
		<< "1: To convert time from 12-hour notation to 24-hour notation." << endl
		<< "2: To convert time from 24- hour notation to 12-hour notation." << endl
		<< "99: To quit program." << endl;
}
void input(int& h, int& m, int& s, string ampm)
{
	cout << "Enter hours: ";
	cin >> h;
	cout << "Enter minutes: ";
	cin >> m;
	cout << "Enter seconds: ";
	cin >> s;

}
void convert12to24(int& h, int& m, int& s, string ampm)
{
	if (h < 12){
		h = h + 12;
	}
}
void convert24to12(int& h, int& m, int& s, string ampm)
{
	if (h>12){
		h = h - 12;
	}
}
void output(int h, int m, int s, string ampm)
{
	cout << h << ":" << m << ":" << s << endl;
}
