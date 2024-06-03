#include <iostream>
#include <string>
#include "./h/MatrizTransicion.h"

using namespace std;

MatrizTransicion::MatrizTransicion(/* args */) {
    // Constructor
}

MatrizTransicion::~MatrizTransicion() {
    // Destructor
}

int MatrizTransicion::siguienteEstado(char c, int estadoActual) {
    int columna = this->traducirCharNro(c);
    int rtn = matrizTransiciones[estadoActual][columna];
    // std::cout << "---  estado actual: " << estadoActual << " Char: > " << c << " < Nuevo estado: " << rtn << endl;
    
    return rtn;
}

void MatrizTransicion::ejecutarAccion(int i, char j, ParserJson &parser){
    int aux = traducirCharNro(j);
    // La transicion actual, puede no tener accion a realizar, se marca con NULL en la tabla de Acciones Semanticas
    if (matrizAcciones[i][aux] != nullptr)
    {
        matrizAcciones[i][aux]->ejecutarAccion(parser);
    }
        
    
    
};

// Nos permite traducir un char al valor de columna correspondiente de las matrices
int MatrizTransicion::traducirCharNro(char c) {
    if (('0' <= c) && (c <= '9'))
        return 7;
    switch (c) {
    case '\n':
    case ' ':
    case '\t':
        return 17;
    case '{':
        return 0;
    case '}':
        return 1;
    case '"':
        return 2;
    case ':':
        return 3;
    case ',':
        return 4;
    case '.':
        return 5;
    case '-':
        return 6;
    case 't':
        return 9;
    case 'r':
        return 10;
    case 'u':
        return 11;
    case 'e':
        return 12;
    case 'f':
        return 13;
    case 'a':
        return 14;
    case 'l':
        return 15;
    case 's':
        return 16;
    default:
        return 8;
    }
}
