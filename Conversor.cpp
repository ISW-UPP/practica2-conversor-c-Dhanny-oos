// Conversor.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int main()
{

    int MC, Op;
    float pesos, distancia, peso;

    cout << "Elige lo que se desea convertir" << endl;
    cout << "1:Moneda, 2:Distancia, 3:Peso" << endl;
    cin >> MC;

    switch (MC)
    {
    case 1:
    {

        cout << "Ingresa la cantidad de pesos a convertir: ";
        cin >> pesos;

        cout << "Elige una opcion: " << endl;
        cout << "1:USD(Dolares estadounidenses), 2:COP(Pesos colombianos), 3:Euros, 4:CAD(Dolares canadienses), 5:Soles(Pesos peruanos)" << endl;
        cin >> Op;

        switch (Op)
        {
        case 1:
            cout << "Esta cantidad equivale a: " << pesos * 0.052 << " USD(Dolares estadounidenses)" << endl;
            break;

        case 2:
            cout << "Esta cantidad equivale a: " << pesos * 243.225 << " COP(Pesos colombianos)" << endl;
            break;

        case 3:
            cout << "Esta cantidad equivale a: " << pesos * 0.048 << " Euros" << endl;
            break;

        case 4:
            cout << "Esta cantidad equivale a: " << pesos * 0.708 << " CAD(Dolares canadienses)" << endl;
            break;

        case 5:
            cout << "Esta cantidad equivale a: " << pesos * 0.203 << " Soles" << endl;
            break;

        default:
            cout << "No hay coincidencias" << endl;
            break;
        }
        break;

    case 2:
    {
        cout << "Ingresa la distancia en Km a convertir: " << endl;
        cin >> distancia;

        cout << "Elige una opcion" << endl;
        cout << "1:Pulgadas, 2:Pies, 3:Centimetros, 4:Nanometros, 5:Años luz" << endl;
        cin >> Op;

        switch (Op)
        {
        case 1:
            cout << " km equivalen a: " << distancia * 39370.1 << " Pulgadas" << endl;
            break;

        case 2:
            cout << " km equivalen a: " << distancia * 3281.84 << " Pies" << endl;
            break;

        case 3:
            cout << " km equivalen a: " << distancia / 100000 << " Centimetros" << endl;
            break;

        case 4:
            cout << " km equivalen a: " << distancia * 1e+12 << " Nanómetros" << endl;
            break;

        case 5:
            cout << " km equivalen a: " << distancia / 9.461e+12 << " Años luz" << endl;
            break;

        default:
            cout << "No hay coincidencias" << endl;
        }
        break;

    case 3:
    {

        cout << "Ingrese la cantidad de kilogramos a convertir" << endl;
        cin >> peso;

        cout << "Elige una opcion";
        cout << "1:Toneladas, 2:Onzas, 3:Libras, 4:Microgramos, 5:Teragramos" << endl;
        cin >> Op;

        switch (Op)
        {
        case 1:
            cout << " kg equivalen a: " << peso * 0.001 << " Toneladas" << endl;
            break;

        case 2:
            cout << " km equivalen a: " << peso * 35.274 << " Onzas" << endl;
            break;

        case 3:
            cout << " km equivalen a: " << peso * 2.20462 << " Libras" << endl;
            break;

        case 4:
            cout << " km equivalen a: " << peso * 1e+9 << " Microgramos" << endl;
            break;

        case 5:
            cout << " km equivalen a: " << peso / 1e+9 << " Teragramos" << endl;
            break;

        default:
            cout << "No hay coincidencias" << endl;
        }
        break;

    }

    }

    }

    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
