
#include "./h/AccionSemantica.h"
#include "./h/ParserJson.h"
#include "./h/AS2.h"



AS2::AS2(/* args */)
{
}

AS2::~AS2()
{
}

void AS2::ejecutarAccion(ParserJson &parser){
    parser.appendCharToKey(parser.getChar());

}
