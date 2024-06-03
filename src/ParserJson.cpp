#include <string>
#include <iostream>
#include "./h/ParserJson.h"
#include "./h/matrizTransicion.h"
#include <vector>

using namespace std;

ParserJson::ParserJson(/* args */)
{
    ambito="";
    contadorLLaves=1;
    resultado="";

}

ParserJson::~ParserJson()
{
}


string ParserJson::clavesAnidadasFromJSON( string texto )
{
    int cantidadChar = texto.length();
    MatrizTransicion matrizTrans = MatrizTransicion();
    int estadoActual = 0;
    int i =0;
    resultado="";
    for ( i ; i < cantidadChar; i++)
    {
        charActual = texto[i];

        matrizTrans.ejecutarAccion(estadoActual,charActual,*this);

        estadoActual = matrizTrans.siguienteEstado(charActual, estadoActual);
        //estado 19 y contadorLLaves < ,0 significa que se encontro la llave de cierre correspondiente al comien<o del JSON
        if (estadoActual == 19 && contadorLLaves == 0)
        {
            i++;
            break;
        }
        // si el estado acutal es 100 no se corresponde a una transicion exitente, automata no reconode la cadenaB
        if( estadoActual == 100){
            return "ERROR: JSON con formato valido | Resultado parcial, hasta error: "+resultado;
        }
    }
    if(i == cantidadChar && contadorLLaves == 0){
        std::cout << "EXITO: JSON con formato valido" << std::endl;
        return resultado;
    }else{
        return "ERROR: JSON con formato valido | Resultado parcial, hasta error: "+resultado;
    }
    
}


//GETTERS Y SETTERS
string ParserJson::getKey(){
    return this->key;
}
void ParserJson::setKey(string newValue){
    this->key = newValue;
}
void ParserJson::appendCharToKey(char newChar){
    this->key+=newChar;
}

string ParserJson::getValor(){
    return this->valor;
}
void ParserJson::setValor(string newValue){
    this->valor = newValue;
}
void ParserJson::appendCharToValor(char newChar){
    this->valor+=newChar;
}

string ParserJson::getAmbito(){
    return this->ambito;
}
void ParserJson::setAmbito(string newValue){
    this->ambito = newValue;
}
char ParserJson::getChar(){
    return this->charActual;
}

void ParserJson::incrementarContador(){
    contadorLLaves++;
};
void ParserJson::decrementarContador(){
    contadorLLaves--;
};

void ParserJson::inciarContadorLLaves(){
    contadorLLaves = 1;
}


void ParserJson::appendTuplaToResultado(string tupla ){

    resultado.append(tupla);

}