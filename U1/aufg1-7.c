/* Datei aufg1-7.c */
/* Umrechnung von Winkelma� in Bogenma� */

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	double winkel, bogen;
	double faktor = (2 * 3.141592654) / 360;
	printf("Geben Sie den Winkel im Winkelmass ein:\n ");
	scanf("%lf", &winkel);
	bogen = winkel * faktor;
	printf("\nEin Winkel von %f Grad entspricht %f rad\n\n", winkel, bogen);
	system("Pause");
}
