#ifndef ACCIONSEMANTICA_H
#define ACCIONSEMANTICA_H

#include "./ParserJson.h"

class AccionSemantica {
public:
    AccionSemantica() {}
    ~AccionSemantica() {}
    virtual void ejecutarAccion(ParserJson &parser){ }; 
};


#endif // ACCIONSEMANTICA_H
