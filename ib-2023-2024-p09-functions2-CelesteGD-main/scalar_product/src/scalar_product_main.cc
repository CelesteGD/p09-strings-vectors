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
#include "scalar_product.h"

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 345;
  }
  std::cout << "Todo está perfecto. Sigamos con la ejeccución normal..." << argc << std::endl;
  int longitud{0};
  std::cout << "Ingrese la longitud de los vectores: ";
  std::cin >> longitud;
  std::vector<double> vector1(longitud);
  std::vector<double> vector2(longitud);

  std::cout << "Ingrese los elementos del primer vector: ";
  for (int i = 0; i < longitud; ++i) {
      std::cin >> vector1[i];
  }

  std::cout << "Ingrese los elementos del segundo vector: ";
  for (int i = 0; i < longitud; ++i) {
      std::cin >> vector2[i];
  }

  double resultado = productoEscalar(vector1, vector2);
   if (resultado != 0) {
      std::cout << "El producto escalar es: " << resultado << std::endl;
  }

  return 0;
}

