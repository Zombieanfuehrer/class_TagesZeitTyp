#ifndef _TagesZeitTyp_
#define _TagesZeitTyp_

#include <iostream>

using namespace std;

class TagesZeitTyp
{
private:

    unsigned char std,min,sek;

public:

    TagesZeitTyp();
    TagesZeitTyp(const unsigned char STD);

    void print(void);
    void scan(void);
    bool is_ok(void);

    unsigned char get_std(void);
    unsigned char get_min(void);
    unsigned char get_sek(void);
   
};

#endif
