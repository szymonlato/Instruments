/*  Szymon Lato  WCY19KX2S0
 *  ZAD.5   ORKIESTRA
 */

#ifndef UNTITLED5_WERBEL_H
#define UNTITLED5_WERBEL_H
#include <string>
#include "Instrument.h"



class Werbel :public Instrument {
    std::string dzwiek = "brbrbrbrb";
public:
    void wydajDzwiek();
};

#endif //UNTITLED5_WERBEL_H
