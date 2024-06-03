// AS7.h

#ifndef AS7_H
#define AS7_H

#include "./AccionSemantica.h"
#include "./ParserJson.h"

class AS7 : public AccionSemantica {
public:
    AS7();
    ~AS7();
    void ejecutarAccion(ParserJson &parser) ;
};

#endif // AS7_H
