/*  Szymon Lato  WCY19KX2S0
 *  ZAD.5   ORKIESTRA
 */

#include <iostream>
#include "Instrument.h"
#include "Werbel.h"
#include "Trabka.h"
#include "Fortepian.h"

void muzyk(Instrument &powierzonyInstruyment){
    powierzonyInstruyment.wydajDzwiek();
}


int main() {
    //Bazowa
    std::cout<<"BAZOWA"<<std::endl;
    Instrument ins;
    ins.wydajDzwiek();
    Instrument *ins1=new Instrument();
    ins1->wydajDzwiek();

    //werbel
    std::cout<<"WERBEL"<<std::endl;
    Werbel wer;
    wer.wydajDzwiek();
    Werbel *wer1=new Werbel();
    wer1->wydajDzwiek();

    //Trabka
    std::cout<<"TRABKA"<<std::endl;
    Trabka tra;
    tra.wydajDzwiek();
    Trabka *tra1=new Trabka();
    tra1->wydajDzwiek();

    //Fortepian
    std::cout<<"FORTEPIAN"<<std::endl;
    Fortepian fort;
    fort.wydajDzwiek();
    Fortepian *fort1=new Fortepian();
    fort1->wydajDzwiek();
std::cout<<"now muzyk"<<std::endl;
muzyk(ins);
muzyk(wer);
muzyk(tra);
muzyk(fort);

    return 0;
}
