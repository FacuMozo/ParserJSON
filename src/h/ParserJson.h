#ifndef PARSERJSON_H
#define PARSERJSON_H
#include <string>

using namespace std;


class ParserJson
{
private:
    string ambito="";
    string key;
    string valor;
    string resultado;
    char charActual;
    int contadorLLaves;
    

public:
    ParserJson(/* args */);
    ~ParserJson();
    string clavesAnidadasFromJSON(string texto);
    void descartarBlancos(char &c, int estado, int &iActual, string texto);


    //KEY
    string getKey();
    void setKey(string newValue);
    void appendCharToKey(char newChar);
    
    //Valor
    string getValor();
    void setValor(string newValue);
    void appendCharToValor(char newChar);

    //Ambito
    string getAmbito();
    void setAmbito(string newValue);
    char getChar();
    
    //Contador llaves
    void incrementarContador();
    void decrementarContador();
    void inciarContadorLLaves();

    void appendTuplaToResultado(string newTupla);
};


#endif // !PARSERJSON_H
