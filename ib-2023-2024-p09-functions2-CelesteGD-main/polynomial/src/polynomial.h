/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @date 13 Nov 2023
 * @contact alu0101648361@ull.edu.es
 * @brief declaration of the functions we'll use
 */

#include <iostream>
#include <vector>

void PrintProgramPurpose();
bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber);
double calcularPolinomio(const std::vector<double> &coefficients, double value);
