#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
using namespace std;

int Ejercicio4() {
	//Entrada
	string codigo;
	string numero, dia, mes, anio, paraprocedencia1, paraprocedencia2;
	int  paraanio;
	char procedencia1, procedencia2, fragil2, fragil,v;
	cout << "Ingrese el codigo de 16 digitos: ";
	cin >> codigo;
	//Logica
	dia = codigo.substr(8, 2);
	mes = codigo.substr(10, 2);
	anio = codigo.substr(12, 4);
	numero = codigo.substr(0, 3);
	paraanio = char(stoi(anio));
	paraprocedencia1 = codigo.substr(4, 2);
	procedencia1 = char(stoi(paraprocedencia1));
	paraprocedencia2 = codigo.substr(6, 2);
	procedencia2 = char(stoi(paraprocedencia2));
	fragil = char(stoi(codigo.substr(3, 1)));
	fragil2 = (fragil > 0)*'N' + (fragil == 0)*'S';
	v = (paraanio < 2019)*'S' + (paraanio >= 2019)*'N';


	//Salida
	cout << "Numero unico: "<<numero <<endl;
	cout << "Fragil(N:No;S:Si): "<<fragil2 <<endl;
	cout << "Pais de procedencia: "<<procedencia1<<procedencia2 <<endl;
	cout << "Dia,mes y anño: "<<dia<<"-"<<mes<<"-"<<anio <<endl;
	cout << "Bien se encuentra vencido al dia de hoy(N:No;S:Si): "<<v <<endl;

	system("pause");
	return 0;

}