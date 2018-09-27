//Marquis Lockhart - CSCI 1110
//Program 6 - Global Warming
#include <stdio.h>

int read_temps (float temps[]);
int hot_days (int numoftemp, float temps[]);
int print_temps (int numoftemp, float temps[], int numofhotdays);
int numoftemp;
int numofhotdays;
int index=0;
int count=0;
int t;

int main (void) {
    float temps[31];

    printf("Marquis Lockhart - CSCI 1110\n");
    printf("Program 6 - Global Warming\n");
    numoftemp = read_temps (temps);
    numofhotdays = hot_days (numoftemp, temps);
    print_temps (numoftemp, temps, numofhotdays);

    return 0;
}
int hot_days (int numoftemp, float temps[])
{
    for (t = 0;t<numoftemp; t++)
    {
        if (temps[t] > 32.0)
            count++;
    }
    return count;
}
int print_temps (int numoftemp, float temps[], int numofhotdays)
{
    float sum = 0.0;
    printf ("\nInput Temperatures");
    printf ("\n------------------");

    for (t = 0;t<numoftemp; t++)
        {
        sum = sum + temps[t];
        }
    printf("\nAverage Temp:      %.2f\n", sum/numoftemp);//shows average of temperatures
    printf("Number of Temps:   %d", numoftemp);//shows number of temperatures inputted
    printf("\nNumber Above 32:   %d", numofhotdays);//shows number of temperatures above 32
}
int read_temps (float temps[])
{
    float tempval;
    do
    {
        printf ("Enter the temperature:");
        scanf ("%f", &tempval);
        if (tempval!=-500.0)//adds temperature to count if not equal to -500
        {
            temps[index] = tempval;
            index++;
        }
    } while (tempval != -500.0);
    return index;
}
/*Marquis Lockhart - CSCI 1110
Program 6 - Global Warming
Enter the temperature:18
Enter the temperature:72
Enter the temperature:36
Enter the temperature:12
Enter the temperature:9
Enter the temperature:-500

Input Temperatures
------------------
Average Temp:      29.40
Number of Temps:   5
Number Above 32:   2*/
