/*
* CS50 / pset1 / chart.c
* Alec Peden (alec.peden@gmail.com)
* 2024
*/

#include <stdio.h>
#include <cs50.h>


int 
main(void)
{
	int mf;
	int fm;
	int ff;
	int mm;

	// Ask how many males have spotted females
	do
    {
    	printf("Males spotting Females: ");
    	mf = GetInt();
    }
    while (mf < 0);

    // Female to Male
    do
    {
    	printf("Female spotting Male: ");
    	fm = GetInt();
    }
    while (fm < 0);

    // Female to Female
    do
    {
    	printf("Female spotting Females: ");
    	ff = GetInt();
    }
    while (ff < 0);

    // Males to Males
    do
    {
    	printf("Male spotting Male: ");
    	mm = GetInt();
    }
    while (mm < 0);

    // Calulate % and chart data
    printf("\nWho is spotting Whom\n\n");


    int total = mf + fm + ff + mm;
    int mfBar = (mf * 100)/(total);
    int fmBar = (fm * 100)/(total);
    int ffBar = (ff * 100)/(total);
    int mmBar = (mm * 100)/(total);

    int mfHash = (mfBar * 80) / 100;
    int fmHash = (fmBar * 80) / 100;
    int ffHash = (ffBar * 80) / 100;
    int mmHash = (mmBar * 80) / 100;
    
    
printf("M spotting F:\n");
for (int i = 0; i < mfHash; ++i)
{
    printf("#");
}
printf("\n");

printf("F spotting M:\n");
for (int ii = 0; ii < fmHash; ++ii)
{
    printf("#");
}
printf("\n");

printf("F spotting F:\n");
for (int iii = 0; iii < ffHash; ++iii)
{
    printf("#");
}
printf("\n");

printf("M spotting M:\n");
for (int iiii = 0; iiii < mmHash; ++iiii)
{
    printf("#");
}
printf("\n");

}