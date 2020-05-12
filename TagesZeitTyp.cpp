#include "TagesZeitTyp.h"
#include <string>

//Konstruktordefinitionen
/*-----------------------------------------------------------------*/
//Default Konstruktor
TagesZeitTyp::TagesZeitTyp(void){

    this->std = 12;
    this->min = 0;
    this->sek = 0;
}
/*-----------------------------------------------------------------*/
//Konstruktor 1:
TagesZeitTyp::TagesZeitTyp(const unsigned char STD){

    this->std = STD;
    this->min = 0;
    this->sek = 0;
}
/*-----------------------------------------------------------------*/
//Methodendefinitionen
/*-----------------------------------------------------------------*/
    void TagesZeitTyp::print(void){

        cout<<"Es ist "<<(int)(this->std)<<":"<<(int)(this->min)<<":"<<(int)(this->sek)<<"Uhr"<<endl;
    }

    void TagesZeitTyp::scan(void){
        int iTemp = 0;

        cout<<"Stunde eingeben:";
        cin>>iTemp;
        this->std=(unsigned char)(iTemp%60);
        cout<<"Minute eingeben:";
        cin>>iTemp;
        this->min=(unsigned char)(iTemp);
        cout<<"Sekunde eingeben:";
        cin>>iTemp;
        this->sek=(unsigned char)(iTemp);
    }

    bool TagesZeitTyp::is_ok (void){
    
        if( ((int(this->std) <= 24) && (int(this->std) >= 0)) && 
            ((int(this->min) <= 60) && (int(this->min) >= 0)) &&
            ((int(this->sek) <= 60) && (int(this->sek) >= 0)) )
        {
            cout<<"wahr";
            return true;   
        }
        cout<<"falsch";   
        return false;
    }

    unsigned char TagesZeitTyp::get_std(void){return this->std;}
    unsigned char TagesZeitTyp::get_min(void){return this->min;}
    unsigned char TagesZeitTyp::get_sek(void){return this->sek;}
    
    


