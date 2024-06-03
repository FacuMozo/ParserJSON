// AS5.h

#ifndef AS5_H
#define AS5_H

#include "./AccionSemantica.h"
#include "./ParserJson.h"

class AS5 : public AccionSemantica {
public:
    AS5();
    ~AS5();
    void ejecutarAccion(ParserJson &parser) ;
};

#endif // AS5_H
