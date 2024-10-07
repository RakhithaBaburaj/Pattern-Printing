/*1.Project:PATTERN PRINTING
2.Question:Print Pattern of First letter of our name?
3.Name:Rakhitha Baburaj
Date:6/10/2024
*/

#include<stdio.h>
int main() {
    int i, j;// controls rows
    for(i = 1; i <= 7; i++) {//controls columns
        for(j = 1; j <= 5; j++) {
            if(j == 1 || (i == 1 && j < 5) || (i==4&&j<5)|| (j == 5 && i > 1 && i < 4) || (i - j == 2))
                printf("* ");
            else
                printf("  "); 
        }
        printf("\n");
    }
    return 0;
}
