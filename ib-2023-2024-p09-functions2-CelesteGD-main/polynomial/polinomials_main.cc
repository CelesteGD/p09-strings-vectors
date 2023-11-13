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
