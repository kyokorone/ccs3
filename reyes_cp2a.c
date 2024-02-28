/* Angela Sol P. Henson
Started 02/27/2024
Finished 02/28/2024
This C program is another verseion of a CQPA Calculator that uses arrays to pass values. */

#include<math.h>
#include<stdio.h>
#define SIZE 5

// function prototypes
void InputData(float grade[], float units[]);
float *CalculateCQPA(float grade[], float units[], float *CQPA);
void OutputCQPA (float *CQPA);

int main(void)
{
	int answer;
	float units[SIZE] = {0};
	float grade[SIZE] = {0};
	float CQPA;
	
	// This is a loop that allows the user to repeatedly use the program as much as they want.
	do{
		printf("\nThis program is a CQPA Calculator based on five (5) courses or subjects.\n");		
		
		InputData(grade, units);
		CalculateCQPA(grade, units, &CQPA);
		OutputCQPA (&CQPA);
		
		printf("\n\nWould you like to calculate again? Enter 1 for Yes: ");
		scanf("%d", &answer);
		if (answer != 1)
			break;
	}while(answer == 1);

	printf("\nThank you. Press any key to exit.");
	
	return 0;
}

	/* This function is where the user inputs the data for each course--
	the course grade and the number of units. The function utilizes arrays
	for storing the users input data.*/
	
void InputData(float grade[SIZE], float units[SIZE])
{
	// User inputs their grade value in. Must be between 0.0 and 4.0.
	for(int i = 0; i < SIZE; i++)
		{
			printf("\nPlease enter your grade for Course %d: ", i);
			scanf("%f", &grade[i]);
			if (grade[i] < 0.0 || grade[i] > 4.0) // Error trap if user inputs an invalid grade
				printf("\nInvalid input. Must enter a grade between 0.0 and 4.0.");
		}
	
	printf("\nGrade input successful.\n");

	// User inputs the number of units in. Must be between 2.0 and 5.0.
	for(int i = 0; i < SIZE; i++)
		{
			printf("\nPlease enter the number of units for Course %d: ", i);
			scanf("%f", &units[i]);
			if (units[i] < 2.0 || grade[i] > 5.0) // Error trap if user inputs an invalid number of units
				printf("\nInvalid input. Must enter a number between 2.0 and 5.0.");
		}

	printf("\nUnits input successful.\n");

	return;
}

	/* This function is where the Final CQPA is calculated.*/
	
float *CalculateCQPA(float grade[], float units[], float *CQPA)
{
	float units_sum = 0, product_sum = 0;
	
	//Equations for CQPA calculation
	
	for(int i = 0; i < SIZE; i++)
	{
		units_sum += units[i];
	}
	
	for(int i = 0; i < SIZE; i++)
	{
		product_sum += (units[i] * grade[i]);
	}
		
	*CQPA = product_sum/units_sum;
	
	return CQPA;
}

	/* This function displays the final CQPA that was calculated. It then also displays different comments
	based on the calculated CQPA.*/
	
void OutputCQPA(float *CQPA)
{
	printf("\nThe final CQPA calculated is %.2f.", *CQPA);
	
	if (*CQPA < 1.0)
		printf("\nYou are advised to shift to another course.");
	if (*CQPA >= 1.0 && *CQPA <= 1.9)
		printf("\nYou have a low *CQPA. You must take a remedial course.");
	if (*CQPA >= 2.0 && *CQPA <= 2.9)
		printf("\nYour *CQPA is okay, but you can do better than this.");
	if (*CQPA >= 3.0 && *CQPA <= 4.0)
		printf("\nVery good! Keep up the good work!");	
}
