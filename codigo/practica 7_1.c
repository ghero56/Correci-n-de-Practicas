// #include <stdio.h> [añadido]
// la linea anterior esta comentada ya que solamente se describen las [añadido]
// variables pero no se ingresan datos por parte del usuario ni [añadido]
// se manda informacion a la pantalla [añadido]

/*
* Este programa muestra la manera en la que se declaran y asignan variables
* de diferentes tipos: numéricas (enteras y reales) y caracteres.
*/

int main() {
	// Variables enteras
	short enteroNumero1 = 32768;
	signed int enteroNumero2 = 55;
	unsigned long enteroNumero3 = -789;
	// variables de caracter [agregado]
	char caracterA = 65; // Convierte el entero (ASCII) a carácter(caracter)[correcion]
	char caracterB = 'B';

	// Variables reales
	float puntoFlotanteNumero1 = 89.8;
	// La siguiente sentencia genera un error al compilar
	// porque los valores de tipo unsigned nunca llevan signo[añadido]
		// unsigned double puntoFlotanteNumero2 = -238.2236;
	double puntoFlotanteNumero2 = -238.2236;
	return 0;
}
