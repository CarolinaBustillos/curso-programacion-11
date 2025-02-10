#include <iostream>

int main(){
    int numero1;
    std::cout <<"Ingrese un primer valor numerico: ";
    std::cin >> numero1;

    int numero2;
    std::cout <<"Ingrese un segundo valor numerico: ";
    std::cin >> numero2;

    int sum = numero1 + numero2;
    int producto = numero1 * numero2;
    
    std::cout <<sum <<" Es el resultado de " <<numero1 << " + " << numero2 << std::endl;
    std::cout << std::endl <<producto <<" Es el resultado de " <<numero1 << " * " << numero2;

    return 0;
}