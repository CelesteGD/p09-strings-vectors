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
#include "scalar_product.h"

double productoEscalar(const std::vector<double> &v1, const std::vector<double> &v2) {
    // Verificar si los vectores tienen la misma longitud
    if (v1.size() != v2.size()) {
        std::cout << "Los vectores no tienen la misma longitud." << std::endl;
        return 0;
    }

    double producto = 0.0;

    // Calcular el producto escalar
    for (size_t i = 0; i < v1.size(); ++i) {
        producto += v1[i] * v2[i];
    }

    return producto;
}

void PrintProgramPurpose() {
  std::cout << "Este programa utiliza una función que toma como parámetros dos vectores de números reales y devuelve su producto escalar," << std::endl;
  std::cout << "calculado como el sumatorio del producto de sus elementos en igual posición" << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "Este programa ha sido ejecutado con el número incorrecto de parámetros" << std::endl << std::endl;
    std::cout << "Este programa se devería llamar: " << argv[0] << std::endl;
    return false;
  }
  return true;
}

