# Practica-de-funciones-vectores-y-matrices

1- Realizar una función llamada pedirNumeroPositivo.
La función debe solicitar al usuario un número, asegurarse de que dicho número sea estrictamente positivo (mayor que cero) y devolverlo. En caso de que el usuario ingrese un valor inválido, la función debe volver a solicitarlo hasta que sea correcto.


2- Realizar una función llamada pedirNumeroEntre que reciba dos parámetros: inicio y fin.
La función debe solicitar un número entero al usuario y asegurarse de que se encuentre dentro del rango [inicio, fin].
El parámetro fin debe ser opcional: si no se especifica, el rango debe considerarse desde inicio hasta el valor máximo que pueda tomar una variable entera (INT_MAX).
En caso de ingreso inválido, la función debe volver a solicitar el número.


3- Extender la funcionalidad de pedirNumeroEntre para que también pueda aceptar números decimales (tipo float), manteniendo la validación de rango.
El comportamiento respecto al parámetro opcional fin debe mantenerse igual.


4- Realizar una función que reciba una matriz de dimensiones 30×12 con valores numéricos.
La función debe mostrar, para cada fila, la suma de todos los valores de sus columnas.
Se debe especificar claramente en la salida qué fila se está mostrando y cuál es su suma.


5- Registro de asistencias en una empresa
 Una empresa lleva un registro de asistencia de sus 30 empleados.
 Cada vez que un empleado asiste al trabajo, se registra:
Número de empleado (valor entre 100 y 129).
Mes (1 a 12).
Día (1 a 31).
Horas trabajadas en el día.
Los registros finalizan cuando se ingresa un número de empleado igual a 0.
Al finalizar la carga, se debe calcular y mostrar:
El total de horas trabajadas en el mes de abril entre todos los empleados.
Para cada mes del año, la cantidad de días en los que al menos un empleado estuvo presente.
Para cada empleado, su número de empleado y la cantidad total de meses en los que trabajó.
