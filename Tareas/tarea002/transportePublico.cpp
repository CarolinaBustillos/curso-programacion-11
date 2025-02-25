#include <iostream>

int main() {
    int edad;
    int tipoBoleto;
    int precioBase = 100.0;
    int precioFinal;

    std::cout << "Ingresa tu edad: ";
    std::cin >> edad;

    // Pedir el tipo de boleto
    std::cout << "Elige el tipo de boleto (1) Normal, (2) Estudiante, (3) Senior: ";
    std::cin >> tipoBoleto;

    // Comprobamos si la edad es menor a 5 años
    if (edad < 5) {
        precioFinal = 0;
    } 
    // Si el boleto es Estudiante, se aplica el descuento del 50%
    else if (tipoBoleto == 2) {
        precioFinal = precioBase / 2;
    }
    // Si el boleto es Senior y la edad es mayor a 60, se aplica un descuento del 30%
    else if (tipoBoleto == 3) {
        if (edad > 60) {
            precioFinal = precioBase * 0.7;
        } else {
            precioFinal = precioBase;
        }
    }
    // Si el boleto es Normal, no hay descuento
    else {
        precioFinal = precioBase;
    }

    // Mostrar el precio final del boleto
    std::cout << "El precio final del boleto es: $" << precioFinal << std::endl;

    return 0;
}
