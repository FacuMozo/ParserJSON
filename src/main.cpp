#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

#include "./h/ParserJson.h"
using namespace std;



int main()
{
    // Nombre del archivo de entrada y salida
    string inputFileName = "input.txt";
    string outputFileName = "output.txt";
    ParserJson parser;

    
    ifstream inputFile(inputFileName);
    // Verifica si el archivo se abrió correctamente
    if (!inputFile.is_open()) {
        cerr << "Error al abrir el archivo de entrada: " << inputFileName << endl;
        return 1;
    }
    // Crea un stringstream para el texto
    stringstream buffer;
    buffer << inputFile.rdbuf();
    // Almacena todo el contenido en un solo string
    string fileContent = buffer.str();

    // Cerrar el archivo de entrada
    inputFile.close();

    // Crea flujo de salida
    ofstream outputFile(outputFileName);
    // Verifica que el archivo se abrió correctamente
    if (!outputFile.is_open()) {
        cerr << "Error al abrir el archivo de salida: " << outputFileName << endl;
        return 1;
    }

    fileContent = parser.clavesAnidadasFromJSON(fileContent);


    // Escribe el contenido del string en el archivo de salida
    outputFile << fileContent;

    // Cier el archivo de salida
    outputFile.close();


    //CASOS DE PRUEBA todos juntos por consola, hay que descomentar y buildear
    // string cadena, cadena1, cadena2, cadena3,cadena4;
    // char caracter;
    

    // cadena = "{    \n  \"a\":2 , \"b\" : { \"c\" :{ \"d\":\"hola\" }}, \"c\":true }";
    // cadena1 = "  {    \n  \"a\":2, \"a2\":2.2 , \"b\" : { \"c\" :{ \"d\":\"hola\" }}, \"c\":true }";
    // // falta el :
    // cadena2 = "{\"a\"2, \"b\" : { \"b1\" : \"hola\" }, \"c\":true }";
    // // tiene un { } de mas
    // cadena3 = "{ \"a\":2, \"b\" : { \"b1\" : \"hola\" }, \"c\":true },{ \"a\":2 }";
    // //  falta el {
    // cadena4 = "{ \"a\":2}, \"a\":2 ";
    // //  falta el }
    // string cadena5 = "{ \"a\":2, \"b\" : { \"b1\" : \"hola\" }, \"c\":true";
    // //  tru en vez de true
    // string cadena6 = "{ \"a:\"2, \"b\" : { \"b1\" : \"hola\" }, \"c\":tru} ";
    // // = en vez de :
    // string cadena7 = "{ \"a\"=2, \"b\" : { \"b1\" : \"hola\" }, \"c\"=true} ";



    
    // string resultado;
    /* 
    cout <<"Cadena 0: "<<cadena<<endl;
    resultado = parser.clavesAnidadasFromJSON(cadena);
    cout <<"RESULTADO 0: "<<resultado<<endl;
    cout <<endl;

    cout <<"Cadena 1: "<<cadena1<<endl;
    resultado = parser.clavesAnidadasFromJSON(cadena1);
    cout <<"RESULTADO 1: "<<resultado<<endl;
    cout <<endl;

    cout <<"Cadena 2: "<<cadena2<<endl;
    resultado = parser.clavesAnidadasFromJSON(cadena2);
    cout <<"RESULTADO 2: "<<resultado<<endl;
    cout <<endl;

    cout <<"Cadena 3: "<<cadena3<<endl;
    resultado = parser.clavesAnidadasFromJSON(cadena3);
    cout <<"RESULTADO 3: "<<resultado<<endl;
    cout <<endl;

    cout <<"Cadena 4: "<<cadena4<<endl;
    resultado = parser.clavesAnidadasFromJSON(cadena4);
    cout <<"RESULTADO 4: "<<resultado<<endl;
    cout <<endl;

    cout <<"Cadena 5: "<<cadena5<<endl;
    resultado = parser.clavesAnidadasFromJSON(cadena5);
    cout <<"RESULTADO 5: "<<resultado<<endl;
    cout <<endl;

    cout <<"Cadena 6: "<<cadena6<<endl;
    resultado = parser.clavesAnidadasFromJSON(cadena6);
    cout <<"RESULTADO 6: "<<resultado<<endl;
    cout <<endl;
 
    cout <<"Cadena 7: "<<cadena7<<endl;
    resultado = parser.clavesAnidadasFromJSON(cadena7);
    cout <<"RESULTADO 7: "<<resultado<<endl;*/

    
}

