
#include "./h/AccionSemantica.h"

#include "./h/ParserJson.h"
#include "./h/AS7.h"



AS7::AS7(/* args */)
{
}

AS7::~AS7()
{
}

void AS7::ejecutarAccion(ParserJson &parser){
    parser.decrementarContador();
    string newAmbito = parser.getAmbito();
    if(newAmbito.size() > 0){
        int limite = newAmbito.find_last_of('.',newAmbito.size() - 2);
        if (limite == -1)
        {
            parser.setAmbito("");
            return;
        }else{
            newAmbito = newAmbito.substr(0 , limite+1);
        }
    }
    parser.setAmbito(newAmbito);


}
