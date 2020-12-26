#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char yesNo[4] = "yes", usedMeasurement[5], wantedMeasurement[5];
    int amount;
    float finalAmount=1;
    printf("Welcome to \"Weight conversion app\"\n");
    while(strcmp(yesNo, "yes") == 0) {
        // Input
        printf("Enter amount:\n");
        scanf("%d", &amount);
        printf("Enter weight measurement of the current amount (short names only):\n");
        scanf("%s", usedMeasurement);
        printf("Enter weight measurement to convert to:\n");
        scanf("%s", wantedMeasurement);
        // Processing

        if(strcmp(usedMeasurement, "g")==0 && strcmp(wantedMeasurement, "kg")==0) {
            finalAmount = amount/1000.0;
        }
        else if(strcmp(usedMeasurement, "g")==0 && strcmp(wantedMeasurement, "oz")==0) {
            finalAmount = amount/28.35;
        }
        else if(strcmp(usedMeasurement, "kg")==0 && strcmp(wantedMeasurement, "g")==0) {
            finalAmount = amount*1000.0;
        }
        else if(strcmp(usedMeasurement, "kg")==0 && strcmp(wantedMeasurement, "oz")==0) {
            finalAmount = amount*35.27;
        }
        else if(strcmp(usedMeasurement, "oz")==0 && strcmp(wantedMeasurement, "g")==0) {
            finalAmount = amount*28.35;
        }
        else if(strcmp(usedMeasurement, "oz")==0 && strcmp(wantedMeasurement, "kg")==0) {
            finalAmount = amount/35.27;
        }
        else {
            printf("Invalid input");
        }
        // Output
        printf("\nFinal result is %f %s\n", finalAmount, wantedMeasurement);
        printf("Do you want to continue? (yes/no):\n");
        scanf("%s", yesNo);
    }
    return 0;
}
