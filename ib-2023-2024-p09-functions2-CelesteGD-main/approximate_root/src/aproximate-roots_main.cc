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


#include "aproximate-roots.h"

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 345;
  }
  std::cout << "Todo está perfecto. Sigamos con la ejeccución normal..." << argc << std::endl;
  double numero;
  std::cout << "Ingrese un número para calcular su raíz cuadrada: ";
  std::cin >> numero;

  double resultado = calcularRaizCuadradai(numero);

  if (resultado >= 0) {
      std::cout << "La raíz cuadrada de " << numero << " con un margen de error de ±EPSILON (1e-4) es: " << resultado << std::endl;
  }

  return 0;
}
