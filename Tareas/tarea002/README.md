# Tarea 002 en C++

## Sistema de transporte público cobra tarifas según la edad del pasajero y el tipo de boleto que elija.

### Descripción
El programa solicita la edad del pasajero y elige entre tres tipos de boletos:
1. **Normal**: Precio base de $100.
2. **Estudiante**: Descuento del 50% sobre el precio base.
3. **Senior**: Descuento del 30% para personas mayores de 60 años.

Además, el programa tiene las siguientes condiciones:
- Si el pasajero tiene menos de 5 años, el boleto es **gratis**.
- Si el pasajero elige el boleto "Estudiante", se aplica el descuento del 50% sin importar la edad.
- Si el pasajero elige el boleto "Senior" y tiene más de 60 años, se aplica un descuento del 30%.
- Si el pasajero elige el boleto "Normal", no se aplica ningún descuento.

El precio final del boleto es calculado y mostrado en pantalla.


### Ejecucion
Se agrega el comando "g++ -o transportePublico.exe transportePublico.cpp" en la terminal para ejecutar el programa.