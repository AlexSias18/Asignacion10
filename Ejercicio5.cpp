#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
using namespace std;

int Ejercicio5() {
	int sueldo,puntaje;
	char  vivienda, carga, tarjeta;
	

	cout << "Ingrese su sueldo mensual: " << endl;
	cin >> sueldo;
	cout << "Ingrese su tipo de vivienda(P: pariente ; A: alquilada; M:propia): " << endl;
	cin >> vivienda;
	cout << "Ingrese su Posee tarjeta de credito(N:no tiene; S:si tiene): " << endl;
	cin >> tarjeta;
	cout << "Ingrese su Posee Carga Familiar (N:no tiene; S:si tiene): " << endl;
	cin >> carga;

	int puntosSueldo = (sueldo < 1500) * 6 + (1500 <= sueldo <= 6000) * 12 + (sueldo > 6000) * 18;
	int puntosVivienda = (vivienda == 'p' || vivienda == 'P') * 2 + (vivienda == 'a' || vivienda == 'A') * 5 + (vivienda == 'm' || vivienda == 'M') * 10;
	int puntosTarjeta = (tarjeta == 's' || tarjeta == 'S') * 6 + (tarjeta == 'n' || tarjeta == 'N') * 0;
	int puntosCarga= (carga == 's' || carga == 'S') * 6 + (carga == 'n' || carga == 'N') * 3;

	puntaje = puntosCarga + puntosSueldo + puntosTarjeta + puntosVivienda;
	bool prestamo = (puntaje < 20) + (puntaje > 20);

	//Salida
	
	cout << "Puntaje Obtenido: " << puntaje<< endl;
	cout << "Se le otorga el prestamo(0:No ; 1:Si) : " << prestamo << endl;
	system("pause");
	return 0;
	

}