/*
Program:  Assignment 10, Program 2.c
Made by:  Garrett Stanifer
Date:  4/26/2021
Using functions, determine sum of all cast votes, number of votes for each candidate, and the percentage each person recieved.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Prototypes
void totals(int Acand[5], int Bcand[5], int Ccand[5], int Dcand[5]);
void printResults(int Acand[5], int Bcand[5], int Ccand[5], int Dcand[5]);

int main()
{
	//Initializes the table and the values within
	int table[5][4] = {192,48,206,37,147,90,212,21,186,12,121,38,114,21,408,39,267,13,382,29};
	int i, candidateA[5], candidateB[5], candidateC[5], candidateD[5];

	printf("Candidate Votes and data\n");
	printf("%4d\n", table[5][4]);


	printResults(candidateA, candidateB, candidateC, candidateD);

	totals(candidateA, candidateB, candidateC, candidateD);

	return 0;
}

//Finds sum of votes, number for each candidate, and percentage of the total votes
void totals(int Acand[5], int Bcand[5], int Ccand[5], int Dcand[5])
{
	int i, Atotal, Btotal, Ctotal, Dtotal, total, percentage[4];
	Atotal = 0, Btotal = 0, Ctotal = 0, Dtotal = 0;

	for (i = 0; i < 5; i++)
	{
		Atotal = Atotal + Acand[i];
		Btotal = Btotal + Bcand[i];
		Ctotal = Ctotal + Ccand[i];
		Dtotal = Dtotal + Dcand[i];
	}
	total = Atotal + Btotal + Ctotal + Dtotal;
	total = total / 100;
	percentage[0] = Atotal / total;
	percentage[1] = Btotal / total;
	percentage[2] = Ctotal / total;
	percentage[3] = Dtotal / total;

	//Prints the votes casted and percentage of votes each candidate got
	printf("\nTotal votes casted for Candidate A: %d, and the percentage of total votes: %d", Atotal, percentage[0]);
	printf("\nTotal votes casted for Candidate B: %d, and the percentage of total votes: %d", Btotal, percentage[1]);
	printf("\nTotal votes casted for Candidate C: %d, and the percentage of total votes: %d", Ctotal, percentage[2]);
	printf("\nTotal votes casted for Candidate D: %d, and the percentage of total votes: %d", Dtotal, percentage[3]);
}

//Prints the results 
void printResults(int Acand[5], int Bcand[5], int Ccand[5], int Dcand[5])
{
	int i;
	printf("\n\n");
	printf("|Precinct | Candidate A | Candidate B | Candidate C | Candidate D |");
	for (i = 0; i < 5; i++)
	{
		printf("\n|  %d	  |  %d |  %d |  %d |  %d |", (i + 1), Acand[i], Bcand[i], Ccand[i], Dcand[i]);
	}

	totals(Acand[5], Bcand[5], Ccand[5], Dcand[5]);
}
