/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @date 13 Nov 2023
 * @contact alu0101648361@ull.edu.es
 * @brief functions that we will use in our main
 */

#include <iostream>
#include <vector>
#include "polynomial.h"

double calcularPolinomio(const std::vector<double> &coefficients, double value) {
    double resultado = 0.0;

    for (size_t i = 0; i < coefficients.size(); ++i) {
        resultado = resultado * value + coefficients[i];
    }

    return resultado;
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


