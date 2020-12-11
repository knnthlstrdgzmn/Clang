#include <stdio.h>
#define p printf
#define s scanf

int main(){

float RichterNum;

    p("\n ENTER THE RICHTER NUMBER:  ");
    s("%f", &RichterNum);

    if (RichterNum < 5){
        p("\n LITTLE OR NO DAMAGE");
    }
    else if ((RichterNum >= 5) && (RichterNum <= 5.5)){
        p("\nSOME DAMAGE");
    }
    else if ((RichterNum >= 5.6) && (RichterNum <= 6.5)){
        p("\n SERIOUS DAMAGE");
    }
    else if ((RichterNum >= 6.6) && (RichterNum <= 7.5)){
        p("\n DISASTER");
    }
    else if (RichterNum > 7.5 ){
        p("\n CATASTROPHE");
    }
    else{
        p("ERROR");

    }

        return 0;

}
