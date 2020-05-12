#include "TagesZeitTyp.cpp"
#include <windows.h>

int main (void) {

    char eingabe;
    TagesZeitTyp *Silber,*tablett;
    double temp;

    cout<<"1 oder 2?"<<endl;
    cin >> eingabe;

    switch(eingabe)
    {
        case '1':
                Silber = new TagesZeitTyp;
                Silber->print();
                cout<<"Bitte Uhrzeit eingeben:"<<endl;
                do
                {
                   Silber->scan();
                   if (!(Silber->is_ok()))
                    {
                        cout<<"Eingabe ungueltig!"<<endl;
                    }
                } while (!(Silber->is_ok()));
                cout<<"Es ist"<<int(Silber->get_std())<<":"<<int(Silber->get_min())<<":"<<int(Silber->get_sek())<<endl;
                Sleep(3000);
                break;
        case '2':
                tablett = new TagesZeitTyp((unsigned char)(19));
                tablett->print();
                cout<<"Bitte Uhrzeit eingeben:"<<endl;
                do
                {
                   tablett->scan();
                   if (!(tablett->is_ok()))
                    {
                        cout<<"Eingabe ungueltig!"<<endl;
                    }
                } while (!(tablett->is_ok()));
                cout<<"Es ist"<<int(tablett->get_std())<<":"<<int(tablett->get_min())<<":"<<int(tablett->get_sek())<<endl;
                Sleep(3000);
                break;
        default :
                cout<<"Eingabe fehlerhaft!"<<endl;
                Sleep(2000);
    }
}
