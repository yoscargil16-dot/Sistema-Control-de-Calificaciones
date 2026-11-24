#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    char repetir;

    // Este do-while permite procesar uno o varios grupos.
    do {
        int cantidadEstudiantes;

        // Este do-while valida que la cantidad de estudiantes sea mayor que cero.
        do {
            cout << "Cantidad de estudiantes: ";
            cin >> cantidadEstudiantes;

            if (cantidadEstudiantes <= 0) {
                cout << "Error: debe ingresar una cantidad mayor que 0.\n";
            }
        } while (cantidadEstudiantes <= 0);

        int aprobados = 0;
        int reprobados = 0;
        double sumaPromedios = 0.0;
        double mejorPromedio = -1.0;
        string nombreMejorEstudiante = "";

        // Este for recorre a todos los estudiantes del grupo.
        for (int estudiante = 1; estudiante <= cantidadEstudiantes; estudiante++) {
            string nombre;
            double sumaNotas = 0.0;
            double promedio;

            cout << "\n--- Estudiante " << estudiante << " ---\n";
            cout << "Nombre: ";
            cin >> ws;
            getline(cin, nombre);

            // Este for solicita las cuatro calificaciones de cada estudiante.
            for (int numeroNota = 1; numeroNota <= 4; numeroNota++) {
                double nota;

                cout << "Calificacion " << numeroNota << ": ";
                cin >> nota;

                // Este while repite la solicitud mientras la nota esté fuera de 0 a 100.
                while (nota < 0 || nota > 100) {
                    cout << "Nota invalida. Ingrese una calificacion entre 0 y 100: ";
                    cin >> nota;
                }

                sumaNotas = sumaNotas + nota;
            }

            promedio = sumaNotas / 4.0;
            sumaPromedios = sumaPromedios + promedio;

            if (promedio >= 70) {
                cout << fixed << setprecision(2);
                cout << "Promedio: " << promedio << " - Aprobado\n";
                aprobados++;
            } else {
                cout << fixed << setprecision(2);
                cout << "Promedio: " << promedio << " - Reprobado\n";
                reprobados++;
            }

            if (promedio > mejorPromedio) {
                mejorPromedio = promedio;
                nombreMejorEstudiante = nombre;
            }
        }

        double promedioGrupo = sumaPromedios / cantidadEstudiantes;

        cout << "\n===== RESUMEN =====\n";
        cout << "Aprobados: " << aprobados
             << " | Reprobados: " << reprobados << "\n";
        cout << fixed << setprecision(2);
        cout << "Promedio del grupo: " << promedioGrupo << "\n";
        cout << "Mejor promedio: " << nombreMejorEstudiante
             << " (" << mejorPromedio << ")\n";

        cout << "\nDesea procesar otro grupo? (s/n): ";
        cin >> repetir;

    } while (repetir == 's' || repetir == 'S');

    cout << "\nPrograma finalizado.\n";
    return 0;
}
