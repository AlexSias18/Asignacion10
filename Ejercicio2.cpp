#include <iostream>
#include <conio.h>
#include <string>
#include <stdio.h>

using namespace std;

int Ejercicio2() {
	//Entrada
	string codigo;
	string dia, mes, anio,paratipo;
	bool  perecible;
	char tipo;

	cout << "Ingrese el codigo: " << endl;
	getline(cin, codigo);
	//Logica
	dia = codigo.substr(0, 2);
	mes = codigo.substr(2, 2);
	anio = codigo.substr(4, 4);
	paratipo = codigo.substr(8, 2);
	perecible = (codigo.substr(10, 2) == "00");
	tipo = char(stoi(paratipo));

	//Salida
	cout << " Día de vencimiento: " << dia<<endl;
	cout << "Mes de vencimiento: " << mes << endl;
	cout << "Año de vencimiento: " << anio << endl;
	cout << "Tipo de producto: " << tipo << endl;
	cout << "Producto perecible (0:No; 1:Si): " << perecible;

	system("pause");
	return 0;
}