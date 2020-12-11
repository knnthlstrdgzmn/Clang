#include <stdio.h>
#define p printf
#define s scanf

int main ()
{
    char ClassID;
    p("\nB or b BATTLESHIP \nC or c CRUISER \nD or d	DESTROYER \n F or f	FRIGATE\n");
    p("\n INPUT CLASS ID:  ");
    s("%c", &ClassID);
    /*

    if ((ClassID == 'B')||(ClassID == 'b'))
		p("SHIPCLASS:  BATTLESHIP");
	else if ((ClassID == 'C')||(ClassID == 'c'))
		p("SHIPCLASS:  CRUISER");
	else if ((ClassID == 'D')||(ClassID == 'd'))
		p("SHIPCLASS:  DESTROYER");
	else if ((ClassID == 'F')||(ClassID == 'f'))
		p("SHIPCLASS:  FRIGATE");
	else
		p("INPUT ERROR");

	*/
		switch(ClassID)
	{
	case 'B':
	case 'b':
		p("SHIPCLASS:  BATTLESHIP");
		break;
	case 'C':
	case 'c':
		p("SHIPCLASS:  CRUISER");
		break;
	case 'D':
	case 'd':
		p("SHIPCLASS:  DESTROYER");
		break;
	case 'F':
	case 'f':
		p("SHIPCLASS:  FRIGATE");
		break;
	default:
		p("INPUT ERROR");
		break;

	}



}
