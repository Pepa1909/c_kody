#include <stdio.h>

int main()
{
int pocet_piv, pohlavi;
float procenta, koncentrace, hmotnost, konstanta;
do 
{printf("Zadej pohlavi: 0 pro muze, 1 pro zenu: "); scanf("%i", &pohlavi);}
while(pohlavi > 1 || pohlavi < 0);
do 
{printf("Zadej svoji hmotnost v kg: "); scanf("%f", &hmotnost);}
while(hmotnost < 20);
do
{printf("Kolik piv jsi vypil/a? "); scanf("%i", &pocet_piv);}
while(pocet_piv < 1);
do
{printf("Kolik procent alkoholu mela piva? "); scanf("%f", &procenta);}
while(procenta <= 0);
if(pohlavi == 0)
    konstanta = 5.9;
else
    konstanta = 7.3;
koncentrace = (pocet_piv * procenta * konstanta) / hmotnost;
printf("Momentalne mas v krvi %.2f promile.\n", koncentrace);
if(koncentrace < 0.2)
    printf("Muzes ridit v Chorvatsku (pokud nejsi profesional), Nemecku (pokud je ti alespon 21 let), Polsku a Velke Britanii.");
else if (koncentrace < 0.5)
    printf("Muzes ridit v Chorvatsku (pokud nejsi profesional), Nemecku (pokud ti je alepson 21 let) a Velke Britanii.");
else if (koncentrace < 0.8)
    printf("Muzes ridit jen ve Velke Britanii.");
else
    printf("Nemuzes ridit v zadnem z uvedenych statu. Vsechen alkohol z krve ti vyprcha za %.2f hodin", koncentrace/0.15);
return 0;
}