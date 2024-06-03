// ASMultiple.h

#ifndef ASMultiple_H
#define ASMultiple_H

#include "./AccionSemantica.h"
#include "./ParserJson.h"

class ASMultiple : public AccionSemantica {
private:
    AccionSemantica* accion1;
    AccionSemantica* accion2;

public:
    ASMultiple(AccionSemantica* _accion1, AccionSemantica* _accion2);
    ~ASMultiple();
    void ejecutarAccion(ParserJson &parser) ;
};

#endif // ASMultiple_H
