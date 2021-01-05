#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int *sayiUret()
{
	int sayilar[50];
	for(int i=0;i<50;i++)
	{
		sayilar[i]=rand()%50;
	}
	
	return sayilar;
}

int sayiBul(int[] sayilar)
{
	
	return 1;
}

int main(int argc, char *argv[]) 
{
	sayiBul(sayiUret());
	return 0;
}
