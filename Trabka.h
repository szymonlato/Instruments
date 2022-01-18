/*  Szymon Lato  WCY19KX2S0
 *  ZAD.5   ORKIESTRA
 */


#ifndef UNTITLED5_TRABKA_H
#define UNTITLED5_TRABKA_H
#include "Instrument.h"
#include <string>


class Trabka : public Instrument{
    std::string dzwiek = "tururururu";
public:
    void wydajDzwiek();
};


#endif //UNTITLED5_TRABKA_H
