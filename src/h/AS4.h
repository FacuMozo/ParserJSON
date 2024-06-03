// AS4.h

#ifndef AS4_H
#define AS4_H

#include "./AccionSemantica.h"
#include "./ParserJson.h"

class AS4 : public AccionSemantica {
public:
    AS4();
    ~AS4();
    void ejecutarAccion(ParserJson &parser) ;
};

#endif // AS4_H
