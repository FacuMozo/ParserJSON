#ifndef MATRIZTRANSICION_H 
#define MATRIZTRANSICION_H
#include <string> 
#include "AccionSemantica.h"
#include "./AS0.h"
#include "./AS1.h"
#include "./AS2.h"
#include "./AS3.h"
#include "./AS4.h"
#include "./AS5.h"
#include "./AS6.h"
#include "./AS7.h"
#include "./ASMultiple.h"


using namespace std;


class MatrizTransicion
{
private:
    AS0 as0;
    AS1 as1;
    AS2 as2;
    AS3 as3;
    AS4 as4;
    AS5 as5;
    AS6 as6;
    AS7 as7;
    ASMultiple as6y7 = ASMultiple(&as6,&as7);

    //MATRIZ DE TRANSICIONES por cada estado(filas) y nuevo carates, la matriz nos permite saber cual es el proximo estado

    int err = 100;
    int matrizTransiciones[23][18] = {
        //  { 0     } 1     " 2     : 3     , 4     . 5     - 6     nr7     U-"8    t 9     r 10    u 11    e 12    f 13    a 14    l 15    s 16    Blank 
    /* 0 */ {   1,  err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    0},
    /* 1 */ {err,   err,    2,      err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    1},
    /* 2 */ {21,     21,    err,     21,     21,     21,     21,     21,     21,     21,     21,     21,     21,     21,     21,     21,     21,    err},
    /* 3 */ {err,   err,    err,    4,      err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    3},
    /* 4 */ {1,     err,    5,      err,    err,    err,    20,     7,      err,    10,     err,    err,    err,    14,     err,    err,    err,    4},
    /* 5 */ {5,     5,      6,      5,      5,      5,      5,      5,      5,      5,      5,      5,      5,      5,      5,      5,      5,      5},
    /* 6 */ {err,   19,     err,    err,    1,      err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    6},
    /* 7 */ {err,   19,     err,    err,    1,      8,      err,    7,      err,    err,    err,    err,    err,    err,    err,    err,    err,    22},
    /* 8 */ {err,   err,    err,    err,    err,    err,    err,    9,      err,    err,    err,    err,    err,    err,    err,    err,    err,    err},
    /* 9 */ {err,   19,     err,    err,    1,      err,    err,    9,      err,    err,    err,    err,    err,    err,    err,    err,    err,    22},
    /* 10*/ {err,   err,    err,    err,    err,    err,    err,    err,    err,    err,    11,     err,    err,    err,    err,    err,    err,    err},
    /* 11*/ {err,   err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    12,     err,    err,    err,    err,    err,    err},
    /* 12*/ {err,   err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    13,     err,    err,    err,    err,    err},
    /* 13*/ {err,   19,     err,    err,    1,      err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    13},
    /* 14*/ {err,   err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    15,     err,    err,    err},
    /* 15*/ {err,   err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    16,     err,    err},
    /* 16*/ {err,   err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    17,     err},
    /* 17*/ {err,   err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    18,     err,    err,    err,    err,    err},
    /* 18*/ {err,   19,     err,    err,    1,      err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    18},
    /* 19*/ {err,   19,     err,    err,    1,      err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    19},
    /* 20*/ {err,   err,    err,    err,    err,    err,    err,    7,      err,    err,    err,    err,    err,    err,    err,    err,    err,    err},
    /* 21*/ {21,     21,    3,      21,     21,     21,     21,     21,     21,     21,     21,     21,     21,     21,     21,     21,     21,     err},
    /* 22*/ {err,   19,     err,    err,    1,      err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    err,    22}
    };
    //MATRIZ DE ACCIONES SEMANTICAS asociadas a cada transicion

    AccionSemantica* matrizAcciones[23][18]= {
        //      { 0     } 1     " 2     : 3     , 4     . 5     - 6     nr7     U-"8    t 09    r 10    u 11    e 12    f 13    a 14    l 15    s 16
        /* 0 */ {&as0,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,   NULL,   NULL},
        /* 1 */ {NULL,	NULL,	&as1,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,   NULL},
        /* 2 */ {&as2,	&as2,   NULL,   &as2,	&as2,	&as2,	&as2,	&as2,	&as2,	&as2,	&as2,	&as2,	&as2,	&as2,	&as2,	&as2,	&as2,   NULL},
        /* 3 */ {NULL,	NULL,	NULL,	&as4,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,   NULL},
        /* 4 */ {&as3,	NULL,	NULL,	NULL,	NULL,   NULL,	&as5,	&as5,	NULL,	&as5,	NULL,	NULL,	NULL,	&as5,	NULL,	NULL,	NULL,   NULL},
        /* 5 */ {&as5,	&as5,	NULL,	&as5,	&as5,	&as5,	&as5,	&as5,	&as5,	&as5,	&as5,	&as5,	&as5,	&as5,	&as5,	&as5,	&as5,   &as5},
        /* 6 */ {NULL,	&as6y7,	NULL,   NULL,	&as6,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,   NULL},
        /* 7 */ {NULL,	&as6y7,	NULL,	NULL,	&as6,	&as5,	NULL,	&as5,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,   NULL},
        /* 8 */ {NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	&as5,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,   NULL},
        /* 9 */ {NULL,	&as6y7,	NULL,	NULL,	&as6,	NULL,	NULL,	&as5,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,   NULL},
        /* 10*/ {NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	&as5,   NULL,	NULL,	NULL,	NULL,	NULL,	NULL,   NULL},
        /* 11*/ {NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	&as5,	NULL,	NULL,	NULL,	NULL,	NULL,   NULL},
        /* 12*/ {NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	&as5,	NULL,	NULL,	NULL,	NULL,   NULL},
        /* 13*/ {NULL,	&as6y7,	NULL,	NULL,	&as6,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,   NULL},
        /* 14*/ {NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	&as5,	NULL,	NULL,   NULL},
        /* 15*/ {NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	&as5,	NULL,   NULL},
        /* 16*/ {NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	&as5,   NULL},
        /* 17*/ {NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	&as5,	NULL,	NULL,	NULL,	NULL,   NULL},
        /* 18*/ {NULL,	&as6y7,	NULL,	NULL,	&as6,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,   NULL},
        /* 19*/ {NULL,	&as7,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,   NULL,   NULL},
        /* 20*/ {NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	&as5,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,   NULL},
        /* 21*/ {&as2,	&as2,   NULL,   &as2,	&as2,	&as2,	&as2,	&as2,	&as2,	&as2,	&as2,	&as2,	&as2,	&as2,	&as2,	&as2,	&as2,   NULL},
        /* 22*/ {NULL,	&as6y7,	NULL,	NULL,	&as6,	NULL,	NULL,	&as5,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,   NULL}
        };                                                              //REVISAR

public:
    MatrizTransicion(/* args */);
    ~MatrizTransicion();
    int traducirCharNro(char c);
    int siguienteEstado(char c, int estadoActual);
    void ejecutarAccion(int i, char j, ParserJson &parser);
};

#endif // !MATRIZTRANSICION_H 