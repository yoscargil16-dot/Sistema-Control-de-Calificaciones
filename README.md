# Sistema de control de calificaciones

## Datos del estudiante
- Nombre completo: [Escribe tu nombre]
- Matrícula: [Escribe tu matrícula]
- Asignatura: Lógica de Programación
- Profesor: Gamalier Reyes del Carmen

## Descripción
Programa de consola en C++ para registrar cuatro calificaciones por estudiante, calcular el promedio individual, indicar si está aprobado o reprobado y presentar un resumen del grupo.

## Datos de entrada
- Cantidad de estudiantes (debe ser mayor que 0).
- Nombre de cada estudiante.
- Cuatro calificaciones por estudiante (cada una entre 0 y 100).
- Respuesta para procesar otro grupo: s o n.

## Proceso
1. Se valida la cantidad de estudiantes.
2. Se recorren los estudiantes y se solicitan sus nombres.
3. Se solicitan cuatro calificaciones y se valida que estén entre 0 y 100.
4. Se calcula el promedio individual y se determina si está aprobado (70 o más) o reprobado.
5. Se acumulan los promedios y se cuentan aprobados y reprobados.
6. Se identifica al estudiante con el promedio más alto.
7. Se muestra el resumen y se pregunta si se desea procesar otro grupo.

## Salida
- Promedio y estado de cada estudiante.
- Cantidad de aprobados y reprobados.
- Promedio general del grupo.
- Nombre y promedio del estudiante con el promedio más alto.

## Uso de los bucles
- **do-while para repetir grupos:** envuelve el procesamiento completo y permite repetirlo si la respuesta es `s` o `S`.
- **do-while para validar estudiantes:** solicita nuevamente la cantidad hasta que sea mayor que cero.
- **for para recorrer estudiantes:** ejecuta el registro una vez por cada estudiante.
- **for para recorrer calificaciones:** solicita exactamente cuatro notas por estudiante.
- **while para validar calificaciones:** vuelve a pedir una nota mientras sea menor que 0 o mayor que 100.

## Restricciones respetadas
El programa utiliza únicamente las bibliotecas `iostream`, `string` e `iomanip`. No utiliza arreglos, vectores, funciones definidas por el usuario, `goto`, `break` ni `continue`.

## Compilar y ejecutar
Con un compilador de C++ instalado, ejecuta:

```bash
g++ control_calificaciones.cpp -o control_calificaciones
./control_calificaciones
```

En Windows, después de compilar, ejecuta `control_calificaciones.exe`.

## Capturas de pantalla
Agrega aquí capturas reales del programa en ejecución. Se recomienda incluir:
1. Una prueba con estudiantes aprobados y reprobados.
2. Una prueba donde se ingrese una nota fuera del rango y el programa la vuelva a solicitar.
3. Una prueba donde se procese un segundo grupo.

No pegues imágenes de código como sustituto de las capturas de ejecución.
