#pragma once
/*
* @flie Marquesina.h
* @author Diego Portilla - Darwin Valdiviezo - Estructura de Datos
* @date 9/6/2022
* @brief Archivo de cabecera para la clase Marquesina
* @version 1.0
* 
*@copyright Copyright (c) 2022,Diego Portilla - Darwin Valdiviezo
*@license MIT License
*/
#include <thread>
#include <iostream>
#include <Windows.h>
#include "String_p.h"

using namespace std;


class Marquee {
private:
	const char* content;
	int lenght;
	COORD coord = { 0,0 };
	String_p string_op;

public:
	Marquee() = default;
	Marquee(const char*, int);
	char* marquee(int);
	void print_to(int x, int y);
	void show();
	void animation();
	COORD GetConsoleCursorPosition(HANDLE hConsoleOutput);
	void cursorHide();
};


Marquee::Marquee(const char* _content, int _lenght) {
	this->content = _content;
	this->lenght = _lenght;
}

char* Marquee::marquee(int position) {
	int counter = 0;
	char* display = (char*)malloc(sizeof(char) * (lenght + 1));
	char* travel = (char*)malloc(sizeof(char) * 256);
	char* temp = (char*)malloc(sizeof(char) * (strlen(content) + 1));
	string_op.strcpy(travel, content);
	cursorHide();
	while (counter < position) {
		temp[counter] = travel[0];
		travel++;
		counter = counter + 1;
	}
	fflush(stdin);
	temp[counter + 1] = '\0';
	string_op.strcat(travel, " ");
	string_op.strcat(travel, temp);
	string_op.strncpy(display, travel, lenght);
	display[lenght] = '\0';
	return display;
}

void Marquee::cursorHide()
{
	HANDLE hwnd;
	hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info;

	info.bVisible = 0;
	info.dwSize = 1;

	SetConsoleCursorInfo(hwnd, &info);
}

COORD Marquee::GetConsoleCursorPosition(HANDLE hConsoleOutput)
{
	CONSOLE_SCREEN_BUFFER_INFO cbsi;
	if (GetConsoleScreenBufferInfo(hConsoleOutput, &cbsi))
	{
		return cbsi.dwCursorPosition;
	}
	else
	{
		COORD invalid = { 0, 0 };
		return invalid;
	}
}

void Marquee::show() {
	char* singboard;
	while (1) {
		for (int i = 0; i < lenght; i++) {
			singboard = marquee(i);
			print_to(20, 0);
			std::cout << singboard;
			print_to(27, 3);
			std::cout << std::endl;
			Sleep(600);
		}
	}
}

void Marquee::print_to(int x, int y) {
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	fflush(stdout);
}

void Marquee::animation() {
	COORD cord;
	cord = GetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE));
	std::thread first(&Marquee::show, this);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
	fflush(stdout);
	first.detach();
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
	cout << endl;
	fflush(stdin);
}