#include <iostream>
#include <conio.h>
#include <string>
#include <stdio.h>

using namespace std;

int Ejercicio1() {
	//Entrada
	double exp, sueldo, sueldototal;
	char nacimiento;
	cout << "Ingrese los años de experiencia: " << endl;
	cin >> exp;
	cout << "Ingrese lugar de Nacimiento: L(Si nacio en Lima) o F(Si nacio fuera de Lima)" << endl;
	cin >> nacimiento;
	//Logica
	sueldo = (exp == 0) * 900 + (exp >= 1 && exp <= 5)*(900 + exp / 100 * 900) + (exp > 5)*(100 + exp / 100 * 900);
	sueldototal = (nacimiento == 'L')*sueldo*1.15 + (nacimiento == 'F')* sueldo*1.20;
	//Salida
	cout << "El sueldo total del trabajador es: " << sueldototal<<endl;
	system("pause");
	return 0;
}