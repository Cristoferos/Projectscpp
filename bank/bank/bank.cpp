#include <iostream>
#include <locale.h>
#include <windows.h>
#include <string>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::this_thread;     
using namespace std::chrono_literals;
using std::chrono::system_clock;

void login();
void logout();
void potwierdzenie();
void potwierdzenie2();

int main()
{
    int wybor1;
    string nrkonta;
    int wybor2;
    int stankonta1;
    int iloscSrodkow;
    int innakwota;
    int iloscSrodkow2;
    int innakwota2;

    setlocale(LC_CTYPE, "Polish");
    cout << "<======Witamy w bankomacie nr. 25======>\n";
    cout << "<===W czym możemy pomóc===>\n";
    cout << "* 1 Wypłacam środki 1 *\n";
    cout << "* 2 Wpłacam środki 2 *\n";
    cout << "* 3 Sprawdzam stan konta 3 *\n";
    cin >> (wybor1);
    
    switch (wybor1) {
    case 1:
        login();
        cout << "^^^Ile środków chcesz wypłacić?^^^\n";
        cout << "1   ^50 zł^\n";
        cout << "2   ^100 zł^\n";
        cout << "3   ^200 zł^\n";
        cout << "4   ^500 zł^\n";
        cout << "5   ^1000 zł^\n";
        cout << "6   ^Inna kwota^\n";
        cin >> (iloscSrodkow);
        switch (iloscSrodkow) {
            
        case 1:
            cout << "Wypłać 50 złotych\n";
            potwierdzenie();
            break;
        case 2:
            cout << "Wypłać 100 złotych\n";
            potwierdzenie();
            break;
        case 3:
            cout << "Wypłać 200 złotych\n";
            potwierdzenie();
            break;
        case 4:
            cout << "Wypłać 500 złotych\n";
            potwierdzenie();
            break;
        case 5:
            cout << "Wypłać 1000 złotych\n";
            potwierdzenie();
            break;
        case 6:
            cout << "Jaką kwotę chcesz wypłacić?\n";
            cin >> (innakwota);
            cout << "Wypłać " <<innakwota<< " złotych";
            potwierdzenie();
            break;
        }


        break;
    case 2:
        login();
        cout << "^^^Ile środków chcesz wpłacić?^^^\n";
        cout << "1   ^50 zł^\n";
        cout << "2   ^100 zł^\n";
        cout << "3   ^200 zł^\n";
        cout << "4   ^500 zł^\n";
        cout << "5   ^1000 zł^\n";
        cout << "6   ^Inna kwota^\n";
        cin >> (iloscSrodkow2);
        switch (iloscSrodkow2) {

        case 1:
            cout << "Wpłać 50 złotych\n";
            potwierdzenie2();
            break;
        case 2:
            cout << "Wpłać 100 złotych\n";
            potwierdzenie2();
            break;
        case 3:
            cout << "Wpłać 200 złotych\n";
            potwierdzenie2();
            break;
        case 4:
            cout << "Wpłać 500 złotych\n";
            potwierdzenie2();
            break;
        case 5:
            cout << "Wpłać 1000 złotych\n";
            potwierdzenie2();
            break;
        case 6:
            cout << "Jaką kwotę chcesz wpłacić?\n";
            cin >> (innakwota2);
            cout << "Wpłać " << innakwota2 << " złotych\n";
            potwierdzenie2();
            break;
        }
        break;
    case 3: 
        login();
        
        cout << "Proszę czekać...\n\n";
        sleep_for(4s);
        cout << "!STAN KONTA!\n ";          
        cout << "754,56 zł";

        cout << "\n Aby powrócić do wyboru działań na koncie wpisz 1, aby wylogować się wpisz 2 ";
        cin >> (wybor2);
        switch (wybor2) 
        {
        
        case 1:
            main();
            break;
        case 2:
            logout();
            break;
        }
    }
}
void login()
{
    int nrkonta;
    int PIN;
    int kod;
    kod = 1234;
    cout << "#---LOGIN---#\n";
    cout << "#-Podaj numer konta-#\n";
    cin >> (nrkonta);
    cout << "#-Podaj PIN-#\n";
    cin >> (PIN);
    if (nrkonta == 12345)
    {
        cout << "Numer konta jest poprawny.\n";
    }
    else {
        cout << "Numer konta jest niepoprawny\n";
        login();
    }
}
void logout()
{

    cout << "Proszę czekać...\n\n";
        sleep_for(2.5s);
    cout << "Pomyślnie wylogowano się z systemu banku dziękujemy.\n\n\n\n\n\n\n";
}

void potwierdzenie() 
{
    int dezycjaPotwierdzenia;
    cout << "Czy chcesz wypłacić wybraną kwotę?\n";
    cout << "1 = tak \n";
    cout << "2 - nie\n";
    cin >> (dezycjaPotwierdzenia);
    
    switch (dezycjaPotwierdzenia) 
    {
    case 1:
        cout << "Trwa wypłacanie...\n";
        sleep_for(4s);
        cout << "Pomyślnie wypłacono środki\n";
        break;
     case 2:
        cout << "anulowano!\n";
    }
}
void potwierdzenie2()
{
    int dezycjaPotwierdzenia2;
    cout << "Czy chcesz wypłacić wybraną kwotę?\n";
    cout << "1 = tak \n";
    cout << "2 - nie\n";
    cin >> (dezycjaPotwierdzenia2);

    switch (dezycjaPotwierdzenia2)
    {
    case 1:
        cout << "Proszę wprowadzić środki\n";
        sleep_for(4s);
        cout << "Pomyślnie wpłacono środki\n";
        break;
    case 2:
        cout << "anulowano!\n";
    }
}