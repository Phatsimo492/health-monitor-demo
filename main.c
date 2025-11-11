/* HEALTH MONITOR DEMO */

#include <stdio.h>

int main()
{
    float temp;
    int HR;
    
    printf("Health Monitor Demo\n");
    
    //Input physiological signals
    printf("Enter patient's body temperature (in degree celsius): ");
    scanf("%f", &temp);
    
    printf("\nEnter patient's heart rate (in bpm): ");
    scanf("%d", &HR);
    
    printf("\nHEALTH PROFILE/SUMMARY\n");
    
    //Analyzing temp
    if (temp < 36.0) {
        printf("Temperature: %f Degrees Celsius - Below normal (Hypothermia risk)\n", temp);
    }
    else if (temp >= 36.0 && temp <= 37.5)
    {
        printf("Temperature: %f Degrees Celsius - Normal\n", temp);
    }
    else {
        printf("Temperature: %f Degrees Celsius - Fever\n", temp);
    }
    
    //analyzing heartrate
    if (HR < 60) {
        printf("Heartrate: %d BPM - Bradycardia (Low heart rate)\n", HR);
    }
    else if (HR >= 60 && HR <= 100) {
        printf("Heartrate: %d BPM - Normal range\n", HR);
    }
    else {
        printf("Heartrate: %d BPM - Tachycardia (high heart rate)\n");
    }
    
    //summary analysis
    if ((temp > 37.5) && (HR > 100)) {
        printf("\nWARNING! Possible fever with elevated heart rate.\n");
        printf("Suggest rest, hydration, or medical checkup.\n");
    }
    else if ((temp < 36.0) && (HR <60)) {
        printf("\nWARNING! Low body temperature and heart rate detected.\n");
        printf("Monitor closely for hypothermia and Bradycardia.\n");
    }
    else {
        printf("\nHealth status: Patient is normal and signals within acceptable range.");
    }
    
    printf("\nIn case of unexpected extreme changes, visit the nearest hospital! Thank you!");

    return 0;
}
