// AS3.h

#ifndef AS3_H
#define AS3_H

#include "./AccionSemantica.h"
#include "./ParserJson.h"

class AS3 : public AccionSemantica {
public:
    AS3();
    ~AS3();
    void ejecutarAccion(ParserJson &parser) ;
};

#endif // AS3_H
