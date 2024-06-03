
#include "./h/AccionSemantica.h"

#include "./h/ParserJson.h"
#include "./h/AS6.h"



AS6::AS6(/* args */)
{
}

AS6::~AS6()
{
}

void AS6::ejecutarAccion(ParserJson &parser){
    string tupla = ' '+parser.getAmbito() + parser.getKey()+" = "+parser.getValor();
    parser.appendTuplaToResultado(tupla);
    
}
