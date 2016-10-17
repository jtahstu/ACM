/*
 * =====================================================================================
 *
 * Filename: sudokou.c
 *
 * Description:
 *
 * Version: 1.0
 * Created: 10/21/2012 02:58:56 PM
 * Revision: none
 * Compiler: gcc
 *
 * Author: royn.wang.renyuan@gmail.com (),
 * Organization:
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#define MMAX 9
char M[MMAX][MMAX] = {{0}};
int count = 0;

int getblockid(int row, int col){
    return row/3 * 3 + col/3;
}
void getnext(int *row, int *col, int* nrow, int* ncol){
    if(*col ==8){
        *ncol = 0;
        *nrow = (*row)+1;
    }
    else{
        *nrow = *row;
        *ncol = (*col) +1;
    }
}
void outputmatrix(char mtr[MMAX][MMAX] ){
    int i, j;
    for(i=0;i<MMAX;i++){
        for(j = 0; j<MMAX;j++){
            printf("%d ", mtr[i][j]);
        }
        printf ( "\n" );
    }
}

void fill(int row, int col, char matrix[MMAX][MMAX], char rowd[][MMAX], char cold[][MMAX], char blod[][MMAX]){
    count ++;
    if(matrix[row][col] != 0){
        if(row == 8 && col == 8){
            outputmatrix(matrix);
            return;
        }
        int nr, nc;
        getnext(&row,&col,&nr,&nc);
        fill(nr,nc,matrix,rowd,cold,blod);
        return;
    }
    int i = 1;
    char mtr[MMAX][MMAX];
    memcpy(mtr, matrix, MMAX*MMAX*sizeof(char));

    for(;i<= 9;i++){
        //duplicate all data
        int blockid = getblockid(row, col);
        if(
            blod[blockid][i-1]!= (char)1 &&
            rowd[row][i-1]!=(char)1 &&
            cold[col][i-1]!=(char)1
            ){
            //fill the cell
//            printf ( "fill [%d] [ %d] with %d\n",row, col, i );
            matrix[row][col] = i;

            if(row == 8 && col == 8){
                outputmatrix(matrix);
                return;
            }
            //set the restriction
            blod[blockid][i-1] = 1;
            rowd[row][i-1] = 1;
            cold[col][i-1] = 1;
            int nrow,ncol;
            getnext(&row, &col, &nrow, &ncol);
            fill(nrow,ncol,matrix,rowd,cold,blod);
            //restore status
            blod[blockid][i-1] = 0;
            rowd[row][i-1] = 0;
            cold[col][i-1] = 0;
            matrix[row][col] = 0;
        }
    }
}

void trackfixedcell(char fixmtr[MMAX][MMAX], char r[MMAX][MMAX],char c[MMAX][MMAX],char b[MMAX][MMAX]){
    int row,col;
    for(row = 0; row<MMAX; row++){
        for(col= 0; col<MMAX; col++){
            if(fixmtr[row][col]!= 0){
                r[row][(int)fixmtr[row][col]-1] = 1;
                c[col][(int)fixmtr[row][col]-1] = 1;
                b[getblockid(row,col)][(int)fixmtr[row][col]-1] = 1;
            }
        }
    }
}
void readfixed(char mtr[MMAX][MMAX], char* input){
    int i = 0;
    for(;i<MMAX*MMAX;i++){
        int row = i/MMAX;
        int col = i%MMAX;
        if(input[i] != '0'){
            mtr[row][col] = input[i]-48;
        }
    }
}

/*
 * === FUNCTION ======================================================================
 * Name: main
 * Description:
 * =====================================================================================
 */
    int
main ( int argc, char *argv[] )
{
    char * fixed = "600087000000905706040000080030002000004000690000410023500030170080090200001076300";
    char r[MMAX][MMAX] = {{0}};
    char c[MMAX][MMAX] = {{0}};
    char b[MMAX][MMAX] = {{0}};
    readfixed(M,fixed);
    trackfixedcell(M,r,c,b);
    fill(0,0,M,r,c,b);
    printf ( "count = %d\n", count );
    return EXIT_SUCCESS;
}
