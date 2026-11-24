# Sistema de control de calificaciones

## Datos del estudiante
- Nombre completo: Hector Yoscarli Mota Gil
- Matrícula: 2025-2443
- Asignatura: Lógica de Programación
- Profesor: Gamalier Reyes del Carmen

## Descripción
Programa de consola en C++ para registrar cuatro calificaciones por estudiante, calcular el promedio individual, indicar si está aprobado o reprobado y presentar un resumen del grupo.

## Datos de entrada
Cantidad de estudiantes, nombre de cada estudiante, cuatro calificaciones entre 0 y 100 y respuesta (s/n) para procesar otro grupo.

## Proceso y salida
El programa valida los datos, calcula promedios, cuenta aprobados y reprobados, calcula el promedio general e identifica al estudiante con el promedio más alto.

## Uso de los bucles
- `do-while`: repetir el procesamiento de grupos y validar que la cantidad de estudiantes sea mayor que cero.
- `for`: recorrer los estudiantes y las cuatro calificaciones de cada estudiante.
- `while`: repetir la solicitud de una calificación fuera del rango de 0 a 100.

## Capturas de ejecución
- `captura_prueba_1_validacion.png`: validación de la cantidad y de las calificaciones.
- `captura_prueba_2_multiples_grupos.png`: procesamiento de varios grupos.

## Restricciones
Solo se utilizan `iostream`, `string` e `iomanip`. No se utilizan arreglos, vectores, funciones propias, `goto`, `break` ni `continue`.

## Compilar
`g++ control_calificaciones.cpp -o control_calificaciones`
