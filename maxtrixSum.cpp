#include <iostream>


int matrixElementsSum(std::vector <vector<int>> matrix) { 
    int sum = 0;
        for ( unsigned int r = 0; r < matrix.size();  r++){
                
            for ( unsigned int c =0; c <= matrix[r].size(); c++){
                
                sum = sum + matrix[r][c];
                std::cout << matrix[r][c] << endl;
                
                
                if (matrix[r][c] ==0 && r < matrix.size() -1){
                   matrix[r+1][c]=0;  
                }
                
               
            }    
        }
               
        
        return sum;
}
