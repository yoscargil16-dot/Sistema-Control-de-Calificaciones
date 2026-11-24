#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    char repetir;
    do {
        int cantidadEstudiantes;
        do {
            cout << "Cantidad de estudiantes: ";
            cin >> cantidadEstudiantes;
            if (cantidadEstudiantes <= 0)
                cout << "Error: la cantidad debe ser mayor que 0. Intente de nuevo: ";
        } while (cantidadEstudiantes <= 0);

        int aprobados = 0, reprobados = 0;
        double sumaPromedios = 0.0, mejorPromedio = -1.0;
        string nombreMejorEstudiante = "";

        for (int estudiante = 1; estudiante <= cantidadEstudiantes; estudiante++) {
            string nombre;
            double sumaNotas = 0.0;
            cout << "\n--- Estudiante " << estudiante << " ---\nNombre: ";
            cin >> ws;
            getline(cin, nombre);

            for (int numeroNota = 1; numeroNota <= 4; numeroNota++) {
                double nota;
                cout << "Calificacion " << numeroNota << ": ";
                cin >> nota;
                while (nota < 0 || nota > 100) {
                    cout << "Error: la calificacion debe estar entre 0 y 100. Intente de nuevo: ";
                    cin >> nota;
                }
                sumaNotas += nota;
            }

            double promedio = sumaNotas / 4.0;
            sumaPromedios += promedio;
            cout << fixed << setprecision(2);
            if (promedio >= 70) {
                cout << "Promedio: " << promedio << " - Aprobado\n";
                aprobados++;
            } else {
                cout << "Promedio: " << promedio << " - Reprobado\n";
                reprobados++;
            }
            if (promedio > mejorPromedio) {
                mejorPromedio = promedio;
                nombreMejorEstudiante = nombre;
            }
        }

        cout << "\n===== RESUMEN =====\n";
        cout << "Aprobados: " << aprobados << " | Reprobados: " << reprobados << "\n";
        cout << fixed << setprecision(2);
        cout << "Promedio del grupo: " << sumaPromedios / cantidadEstudiantes << "\n";
        cout << "Mejor promedio: " << nombreMejorEstudiante << " (" << mejorPromedio << ")\n";
        cout << "\nDesea procesar otro grupo? (s/n): ";
        cin >> repetir;
    } while (repetir == 's' || repetir == 'S');

    cout << "\nPrograma finalizado.\n";
    return 0;
}