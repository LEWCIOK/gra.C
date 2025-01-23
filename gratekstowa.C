#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

int losowanie()
{
    return (rand() % 6) + 1;
}
void printcenter(const char* text) {
int width = 400;
int len = strlen(text);
int padding = 20;

for (int i = 0; i< padding; i=i+1) 
{
    printf(" ");
}
for (int i = 0; i < len; i=i+1)
{
    printf("%c", text[i]);          // %c to wyznaczenie konkretnej literki
    if(text[i]=='\n')
        {
    for (int i = 0; i< padding; i=i+1) 
    {
        printf(" ");
    }   
        }
if(_kbhit() != 1){          // czy przycisk jest wcisniety jezeli tak to zwraca 1 
Sleep(50); }


}

printf("\n");
while(1){
    char c;
    c = getchar();
    if(c == '\n'){
    system("cls");
        break;
    }
}
}

void pierwszywybor();

int main() {
    srand(time(0));
         printcenter("Witaj w grze\n/Naciskaj enter aby kontynuowac lub space aby pomijac tekst/\n");
printcenter("Krolestwo Westeros od lat drzy pod rzadami Krola Bowsera, bezlitosnego tyrana, ktory wlada z zelazna reka.\nArs, mlody szlachcic, widzial, jak jego ziemie zostaly zabrane przez tego okrutnego wladce po smierci jego ojca.\nPelen gniewu i pragnienia zemsty, postanawia obalic Bowsera i przywrocic wolnosc swojemu ludowi.\nTwoja podroz wlasnie sie zaczyna, a od wyborow, ktore podejmiesz, zalezy przyszlosc Westeros.\n");

pierwszywybor();

return 0;
}

void pierwszywybor() {
printcenter("Budzisz sie nagle, slyszac zblizajace sie kroki i krzyki. Ktos potrzasza twoim ramieniem\nCzlonek ruchu oporu: Wstawaj, Ars! Zolnierze Bowsera juz po ciebie ida! Musimy uciekac\nWybierz odpowiedz\n 1. Zaufaj czlonkowi ruchu oporu i uciekaj razem z nim\n 2. Siegnij po bron i staw czola wrogim wojskom w pojedynke\n           / Nacisnij enter a nastepnie wybierz odpowiedz/\n");
char wybor;
char wybor2;
 while (1) {
        wybor = getch(); 
        if (wybor == '1') 
        {  
            int wynik =losowanie();

            printcenter("Ars: Dokad mnie prowadzisz??\nCzlonek ruchu oporu: Biegnij za mna, nie ma teraz czasu na rozmowe!\nBiegniesz za czlonkiem ruchu oporu\nDotarles do gospody wraz z czlonkiem ruchu oporu\nW srodku panuje zgielk, ale twoja uwage przykuwa tajemniczy starzec siedzacy przy ognisku. Zaprasza cie na rozmowe.\n");
            printcenter("Starzec: Slyszalem o twoich zatargach z bowserem.\nMam swoje powody, by tez nienawidzic Bowsera.\nMoge ci pomoc, ale najpierw musisz udzyskac moja magiczna laske.\nTy: Z kim musze sie zmierzyc, by ja zdobyc?\nStarzec: Wlasciciel tej karczmy to mistrz gry w kosci. Musisz go pokonac, lecz stawka bedzie wysoka  (twoja wolnosc)\n");
            printcenter("Zglaszasz sie do wlasciciela karczmy na pojedynek w kosci. Gra polega na wyrzuceniu wiekszej liczby oczek jedna koscia.\nWlasciciel karczmy: Jesli przegrasz, bedziesz moim niewolnikiem. Jesli wygrasz, oddam ci laske starca.\n       \nWlasciciel karczmy rzuca koscia\nWyrzucil 3!!!\nNaciscij enter aby rzucic koscia\n");
            printf("Wyrzuciles %d!!\n", wynik);
                
                if (wynik < 3)
                {
                    printcenter( "Wyrzucasz mniej niz 3 oczka. Przegrywasz i zostajesz niewolnikiem karczmarza na reszte zycia.\n-------------Koniec gry, sprobuj od nowa-------------\n");
                break;
                }
                
                else if (wynik > 3)
                {
                    printcenter("Pokonujesz karczmarza i odzyskujesz magiczna laske starca. Teraz masz poteznego sojusznika w walce przeciw Bowserowi.\n             \n              \nRazem z starcem wyruszacie zemscic sie wrogu\nMag niszczy armie Bowsera poteznym zakleciem. Krolestwo zostaje wyzwolone, a ty i mag prowadzicie Westeros ku zlotej erze rozwoju.\n-------------Wygrales-------------");
                break;
                }
                else if(wynik == 3)
                {
                    printcenter(" Wlasciciel karczmy: To pierwszy raz, kiedy ktos ze mna remisuje. Pomoge ci, poniewaz widze, ze masz mój respekt.\nKarczmarz i jego przyjaciele dolaczaja do ciebie, by stawic czola Bowserowi ale tracisz za to zaufanie starca spowodu jego zatargow z karczmarzem.\n");
                    printcenter("Wyruszasz na czele swojej druzyny, by stawic czola Bowserowi. Dochodzi do ostatecznej walki.\nWybierz bron:\n 1.Miecz\n 2.Gole piesci\n/Nacisnij enter a nastepnie wybierz odpowiedz/\n");
                    switch (wybor2)
                    {
                        case 1:
                            printcenter("Wybrałeś miecz.\nPokonujesz Bowsera w zacieklej walce. Krolestwo Westeros odzyskuje pokoj, a ty zostajesz nowym krolem, ktory prowadzi kraj ku lepszej przyszlosci.\n-------------Wygrales-------------");
                            break;
                        case 2:
                            printcenter("Wybrałeś gołe pięści.\nWalczysz odwaznie, ale Bowser cie zabija. Twoi sprzymierzency chwytaja Bowsera, ale krolestwo pograza sie w chaosie, rzadzone przez hazard i przemoc.\n-------------Koniec gry-------------");
                            break;
                        default:
                            printcenter("Sprobuj ponownie!");
                            fflush(stdin);
                            break;
                    }
                break;
                }

            break;  
        }
        
        else if(wybor == '2') 
        {
            printcenter("Pelen gniewu chwytasz bron i ruszasz na wrogie wojska.\nDostrzegasz Bowsera w oddali, lecz zanim do niego docierasz\nstrzaly wystrzelone przez jego lucznikow przebijaja twoje cialo\n-------------Koniec gry, sprobuj od nowa-------------\n");
            break;
        }
        else 
        {
            printcenter("Sprobuj ponownie!");
            pierwszywybor();
            fflush(stdin);
            break;
        }

}
}






