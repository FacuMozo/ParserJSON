
#include "./h/AccionSemantica.h"

#include "./h/ParserJson.h"
#include "./h/ASMultiple.h"



ASMultiple::ASMultiple(AccionSemantica* _accion1, AccionSemantica* _accion2){
    accion1=_accion1;
    accion2=_accion2;
}

ASMultiple::~ASMultiple()
{
}

void ASMultiple::ejecutarAccion(ParserJson &parser){

    accion1->ejecutarAccion(parser);
    accion2->ejecutarAccion(parser);
}
