/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @date 13 Nov 2023
 * @contact alu0101648361@ull.edu.es
 * @brief the main function in the code
 */

#include <iostream>
#include <cmath>

double calcularHipotenusa(double catetoA, double catetoB) {
    double hipotenusa = std::sqrt(catetoA * catetoA + catetoB * catetoB);
    return hipotenusa;
}
void PrintProgramPurpose() {
  std::cout << "Programa que incluye una función C++ que recibe como parámetros un vector de coeficientes reales y un valor real" << std::endl;
  std::cout << "y calcula el valor del polinomio correspondiente en el valor dado" << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "Este programa ha sido ejecutado con el número incorrecto de parámetros" << std::endl;
    std::cout << "Este programa se debería llamar: " << argv[0] << std::endl;
    return false;
  }
  return true;
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 345;
  }
  std::cout << "Todo está perfecto. Sigamos con la ejeccución normal..." << argc << std::endl;
  
  double cateto1, cateto2;
  std::cout << "Ingrese la longitud del primer cateto: ";
  std::cin >> cateto1;

  std::cout << "Ingrese la longitud del segundo cateto: ";
  std::cin >> cateto2;

  double resultado = calcularHipotenusa(cateto1, cateto2);

  std::cout << "La hipotenusa del triángulo rectángulo es: " << resultado << std::endl;

  return 0;
}
