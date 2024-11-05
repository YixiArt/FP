using namespace std;

// Practica D, IF - ELSE


int main()
{
    // Ejercicio 1
    int A, B, C;
    A = 20;
    B = 70;
    C = 40;

    if (B >= A and B >= C)
    {
        cout << "B es mas grande " << B << endl;
    }

    if (C >= A and C >= B)
    {
        cout << "C es mas grande " << C << endl;
    }

    if (A >= B and A >= C)
    {
        cout << "A es mas grande " << A << endl;
    }


    
    // Ejercicio 2
    int A1, B1, C1;
    A1 = 8;
    B1 = 52;
    C1 = 23;

    if (A1 <= B1 and A1 <= C1)
    {
        cout << "A es mas chico " << A1 << endl;
    }

    if (B1 <= A1 and B1 <= C1)
    {
        cout << "B es mas chico " << B1 << endl;
    }

    if (C <= A1 and C <= B1)
    {
        cout << "C es mas chico " << C1 << endl;
    }

    
    // Ejercicio 3
    int horas, minutos, segundos;
    cout << "Dame hora, minutos y segundos: " << endl;
    cin >> horas >> minutos >> segundos;

    segundos = segundos + 1;

    if (horas == 24)
    {
        horas = 0;
    }

    if (minutos == 60)
    {
        horas = horas + 1;
    }
    
    if (segundos == 60)
    {
        segundos = 0;
        minutos = minutos + 1;
    }
    cout << "Hora " << horas << " minutos " << minutos << " segundos " << segundos << endl;

    
    // Ejercicio 4
    double boleto;
    int distancia;
    int dias;

    cout << "Ingresa la distancia recorrida en km: " << endl;
    cin >> distancia;
    cout << "Cuantos dias te quedaras: " << endl;
    cin >> dias;
    
    if (dias > 7 and distancia > 800)
    {
        boleto = (distancia * 2.5) * 0.30;
        cout << "El precio del boleto es: " << boleto << endl;
    }

    else
    {
        boleto = distancia * 2.5;
        cout << "El precio del boleto es: " << boleto << endl;
    }

    
    // Ejercicio 5
    
    //A
    int angulo;

    cout << "Ingrese el angulo: ";
    cin >> angulo;

    if (angulo == 90)
    {
        cout << "El angulo es recto" << endl;
    }
    
    else
    {
        cout << "E l angulo no es recto" << endl;
    }

    
    // B
    int temp;

    cout << "Ingresa la temperatura";
    cin >> temp;

    if (temp > 100)
    {
        cout << "La temperatura esta por encima de punto de ebullicion del agua" << endl;
    }
    
    else
    {
        cout << "La temperatura esta por debajo del punto de ebullicion del agua" << endl;
    }

    
    // C
    int sumaDepositivos = 0;
    int sumaDenegativos = 0;
    int num;
    
    cout << "Dame algun numero: ";
    cin >> num;

    if (num != 0)
    {
        if (num > 0)
        {
            sumaDepositivos += num;
            cout << "El numero es positivo: " << sumaDepositivos << endl;
            cout << "Hay: " << sumaDepositivos << endl;
        }

        if (num < 0)
        {
            sumaDenegativos += num;
            cout << "El numero es negativo: " << sumaDenegativos << endl;
            cout << "Hay: " << sumaDenegativos << endl;
        }
    }   


    // D
    int x, y, z;
    
    cout << "Ingresa valor para y: ";
    cin >> y;
    
    cout << "Ingresa valor para x:";
    cin >> x;

    cout << "Ingresa valor para z:";
    cin >> z;

    if (x > y and z < y)
    {
        cout << x;
    }

    else
    {
        cout << "No se cumple ";
        cout << endl;
    }

    // E)
    int distancia1;
    
    cout << "Ingresa un valor para la distancia: ";
    cin >> distancia1;
    cout << endl;

    if (distancia1 > 20 and distancia1 < 35)
    {
        int tiempo;
        cout << "Ingrese el valor de tiempo: ";
        cin >> tiempo;
        cout << "El valor del tiempo es: " << tiempo << endl;
    }
    else
    {
        cout << "El valor para distancia no esta en el rango. ";
    }

}
