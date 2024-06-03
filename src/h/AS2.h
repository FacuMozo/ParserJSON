// AS2.h

#ifndef AS2_H
#define AS2_H

#include "./AccionSemantica.h"
#include "./ParserJson.h"

class AS2 : public AccionSemantica {
public:
    AS2();
    ~AS2();
    void ejecutarAccion(ParserJson &parser) ;
};

#endif // AS2_H
