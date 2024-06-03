
#include "./h/AccionSemantica.h"
#include "./h/ParserJson.h"
#include "./h/AS0.h"



AS0::AS0(/* args */)
{
}

AS0::~AS0()
{
}

void AS0::ejecutarAccion(ParserJson &parser){
    parser.inciarContadorLLaves();
}
