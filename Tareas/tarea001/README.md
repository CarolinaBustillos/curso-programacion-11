# Tarea 001 en C++


## Hello World

### Descripción
Este es un simple programa en C++ que imprime "Hello World" en la consola. Este código es un ejemplo básico para comenzar a trabajar con C++ y entender cómo funciona la salida en la consola.

### Código
A continuación se presenta una descripción del funcionamiento del código:
#include <iostream> Incluye la biblioteca iostream, que se utiliza para la entrada y salida (input/output)
int main(): Función principal de C++, es el punto de entrada del programa.
std::cout: Es el objeto utilizado para imprimir en la consola. std::cout es parte de la biblioteca estándar iostream y se usa para la salida de datos.
"Hello World": Texto que se imprimirá.
std::endl: Salto de línea al final de la salida. Es equivalente a usar \n.
return 0;: Indica que el programa terminó correctamente.

### Ejecucion
Se agrega el comando "g++ -o hello_world.exe hello_world.cpp" en la terminal para ejecutar el programa.


## Operaciones

### Descripción
Este programa en C++ solicita dos números al usuario e imprime el resultado de su suma y su producto. Es un ejemplo simple para entender cómo interactuar con la entrada y salida del programa en C++.

### Código
A continuación se presenta una descripción del funcionamiento del código:
#include <iostream> Incluye la biblioteca iostream, que se utiliza para la entrada y salida (input/output)
int numero1 y int numero2: Declara dos variables enteras (numero1 y numero2) que se usarán para almacenar los números ingresados por el usuario.
std::cout <<"Ingrese un primer valor numerico: ";: Mensaje pidiendo al usuario que ingrese el primer valor numérico.
std::cin >> numero1;: Lee el valor ingresado por el usuario y lo almacena en la variable numero1.
std::cout <<"Ingrese un segundo valor numerico: ";: Mensaje pidiendo el segundo valor numérico.
std::cin >> numero2;: Lee el segundo valor ingresado por el usuario y lo almacena en la variable numero2.
int sum = numero1 + numero2;: Calcula la suma de los dos números y la guarda en la variable sum.
int producto = numero1 * numero2;: Calcula el producto de los dos números y lo guarda en la variable producto.
std::cout << sum << " Es el resultado de " << numero1 << " + " << numero2 << std::endl;: Resultado de la suma.
std::cout << std::endl << producto << " Es el resultado de " << numero1 << " * " << numero2;: Resultado del producto en la consola, también con una explicación.
return 0;: Indica que el programa terminó correctamente.

### Ejecucion
Se agrega el comando "g++ -o operaciones.exe operaciones.cpp" en la terminal para ejecutar el programa.