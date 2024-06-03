// AS6.h

#ifndef AS6_H
#define AS6_H

#include "./AccionSemantica.h"
#include "./ParserJson.h"

class AS6 : public AccionSemantica {
public:
    AS6();
    ~AS6();
    void ejecutarAccion(ParserJson &parser) ;
};

#endif // AS6_H
