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

#include "capitalize_vowels.h"

std::string CapitalizeVowels(std::string palabra) {

  for (int i=0; i < palabra.length(); i++ ) {
    char c=palabra[i];
		if (std::isalpha(c)) {
			if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
				c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
	      c = std::toupper(c);
	  	} else {
	      c = std:: tolower(c);
	 		}
  	}
		palabra[i]=c;
	}
  return palabra;
}

void PrintProgramPurpose() {
  std::cout << "Este programa imprime las vocales en mayúscula y las consontantes en minúscula" << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters" << std::endl << std::endl;
    std::cout << "This program should be called" << argv[0] << std::endl;
    return false;
  }
  return true;
}
