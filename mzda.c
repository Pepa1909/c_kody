#include <stdio.h>

int main()
{
    int prescas = 40;
    float hodiny, vyplata, sazba, prescas_bonus = 1.5;
    printf("Zadej pocet odpracovanych hodin: "); scanf("%f", &hodiny);
    printf("Jaka je mzda? "); scanf("%f", &sazba);
    if(hodiny > prescas)
        vyplata  = sazba*prescas+ (hodiny-prescas)*sazba*prescas_bonus;
    else vyplata = sazba*hodiny;
    printf("celkem dostanes %.2f korun", vyplata); 
    return 0;
}