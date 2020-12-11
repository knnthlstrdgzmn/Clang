#include <stdio.h>
#define p printf
#define s scanf

int main() {

int Temperature;

    p("\n\t INPUT TEMPERATURE:  ");
    s("%d", &Temperature);

    if(Temperature < 0)
        p(" \n \tICE *");
    else if //((Temperature >= 0)||
               (Temperature <= 100)
        p("\n \tWATER");
    else if (Temperature >= 100)
        p("\n \tSTEAM");
    else
        p("ERROR");




}
