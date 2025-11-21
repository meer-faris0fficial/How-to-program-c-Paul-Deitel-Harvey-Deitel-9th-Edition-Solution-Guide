#include <stdio.h>

int main()
{
    float gallonUsed = 0.0;
    float miles = 0.0;

    float soloAverage = 0;
    float average = 0;
    int num = 0;

    while (gallonUsed != -1)
    {
        printf("Enter the Gallon used (-1 to end): ");
        scanf("%f", &gallonUsed);
        
        if (gallonUsed == -1) break;

        printf("Enter the miles driven: ");
        scanf("%f", &miles);

        soloAverage = miles/gallonUsed;
        average += soloAverage;
        printf("The mile/gallon for this tank was: %f\n", soloAverage);
        
        num++;
    }
    
    printf("The overall miles/gallon are: %f\n", average/num);

    return 0;
}
