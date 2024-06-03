#ifndef AS1_H
#define AS1_H

#include "./AccionSemantica.h"
#include "./ParserJson.h"

class AS1 : public AccionSemantica {
public:
    AS1();
    ~AS1();
    void ejecutarAccion(ParserJson &parser) ;
};

#endif // AS1_H
