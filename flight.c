/*
    Name: Jan Carlo
    Course Number: COP
    Section Number: 3223
    Assignment Title: Assignment #5
    Date: 16/10/2015
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    // Variable declaration block
    char* fileName = malloc(sizeof(char)*30);
    int lowerBound = 0;
    int higherBound = 0;
    int month = 0;
    float temperature = 0;
    int inRange = 0;
    int year = 0;
    int day = 0;
    float percent = 0;
    int total = 0;
    int bestMonth = 0;
    float bestPercent = -1;
    int i = 0;
    int count = 0;
    char* line = NULL;
    size_t len = 0;
    ssize_t read;
    FILE* fin = NULL;
    //End of variable declaration block

    //Take input of lowest temperature
    printf("Tell me about your dragon's preferred temperature for flying:\nWhat is the coldest temperature they can fly in?\n");
    scanf("%d", &lowerBound);

    //Take input of highest temperature
    printf("What is the hottest temperature they can fly in?\n");
    scanf("%d", &higherBound);

    //Take input of filename
    printf("Please enter the name of the weather data file for Dragon Island.\n");
    fflush(stdin);
    scanf("%s", fileName);
    printf("\n");

    //Open file and check for file existence
    fin = fopen(fileName, "r");
    if(fin == NULL)
        exit(EXIT_FAILURE);

    //Repeat for each month in a year
    for (i = 0; i < 12; ++i)
    {
        month = 0;
        total = 0;
        inRange = 0;
        while(month!=-1)
        {
            //Read a line
            fscanf(fin, "%d %d %d %f", &month, &day, &year, &temperature);
            if(month!=-1 && month == i+1)
            {
                total++;
                if(temperature <= higherBound && temperature >= lowerBound)
                    inRange ++;
            }
        }
        if(total != 0)
            percent = (inRange * 100.0) / total;
        else
            percent = 0;

        //If this month has more number of days in range than any previous month, make this the best month
        if(percent > bestPercent)
        {
            bestPercent = percent;
            bestMonth = i + 1;
        }
        // Show percentage for this month
        printf("Month %d: %.1f percent of days in range.\n", i+1, percent);

        //Move the file pointer to start of file
        fseek(fin, 0, SEEK_SET);
    }
    //Free allocated resources
    if(fin)
        fclose(fin);
    if(line)
        free(line);
    if(fileName)
        free(fileName);

    //Show the best month
    printf("\nI recommend month %d for the Celebration of the First Flight!\n",bestMonth);
    exit(EXIT_SUCCESS);
}
