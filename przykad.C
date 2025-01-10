 1 #include <stdio.h>
 2 #include <stdlib.h>
 3 #include <string.h>
 4 #include <windows.h>
 5 #include <conio.h>
 6 #include <time.h>
 7
 8 int losowanie()
 9 {
 10    return (rand() % 6) + 1;
 11 }
 12 void printcenter(const char* text) {
 13 int width = 400;
 14 int len = strlen(text);
 15 int padding = 20;
 16
 17 for (int i = 0; i< padding; i=i+1) {
 18    printf(" ");
 19 }
 20 for (int i = 0; i < len; i=i+1){
 21 printf("%c", text[i]);          // %c to wyznaczenie konkretnej literki
 22 if(text[i]=='\n'){
 23 for (int i = 0; i< padding; i=i+1) {
 24    printf(" ");
 25 }   
26 }
 27 if(_kbhit() != 1){          // czy przycisk jest wcisniety jezeli tak to zwraca 1 
28 Sleep(50); }
 29
 30
 31  }
 32
 33 printf("\n");
 34 while(1){
 35    char c;
 36    c = getchar();
 37    if(c == '\n'){
 38    system("cls");
 39        break;
 40    }
 41 }
 42 }
 43
 44 void pierwszywybor();
 45
 46 int main() {
 47    srand(time(0));
 48         printcenter("Witaj w grze\n/Nacisnij enter aby kontynuowac/\n");
 49 printcenter("Krolestwo Westeros od lat drzy pod rzadami Krola Bowsera, bezlitosnego tyrana, 
ktory wlada z zelazna reka.\nArs, mlody szlachcic, widzial, jak jego ziemie zostaly zabrane 
przez tego okrutnego wladce po smierci jego ojca.\nPelen gniewu i pragnienia zemsty, 
1/3/25, 4:15 PM gratekstowa.C
 localhost:64342/f8b9fe09-d940-4cef-b9c1-13f1d9232e15/ 1/3
postanawia obalic Bowsera i przywrocic wolnosc swojemu ludowi.\nTwoja podroz wlasnie sie 
zaczyna, a od wyborow, ktore podejmiesz, zalezy przyszlosc Westeros.\n");
 50
 51 pierwszywybor();
 52
 53 return 0;
 54 }
 55
 56 void pierwszywybor() {
 57 printcenter("Budzisz sie nagle, slyszac zblizajace sie kroki i krzyki. Ktos potrzasza twoim 
ramieniem\nCzlonek ruchu oporu: Wstawaj, Ars! Zolnierze Bowsera juz po ciebie ida! Musimy 
uciekac\nWybierz odpowiedz\n 1. Zaufaj czlonkowi ruchu oporu i uciekaj razem z nim\n 2. 
Siegnij po bron i staw czola wrogim wojskom w pojedynke\n           / Nacisnij enter a 
nastepnie wybierz odpowiedz/\n");
 58 char wybor;
 59 char wybor2;
 60 while (1) {
 61        wybor = getch(); 
62        if (wybor == '1') 
63        {  
64            int wynik =losowanie();
 65
 66            printcenter("Ars: Dokad mnie prowadzisz??\nCzlonek ruchu oporu: Biegnij za mna, 
nie ma teraz czasu na rozmowe!\nBiegniesz za czlonkiem ruchu oporu\nDotarles do gospody wraz 
z czlonkiem ruchu oporu\nW srodku panuje zgielk, ale twoja uwage przykuwa tajemniczy starzec 
siedzacy przy ognisku. Zaprasza cie na rozmowe.\n");
 67            printcenter("Starzec: Slyszalem o twoich zatargach z bowserem.\nMam swoje 
powody, by tez nienawidzic Bowsera.\nMoge ci pomoc, ale najpierw musisz udzyskac moja 
magiczna laske.\nTy: Z kim musze sie zmierzyc, by ja zdobyc?\nStarzec: Wlasciciel tej 
karczmy to mistrz gry w kosci. Musisz go pokonac, lecz stawka bedzie wysoka  (twoja 
wolnosc)\n");
 68            printcenter("Zglaszasz sie do wlasciciela karczmy na pojedynek w kosci. Gra 
polega na wyrzuceniu wiekszej liczby oczek jedna koscia.\nWlasciciel karczmy: Jesli 
przegrasz, bedziesz moim niewolnikiem. Jesli wygrasz, oddam ci laske starca.\n       
\nWlaściciel karczmy rzuca koscia\nWyrzucil 3!!!\nNaciscij enter aby rzucic koscia\n");
 69            printf("Wyrzuciles %d!!\n", wynik);
 70                
71                if (wynik < 3)
 72                {
 73                    printcenter( "Wyrzucasz mniej niz 3 oczka. Przegrywasz i zostajesz 
niewolnikiem karczmarza na reszte zycia.\n-------------Koniec gry, sprobuj od nowa-------------\n");
 74                break;
 75                }
 76                
77                else if (wynik > 3)
 78                {
 79                    printcenter("Pokonujesz karczmarza i odzyskujesz magiczna laske starca. 
Teraz masz poteznego sojusznika w walce przeciw Bowserowi.\n             \n              
\nRazem z starcem wyruszacie zemscic sie wrogu\nMag niszczy armie Bowsera poteznym 
zakleciem. Krolestwo zostaje wyzwolone, a ty i mag prowadzicie Westeros ku zlotej erze 
rozwoju.\n-------------Wygrales-------------");
 80                break;
 81                }
 82                else if(wynik == 3)
 83                {
 1/3/25, 4:15 PM gratekstowa.C
 localhost:64342/f8b9fe09-d940-4cef-b9c1-13f1d9232e15/ 2/3
84                    printcenter(" Wlasciciel karczmy: To pierwszy raz, kiedy ktos ze mna 
remisuje. Pomoge ci, poniewaz widze, ze masz mój respekt.\nKarczmarz i jego przyjaciele 
dolaczaja do ciebie, by stawic czola Bowserowi ale tracisz za to zaufanie starca spowodu 
jego zatargow z karczmarzem.\n");
 85                    printcenter("Wyruszasz na czele swojej druzyny, by stawic czola 
Bowserowi. Dochodzi do ostatecznej walki.\nWybierz bron:\n 1.Miecz\n 2.Gole 
piesci\n/Nacisnij enter a nastepnie wybierz odpowiedz/\n");
 86                    switch (wybor2)
 87                    {
 88                        case 1:
 89                            printcenter("Wybrałeś miecz.\nPokonujesz Bowsera w zacieklej 
walce. Krolestwo Westeros odzyskuje pokoj, a ty zostajesz nowym krolem, ktory prowadzi kraj 
ku lepszej przyszlosci.\n-------------Wygrales-------------");
 90                            break;
 91                        case 2:
 92                            printcenter("Wybrałeś gołe pięści.\nWalczysz odwaznie, ale 
Bowser cie zabija. Twoi sprzymierzency chwytaja Bowsera, ale krolestwo pograza sie w 
chaosie, rzadzone przez hazard i przemoc.\n-------------Koniec gry-------------");
 93                            break;
 94                        default:
 95                            printcenter("Sprobuj ponownie!");
 96                            break;
 97                    }
 98                break;
 99                }
 100
 101            break;  
102        }
 103        
104        else if(wybor == '2') 
105        {
 106            printcenter("Pelen gniewu chwytasz bron i ruszasz na wrogie wojska.\nDostrzegasz 
Bowsera w oddali, lecz zanim do niego docierasz\nstrzaly wystrzelone przez jego lucznikow 
przebijaja twoje cialo\n-------------Koniec gry, sprobuj od nowa-------------\n");
 107            break;
 108        }
 109        else 
110        {
 111            printcenter("Sprobuj ponownie!");
 112            pierwszywybor();
 113            break;
 114        }
 115
 116 }
 117 }


