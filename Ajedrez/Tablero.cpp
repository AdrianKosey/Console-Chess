#include <iostream>

#include "Tablero.h"
#include "Torre.h"
#include "Caballo.h"
#include "Alfil.h"
#include "Reina.h"
#include "Rey.h"
#include "Peon.h"

using namespace std;

// Codigos ANSI para asignar los colores a las casillas
#define RESET   "\033[0m"
#define BG_WHITE "\033[47m"
#define BG_BLACK "\033[100m"
#define FG_BLACK "\033[30m"
#define FG_WHITE "\033[97m"

Tablero::Tablero() {
	// Limpiamos todas las casillas
	for (int fila = 0; fila < 8; fila++) {
		for (int columna = 0; columna < 8; columna++) {
			tablero[fila][columna] = nullptr;
		}
	}

	// Ubicamos todas la piezas en el tablero
	// Lado blanco
	tablero[0][0] = new Torre(blanco);
	tablero[0][7] = new Torre(blanco);
	tablero[0][1] = new Caballo(blanco);
	tablero[0][6] = new Caballo(blanco);
	tablero[0][2] = new Alfil(blanco);
	tablero[0][5] = new Alfil(blanco);
	tablero[0][3] = new Reina(blanco);
	tablero[0][4] = new Rey(blanco);
	for (int x = 0; x < 8; x++) {
		tablero[1][x] = new Peon(blanco);
	}

	// Lado negro
	tablero[7][0] = new Torre(negro);
	tablero[7][7] = new Torre(negro);
	tablero[7][1] = new Caballo(negro);
	tablero[7][6] = new Caballo(negro);
	tablero[7][2] = new Alfil(negro);
	tablero[7][5] = new Alfil(negro);
	tablero[7][3] = new Reina(negro);
	tablero[7][4] = new Rey(negro);
	for (int x = 0; x < 8; x++) {
		tablero[6][x] = new Peon(negro);
	}
}

Tablero::~Tablero() {
	for (int fila = 0; fila < 8; ++fila) {
		for (int columna = 0; columna < 8; ++columna) {
			delete tablero[fila][columna];  // Libera la memoria de la pieza
			tablero[fila][columna] = nullptr;
		}
	}
}

void Tablero::moverPieza(int x, int y, int destX, int destY) {
	// Validar que haya una pieza
	if (tablero[x][y] != nullptr) {
		if (tablero[x][y]->validarMovimiento(destX, destY)) {

		}
	}
}

void Tablero::imprimirTablero() {
	cout << "    a   b   c   d   e   f   g   h" << endl;
	cout << "  +---+---+---+---+---+---+---+---+" << endl;
	for (int fila = 7; fila >= 0; fila--) {
		cout << fila + 1 << " ";  // Etiqueta de fila al inicio

		for (int col = 0; col < 8; col++) {
			bool casillaNegra = (fila + col) % 2; // Alterna el color de la casilla ej (7+7)%2 es negra pero (6+7)%2 es blanca
			string fondo = casillaNegra ? BG_BLACK : BG_WHITE;
			cout << "|";

			if (tablero[fila][col] != nullptr) {
				char simbolo = tablero[fila][col]->getTipo();
				if (casillaNegra)
				{
					cout << BG_BLACK << FG_WHITE << " " << simbolo << " " << RESET;
				}
				else {
					cout << BG_WHITE << FG_BLACK << " " << simbolo << " " << RESET;
				}
			}
			else {
				cout << fondo << "   " << RESET; // Casilla vacia
			}
		}
		cout << "| " << fila + 1 << endl; // Imprime la etiqueta de la fila al final
		cout << "  +---+---+---+---+---+---+---+---+" << endl;
	}
	cout << "    a   b   c   d   e   f   g   h" << endl;
}