#include <stdio.h>
#include <stdlib.h>

/*
  Myles Page
  CS 2300
  Due 9/21/19
  Date 9/19/19
*/

int main() {
		//initilizes the variables
		int row;
        int column;
        //makes the files 
        FILE * matrixA;
        FILE * matrixB;
        FILE * calc;
        FILE * trans;
        
        //Opens the folders to write 
        matrixA = fopen("CS2300P1aPage_outA", "w+");
        matrixB = fopen("CS2300P1aPage_outB", "w+");
        calc = fopen("CS2300P1aPage_calc", "w+");
        trans = fopen("CS2300P1aPage_trans", "w+");
        
        //make matrix A, B, Calulations and Transpose 
    	int matrix_A [10][10] = { 
								{-2,1,6,0,-5,9,-7,-5,3,-1},
                           		{-9,3,-2,9,-6,-10,5,6,4,3},
                           	    {2,-2,-9,3,4,-1,-1,-7,3,6},
                           	    {-1,7,-5,10,7,-2,-7,-4,9,-3},
                           		{4,5,-7,-5,-3,-1,-3,-9,-6,3},
                           		{4,10,-5,4,6,6,2,2,4,-2},
                           		{3,1,-1,-4,4,-4,-6,4,-6,7},
								{-10,-4,1,4,-10,6,5,1,-8,7},
								{-9,-8,-1,4,2,-1,-5,-2,2,-5},
								{-4,2,8,-9,-2,-10,9,3,-1,2}
                         	    };       	  
        int matrix_B [10][10] = { 
								{-11,5,30,0,-25,45,-35,-25,15,-5},
                           		{-45,14,-10,45,-30,-50,25,30,20,15},
                           		{10,-10,-46,15,20,-5,-5,-35,15,30},
                           		{-5,35,-25,49,35,-10,-35,-20,45,-15},
                           		{20,25,-35,-25,-16,-5,-15,-45,-30,15},
                           		{20,50,-25,20,30,29,10,10,20,-10},
                           		{15,5,-5,-20,20,-20,-31,20,-30,35},
								{-50,-20,5,20,-50,30,25,4,-40,35},
								{-45,-40,-5,20,10,-5,-25,-10,9,-25},
							    {-20,10,40,-45,-10,-50,45,15,-5,9}
                         	    }; 						  
		int calculation[10][10];
		int transpose [10][10];
		
		//print matrix A to the screen and to the document	     
		printf("Matrix A\n");
		fprintf(matrixA, "Matrix A:");					                	  
        for (column=0; column<10; column++){
			fprintf(matrixA, "\n");
        	for(row=0; row<10; row++){
				printf("%d\t", matrix_A[row][column]);
				fprintf(matrixA, "%d\t", matrix_A[row][column]);
				}
            	printf("\n");
     	}
     	
     	//print matrix B to the screen and document
		printf("\nMatrix B\n");
		fprintf(matrixB, "Matrix B:");
		for (column=0; column<10; column++){
			fprintf(matrixB, "\n");
        	for(row=0; row<10; row++){
				printf("%d\t", matrix_B[row][column]);
				fprintf(matrixB, "%d\t", matrix_B[row][column]);
				}
            	printf("\n");
     	}
     	
     	//print calulation matrix to the screen and document 
     	printf("\nCalculations\n");
     	fprintf(calc, "Calculations:");
		for (column=0; column<10; column++){
			fprintf(calc, "\n");
        	for(row=0; row<10; row++){
        		calculation[row][column] = 5 * matrix_A[row][column] - matrix_B[row][column];
				printf("%d\t", calculation[row][column]);
				fprintf(calc, "%d\t", calculation[row][column]);
				}
            	printf("\n");
     	}
     	
     	//swap the matrix so its transposed
     	for (column = 0; column < 10; column++){
      		for(row = 0 ; row < 10 ; row++ ){
         		transpose[column][row] = calculation[row][column];
 			}
 			
 		}
		//print the transposed matrix	
   		printf("\nTranspose\n");
 		fprintf(trans, "Transpose:");
   		for (column = 0; column < 10; column++) {
   			fprintf(trans, "\n");
      		for (row = 0; row < 10; row++){
         		printf("%d\t", transpose[column][row]);
         		fprintf(trans, "%d\t", transpose[column][row]);
         	}
      		printf("\n");
   		}
   		
   		//close the documents
		fclose(matrixA);
        fclose(matrixB);
        fclose(calc);
        fclose(trans);
        return (0);
	}
