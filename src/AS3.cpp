
#include "./h/AccionSemantica.h"
#include "./h/ParserJson.h"

using namespace std;
#include "./h/AS3.h"

AS3::AS3(/* args */)
{
}

AS3::~AS3()
{
}

void AS3::ejecutarAccion(ParserJson &parser){
    string newAmbito = parser.getAmbito()+ parser.getKey()+'.' ;
    parser.setAmbito(newAmbito);
    parser.incrementarContador();
}
