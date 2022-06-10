#pragma once
#pragma warning(disable : 4996)

#include <thread>
#include <fstream>
#include <iostream>
#include "Marquesina.h"
#include <iostream>

using namespace std;

void marquee_limit(std::string text, size_t limit);
int main() {
	Marquee mark1(" Diego Portilla - Darwin Valdiviezo - Estructura de Datos - ", 62);

	mark1.animation();

	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	fflush(stdin);
	setlocale(LC_ALL, "¨Spanish");
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	char* word = NULL;
	char* aux = NULL;
	char* test = (char*)calloc(100, sizeof(char));
	char* test_1 = (char*)calloc(100, sizeof(char));
	bool repite = true;
	int n = 0, x = 0;


	int op;

	cout << "" << endl;
	cout << "" << endl;
	do {
		system("cls");
		cout << "" << endl;
		cout << "" << endl;
		cout << "1" << endl;
		cout << "2" << endl;
		cin >> op;
		switch (op) {
		case 1:
			system("pause");
			break;
		case 2:
			system("pause");
			break;
		default:
			system("pause");
			break;
		}
		system("cls");
	} while (op != 3);
	return 0;

}

void marquee_limit(std::string text, size_t limit) {
	bool ciclo = true;
	while (ciclo)
	{
		std::string temp = text;
		text.erase(0, 1);
		text += temp[0];
		std::this_thread::sleep_for(std::chrono::milliseconds(800));
		//poner titulo en la consola

		SetConsoleTitleA(text.substr(0, limit).c_str());
		if (GetAsyncKeyState(VK_RETURN)) {
			ciclo = false;
			break;
		}

	}
}
