#include <iostream>
using namespace std;


int main()
{
	// Ejercicio 1
	
	double Resultado1 = 3 + 5 * 2 / 2 - 1;
	double Resultado2 = 3 * 10 / 2 - 1;
	double Resultado3 = 3 + 5 - 1;
	double Resultado4 = 8 - 1;
	double Resultado5 = 1 / 3 * 3;

	cout << "Resultado de 3 + 5 * 2 / 2 - 1: " << Resultado1 << endl;
	cout << "Resultado de 3 * 10 / 2 - 1: " << Resultado2 << endl;
	cout << "Resultado de 3 + 5 - 1: " << Resultado3 << endl;
	cout << "Resultado de 8 - 1: " << Resultado4 << endl;
	cout << "Resultado de 1 / 3 * 3: " << Resultado5 << endl;

	// Ejercicio 2
	
	int numero;
	cout << "Ingresa un numero: ";
	cin >> numero;
	int potencia = numero * numero; //Calcula la potencia al cuadrado
	cout << "La potencia de " << numero << " es " << potencia << endl;

	// Ejercicio 3
	
	double yardas;
	cout << "ingrese numero de yardas: ";
	cin >> yardas;
	double metros = yardas * 0.9144;
	cout << "Las yardas son: " << metros << endl;

	// Ejercicio 4
	
	double precioAuto = 200000;
	double porcentajeDepreciable = 0.8;
	int anos = 5;
	double valorCondepreciacion = precioAuto * porcentajeDepreciable;
	double depreciacionAnual = valorCondepreciacion / anos;

	cout << "Depreciacion anual del auto: " << endl;
	cout << "Año 1: " << depreciacionAnual << "pesos" << endl;
	cout << "Año 2: " << depreciacionAnual << "pesos" << endl;
	cout << "Año 3: " << depreciacionAnual << "pesos" << endl;
	cout << "Año 4: " << depreciacionAnual << "pesos" << endl;
	cout << "Año 5: " << depreciacionAnual << "pesos" << endl;

	// Ejercicio 5
	
	double salarioMensual = 25000;
	double impuestoFijo = 900;
	double porcentajeImpuesto = 0.015;

	double baseImpuesto = salarioMensual - impuestoFijo;
	double impuestoPorcentual = baseImpuesto * porcentajeImpuesto;
	double impuestoTotal = impuestoFijo + impuestoPorcentual;
	double sueldoNeto = salarioMensual - impuestoTotal;

	cout << "Impuesto total a deducir: " << impuestoTotal << " pesos" << endl;
	cout << "Sueldo neto a recibir: " << sueldoNeto << " pesos" << endl;

	// Ejercicio 6

	int multiplicacion = 3 * 4;
	cout << "3 * 4 = " << multiplicacion << endl;

	int division = 12 / 3;
	cout << "12 / 3 = " << division << endl;

	int modulo = 12 % 3;
	cout << "12 % 3 = " << modulo << endl;

	int modulo_dos = 12 % 7;
	cout << "12 % 7 = " << modulo_dos << endl;

	double suma = 3 + 3.0;
	cout << "3 + 3.0 = " << suma << endl;

	double division_dos = 10.0 / 100;
	cout << "10 / 100 = " << division_dos << endl;

	// Ejercicio 7
	
	int a = 10;
	int b = 20;

	cout << "(a > b) = " << (a > b) << endl; // i
	cout << "(a < b) = " << (a < b) << endl; // ii
	cout << "(a == b) = " << (a == b) << endl; // iii
	cout << "(a != b) = " << (a != b) << endl; // iv
	cout << "(a + b) > 100 = " << ((a + b) > 100) << endl; // v
	cout << "(a - b) == 0 = " << ((a - b) == 0) << endl; // vi
	cout << "(a * b) > 500 = " << ((a * b) > 500) << endl; // vii
	cout << "(a * b) < 100 = " << ((a * b) < 100) << endl; // viii
	cout << "(a - b) < 0 = " << ((a - b) < 0) << endl; // ix
	cout << "a < 20 = " << (a < 20) << endl; // x
}
