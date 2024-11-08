using namespace std;
int main()
{
	//PRACTICA E
	
	
	// EJERCICIO 1
	string opcion1 = "SI";
	do
	{
		cout << "Desea salir del cilo?" << endl;
		cout << " SI/NO Conteste en mayusculas" << endl;
		
	}
	cin >> opcion1;
	while (opcion1 == "NO");


	// EJERCICIO 2
    
    int numero1, numero2;
    int total;
    string opcion;

    do
    {
        cout << "Menu de operaciones: " << endl;
        cout << "a) Suma de dos operadores " << endl;
        cout << "b) Resta de dos operadores " << endl;
        cout << "c) Multiplicacion de dos operadores " << endl;
        cout << "d) Division de dos operadores " << endl;
        cout << "e) Residuo de dos operadores " << endl;
        cout << "s) Salir del Menu " << endl;

        cout << "Ingresa la opcion" << endl;
        cin >> opcion;

        if (opcion == "a") 
        {
            cout << "Dame un numero: ";
            cin >> numero1;

            cout << "Dame otro numero: ";
            cin >> numero2;

            total = numero1 + numero2;

            cout << total;
        }

        if (opcion == "b")
        {
            cout << "Dame un numero: ";
            cin >> numero1;

            cout << "Dame otro numero: ";
            cin >> numero2;

            total = numero1 - numero2;

            cout << total << endl;
        }

        if (opcion == "c")
        {
            cout << "Dame un numero: ";
            cin >> numero1;

            cout << "Dame otro numero: ";
            cin >> numero2;

            total = numero1 * numero2;

            cout << total << endl;
        }

        if (opcion == "d")
        {
            cout << "Dame un numero: ";
            cin >> numero1;

            cout << "Dame otro numero: ";
            cin >> numero2;

            total = numero1 / numero2;

            cout << total << endl;
        }

        if (opcion == "e")
        {
            cout << "Dame un numero: ";
            cin >> numero1;

            cout << "Dame otro numero: ";
            cin >> numero2;

            total = numero1 % numero2;

            cout << total << endl;
        }
  
    } while (opcion != "s");


    // EJERCICIO 3
    string operador;
    int pin;
    double saldo = 3450.00;
    double retirar;

    cout << "Ingrese el pin: " << endl;
    cin >> pin;
    cout << endl;

    if (pin == 1234)
    {
        do
        {
            cout << "Menu de operaciones cajero UNITEC " << endl;
            cout << "a) Consulta de saldo " << endl;
            cout << "b) Retiro de dinero " << endl;
            cout << "c) Cancelar operacion " << endl;
            cin >> operador;

            if (operador == "a")
            {
                cout << "Tu saldo es: " << saldo << endl;
                break;
            }

            if (operador == "b")
            {
                cout << "Cantidad a retirar: " << endl;
                cin >> retirar;
                cout << endl;

                if (saldo < retirar)
                {
                    cout << "Saldo insuficiente" << endl;
                }
                else
                {
                    saldo = saldo - retirar;
                    cout << "Tu nuevo saldo es: " << saldo << endl;
                }
            }


        } while (operador != "c");
    }

    else
    {
        cout << "Pin incorrecto" << endl;
    }


    //EJERCICIO 4
    srand(time(NULL));   //semilla
	int castigo = 0, i = 0;
	int vida = 12;
	int premio = 0;
	cout << "Vida inicial " << vida << endl;
	while (vida > 0)
	{
		vida--;      
		cout << "Costo de ciclo " << vida << endl;

		castigo = rand() % 2;
		if (castigo == 1)
		{
			vida = vida - 3;
			cout << "Castigo " << vida << endl;
		}
		      
		premio = rand() % 2;
		if (premio == 1)
		{
			vida = vida + 3;
			cout << "Premio " << vida << endl;
		}
		cout << "Vida despues de ciclo " << vida << endl;
	}
}
