// zadanie 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	//zadanie 1 
	cout << "XX    XX" << " " << "XXX" << "       " << "XXX" << endl;
	cout << "XX X  XX" << " " << " XXX" << "     " << "XXX" << endl;
	cout << "XX  X XX" << " " << "  XXX" << " X " << "XXX" << endl;
	cout << "XX    XX" << " " << "   XXX" << " " << "XXX" << endl;
	//zadanie 2 

	cout << "  X   X   X   " << endl;
	cout << "   X  X  X " << endl;
	cout << "    X X X " << endl;
	cout << "    X X X " << endl;
	cout << "   X     X " << endl;
	cout << "  X       X  " << endl;
	cout << " X         X" << endl;
	//zadanie 3

	cout << "Lista obecnosci\n\n";
	cout << "Nr\tImie\tNazwisko\tObecnosc\n";
	cout << "1\tAnna\tKowalska\tObecna\n";
	cout << "2\tJakub\tNowak\t\tNieobecny\n";
	cout << "3\tZofia\tDechnik\t\tObecna\n";
	//zadanie 4 wersja 1	

	int a;
	int b;
	cout << "Prosze podac wartosc liczby a\n";
	cin >> a;
	cout << "Prosze podac wartosc liczby b\n";
	cin >> b;
	int c;
	c = a + b;
	cout << "Wynik dodawania to: " << c << "\n";
	c = a * b;
	cout << "Wynik mnozenia to: " << c << "\n";

	//zadania 4 wersja 2

	float x;
	float y;
	cout << "Prosze podac wartosc liczby x\n";
	cin >> x;
	cout << "Prosze podac wartosc liczby y\n";
	cin >> y;
	float z;
	z = x + y;
	cout << "Wynik dodawania to: " << z << "\n";
	z = x * y;
	cout << "Wynik mnozenia to: " << z << "\n";

	//zadanie 5 

	double f;
	cout << " Prosze podac temperature\n ";
	cin >> f;
	double s;
	s = 5.0 * (f - 32.0) / 9.0;
	cout << f << "Stopni Fahreinheita to " << s << "Stopni Celsjusza\n";

	//zadanie 6 
	string i;
	string n;
	int w;
	cout << " Prosze podac imie\n";
	cin >> i;
	cout << " Prosze podac nazwisko\n";
	cin >> n;
	cout << " Prosze podac wiek\n";
	cin >> w;
	cout << " Nazywasz sie " << i << " " << n << " i masz " << w << " " << " lat\n";

	//zadanie 7 
	int m;
	int k;
	cout << "Prosze podac liczbe m\n";
	cin >> m;
	cout << "Prosze podac liczbe k\n";
	cin >> k;
	cout << "Wynik dodawania to: " << m + k << "\n";
	cout << "Wynik odejmowania to: " << m - k << "\n";
	cout << "Wynik mnozenia to: " << m * k << "\n";
	cout << "Wynik dzielenia calkowitego to: " << m / k << "\n";
	cout << "Reszta z dzielenia to: " << m % k << "\n";

	//zadanie 9 
	double r;
	cout << "Prosze podac promien kola \n";
	cin >> r;
	double g;
	g = r * r * (3.14159265350);
	cout << "Pole kola to " << z << "\n";
	double v;
	v = r * (2 * 3.1415926535);
	cout << "Obwod kola to " << x << "\n";

	//zadanie 11
	double o;
	cout << "Prosze podac temperature \n";
	cin >> o;
	double p = (9.0 / 5.0) * o + 32;
	cout << fixed << setprecision(2);
	cout << "Temperatura wynosi " << p << " stopni Fahrenheita\n";
	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
