
#include "./h/AccionSemantica.h"
#include "./h/ParserJson.h"
#include "./h/AS5.h"



AS5::AS5(/* args */)
{
}

AS5::~AS5()
{
}

void AS5::ejecutarAccion(ParserJson &parser){
    parser.appendCharToValor(parser.getChar());

}
