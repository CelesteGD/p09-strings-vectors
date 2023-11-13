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
#include <vector>
#include "polynomial.cc"
#include "polynomial.h"

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 345;
  }
  std::cout << "Todo está perfecto. Sigamos con la ejeccución normal..." << argc << std::endl;
    int grado;
    std::cout << "Ingrese el grado del polinomio: ";
    std::cin >> grado;

    std::vector<double> coeficientes;
    for (int i = 1; i <= grado; ++i) {
        double coeficiente;
        std::cout << "Ingrese el coeficiente para x^" << i << ": ";
        std::cin >> coeficiente;
        coeficientes.push_back(coeficiente);
    }

    double valor;
    std::cout << "Ingrese el valor en el que desea evaluar el polinomio: ";
    std::cin >> valor;

    double resultado = calcularPolinomio(coeficientes, valor);
    std::cout << "El resultado del polinomio en " << valor << " es: " << resultado << std::endl;

    return 0;
}
