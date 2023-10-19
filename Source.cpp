#include <iostream>

#include <Windows.h> //локалізація

using namespace std;

int main()

{

	//локалізація

	SetConsoleCP(1251);

	SetConsoleOutputCP(1251);

	int A{}, B{};

	cin >> A >> B;

	if ((A % 2 != 0 && B % 2 == 0) || (B % 2 != 0 && A % 2 == 0)) cout << "істина";

	else cout << "брехня";

	return 0;

}