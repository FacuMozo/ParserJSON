#ifndef AS0_H
#define AS0_H

#include "./AccionSemantica.h"
#include "./ParserJson.h"

class AS0 : public AccionSemantica {
public:
    AS0();
    ~AS0();
    void ejecutarAccion(ParserJson &parser) ;
};

#endif // AS0_H
