#include <iostream>
using namespace std;

int main()
{
    // Ejercicio 1
    int numero;
    cout << "Ingrese un numero ";
    cin >> numero;

    int potencia = numero * numero;
    cout << "El cuadrado de " << numero << " es " << potencia << endl;
   
    // Ejercicio 2
    int x;
    cout << "Ingrese un numero: ";
    cin >> x;

    cout << x << " -- " << 2 * x << " -- " << 3 * x << " -- " << 4 * x << " -- " << 5 * x << endl;

    // Ejercicio 3
    int pesoUsuario;
    cout << "Ingrese su peso en kilogramos: ";
    cin >> pesoUsuario;

    cout << "Su peso en libras es: " << pesoUsuario * 2.2 << endl;

    // Ejercicio 4
    int num1;
    int num2;
    int num3;
    int promedio, total;

    cout << "Ingrese 3 valores: ";
    cin >> num1;
    cin >> num2;
    cin >> num3;

    total = num1 + num2 + num3;
    promedio = total / 3;

    cout << "El total es: " << total << " Y tu promedio es: " << promedio << endl;

    // Ejercicio 5
    double totall;
    double porcentaje;
    double propina;

    cout << "Ingresa el total de la cuenta: ";
    cin >> totall;
    cout << endl;

    cout << "Que porcentaje de propina desea dar? ";
    cin >> porcentaje;
    cout << endl;

    propina = totall * (porcentaje / 100);
    cout << "La propina es: " << propina << endl;

    // Ejercicio 6
    int numero2;
    cout << "Ingresa un numero: ";
    cin >> numero2;

    if (numero2 > 100)
    {
        cout << "El numero " << numero2 << "es mayor a 100 " << endl;
    }
    else
    {
        cout << "El numero: " << numero2 << " es menor o igual a 100" << endl;
    }

    // Ejercicio 7
    int numero5;
    cout << "Ingrese un numero: ";
    cin >> numero5;
    if (numero5 < 0)
    {
        cout << "El numero es negativo" << endl;
    }
    else
    {
        cout << "El numero es positivo" << endl;
    }

    // Ejercicio 8
    string miemail;
    int password;

    cout << " Escribe tu correo: ";
    cin >> miemail;

    cout << "Escribe tu contraseña: ";
    cin >> password;
    if (password == 12345)
    {
        cout << "Felicidades password correcto" << endl;
    }
    else 
    {
        cout << "Su password es incorrecto" << endl;

    // Ejercicio 9
    int farenheit;
    cout << "Escribe los grados en farenheit: ";
    cin >> farenheit;

    cout << " a centigrados es: " << farenheit - 32 * (5 / 9) << endl;


    // Ejercicio 10
    double pesoCorporal, estatura;
    double mc;

    cout << "Ingresa tu peso: ";

    cin >> pesoCorporal;
    cout << endl;

    cout << " Ingresa tu estatura: ";
    cin >> estatura;
    cout << endl;

    mc = pesoCorporal / (estatura * estatura);
    cout <<  "Tu masa corporal es: " << mc << endl;

    if (mc < 18.5)
    {
        cout << "Tu peso es bajo" << endl;
    }
    if (mc >= 18.5 and mc < 25)
    {
        cout << "Tu peso es normal";
    }

}
