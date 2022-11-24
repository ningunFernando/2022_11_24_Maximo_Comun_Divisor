// 2022_11_24_Maximo_Comun_Divisor.cpp
// Fernando Fabian Patino Ibarra
// Programa para encontrar el minimo comun divisor de dos numeros
//

#include <iostream>
int mcd(int num1, int num2) {
    if (num2 == 0) return num1;
    else mcd(num2, num1 % num2);
}

int main()
{
    int  num1, num2;
    std::cout << "Calculadora de MCD" << std::endl;
    std::cout << "NOTA: NO INGRESAR NUMEROS DECIMALES NI NEGATIVOS \n" << std::endl;

    do
    {
        std::cout << "INGRESA EL PRIMER NUMERO: " << std::endl;
        std::cin >> num1;
        if (num1 < 0) std::cout << " TE DIJE QUE TIENE QUE SER UN NUMERO ENTERO Y POSITIVO :/" << std::endl;
    } while (num1 < 0);

    do
    {
        std::cout << "INGRESA EL SEGUNDO  NUMERO" << std::endl;
        std::cin >> num2;
        if (num2 < 0) std::cout << " TE DIJE QUE TIENE QUE SER UN NUMERO ENTERO Y POSITIVO :/" << std::endl;
    } while (num2 < 0);

    if (num1 > num2) std::cout<<" EL MCD DE " << num1 << " Y " << num2<< " = " << mcd(num1, num2);
    else if (num2> num1) std::cout << " EL MCD DE " << num1 << " Y " << num2 << " = " << mcd(num2, num1);
}

