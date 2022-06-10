
#include <iostream>
#include "menu.h"
#include "menu_option.h"
#include "operaciones.h"
#include "Marquesina.h"
#include "registro.h"


using namespace std;
void marquee_limit(std::string text, size_t limit);
void menuproyect();

int main()
{
	registro();

	//Marquee mark1(" Diego Portilla - Darwin Valdiviezo - Estructura de Datos - ", 50);
	//mark1.animation();
	//fflush(stdin);
	
	menuproyect();

   
}


void marquee_limit(std::string text, size_t limit) {
	bool ciclo = true;
	while (ciclo)
	{
		std::string temp = text;
		text.erase(0, 1);
		text += temp[0];
		std::this_thread::sleep_for(std::chrono::milliseconds(800));

		SetConsoleTitleA(text.substr(0, limit).c_str());
		if (GetAsyncKeyState(VK_RETURN)) {
			ciclo = false;
			break;
		}

	}
}


void menuproyect() {
	vector<celular> compra;
	vector<cliente> venta;

	Menu m("\nMENU PROYECTO");
	m.add_option(MenuOption("1. Insertar Celular a la Lista", [&](MenuOptionArguments args) {
		system("cls");
		cout << " " << endl;
		comprarCelular(compra);
		return 0;
	}));
	m.add_option(MenuOption("2. Mostrar Stock de Celulares", [&](MenuOptionArguments args) {
		system("cls");
		cout << " " << endl;
		cout << "\nSTOCK DE CELULARES" << endl;
		imprimirCelular(compra);
		return 0;
	}));
	m.add_option(MenuOption("3. Imprimir Lista de Celulares Vendidos", [&](MenuOptionArguments args) {
		system("cls");
		cout << " " << endl;
		cout << "\n\t\t LISTA DE CELULARES VENDIDOS A CLIENTES " << endl;
		imprimirVentas(venta);
		return 0;
	}));
	m.add_option(MenuOption("4. Vender Celular", [&](MenuOptionArguments args) {
		system("cls");
		cout << " " << endl;
		venderCelular(venta, compra);
		return 0;
	}));
	m.add_option(MenuOption("5. Buscar Celular", [&](MenuOptionArguments args) {
		system("cls");
		cout << " " << endl;
		cout << "\nBUSCAR CELULAR" << endl;
		buscarCelular(compra);
		return 0;
	}));
	m.add_option(MenuOption("6. Buscar Cliente ", [&](MenuOptionArguments args) {
		system("cls");
		cout << " " << endl;
		cout << "\nBUSCAR CLIENTE" << endl;
		buscarCelularesdeUnCliente(venta);
		return 0;
	}));
	m.add_option(MenuOption("7. Modificar Datos del un Celular", [&](MenuOptionArguments args) {
		system("cls");
		cout << " " << endl;
		modificarCelular(compra);
		return 0;
	}));
	m.add_option(MenuOption("8. Modificar Datos del Cliente ", [&](MenuOptionArguments args) {
		system("cls");
		cout << " " << endl;
		modificarCliente(venta);
		return 0;
	}));
	m.add_option(MenuOption("9. Guardar archivos .Txt y .dat ", [&](MenuOptionArguments args) {
		system("cls");
		cout << " " << endl;
		guardarTxt(compra);
		guardarClienteTxt(venta, compra);
		guardarBin(compra);
		guardarClienteBin(venta, compra);
		cout << "GUARDADO CON EXITO" << endl;
		return 0;
	}));
	m.add_option(MenuOption("10. Guardar datos en PDF ", [&](MenuOptionArguments args) {
		system("cls");
		cout << " " << endl;
		crearArchivo(compra, venta);
		imprimirArchivo();
		cout << "GUARDADO CON EXITO" << endl;
		return 0;
	}));
	m.add_option(MenuOption("11. Manual de Usuario ", [&](MenuOptionArguments args) {
		system("cls");
		cout << " " << endl;
		abrirPdf();
		cout << "ABRIENDO EL ARCHIVO POR FAVOR ESPERE" << endl;
		return 0;
	}));
	m.add_option(MenuOption("12. Salir", [&](MenuOptionArguments args) {
		system("cls");
		cout << " " << endl;
		std::cout << "Salio con exito del programa..." << std::endl;
		m.stop();
	}, false));

	m.display();

}
