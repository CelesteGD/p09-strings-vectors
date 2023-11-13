/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @date 13 Nov 2023
 * @contact alu0101648361@ull.edu.es
 * @brief
 */

#include "aproximate-roots.h"

double calcularRaizCuadradai(double number) {
    if (number < 0) {
        std::cerr << "El número debe ser mayor que cero." << std::endl;
        return 0;
    }

    double root = 1.0;
    double delta = 1.0;

    while (std::abs(root * root - number) > EPSILON) {
        if (delta > 0) {
            while (root * root < number) {
                root += delta;
            }
        } else {
            while (root * root > number) {
                root += delta;
            }
        }
        delta *= -0.5;
    }

    return root;
}


void PrintProgramPurpose() {
  std::cout << "Este programa calcula la raiz cuadrada con el error basado en un número pequeño" << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "Este programa ha sido ejecutado con el número incorrecto de parámetros" << std::endl;
    std::cout << "Este programa se debería llamar: " << argv[0] << std::endl;
    return false;
  }
  return true;
}

