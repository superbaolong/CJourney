#include <stdio.h>
#include <stdbool.h>

#define N 8   

int solutions = 0;   
int queen_positions[N];   

 
bool is_safe(int row, int col) {
    for (int prev_row = 0; prev_row < row; prev_row++) {  
        int prev_col = queen_positions[prev_row];        
         
        if (prev_col == col ||                           
            prev_col - prev_row == col - row ||          
            prev_col + prev_row == col + row) {          
            return false;   
        }
    }
    return true;   
}

 
void print_solution() {
    printf("No %d:\n", ++solutions);   
    for (int row = 0; row < N; row++) {     
        for (int col = 0; col < N; col++) {  
            if (queen_positions[row] == col)   
                printf("A");   
            else
                printf(".");   
        }
        printf("\n");   
    }
    printf("\n");   
}

 
void solve(int row) {
    if (row == N) {   
        print_solution();   
        return;
    }
    for (int col = 0; col < N; col++) {   
        if (is_safe(row, col)) {   
            queen_positions[row] = col;   
            solve(row + 1);   
             
        }
    }
}

int main() {
    solve(0);   
    return 0;   
}
