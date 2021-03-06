#include "stdafx.h"


int main()
{
	int K;
	const int R = 5;
	const int Record = 100;
// Create Variable Locations

	int Sequence_Length[2] = { R, 2 * Record};
	int Seqence_Block [R][2 * Record]; 
	/* Variable
	Sequence_Block will store information about each color r in a different row as follows; 
		 0 if color r has not been placed in column i
		 1 if color r has been placed in column i
		-1 if color r can not be placed in column i
	*/




}

//Needs Memory allocation Added
int Predictor_K3(int R, int Sequence_Block, int Last_Color, int Last_Position) {
	/* Function
	Predictor_K3 will mark where color r can not be placed in the future. To do this it will access Sequence_Block (Variable)
	*/

	int Position;

	for (int i = 0; i < Last_Position - 1; i++) {
		if (Sequence_Block[Last_Color][i] == 1) {

			Position = 2 * Last_Position - i;

			if (Position <= (sizeof(Sequence_Block) / (sizeof(int) * R)) {
				Sequence_Block[Last_Color][Position] = -1;
			}
		}
	}

	return Sequence_Block;
}

int Continue_Check(int R, int Record, int Sequence_Block, int Last_Position) {
	/*
	Return 0 if there is a column of all -1.
	Return 1 if there is no column of 1.
	*/

	for (int i = Last_Position; i <= Record - 1; i++) {
		for (int j = 0; j <= R; j++) {
			if (Sequence_Block[j][i] != -1) {
				break;
			} else if(Sequence_Block[j][i] == -1 && j == R){
				return 0;
			}
		}
	}

	return 1;
}

