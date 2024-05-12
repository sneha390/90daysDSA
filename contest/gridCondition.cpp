// 3142. Check if Grid Satisfies Conditions
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool satisfiesConditions(vector<vector<int>>& grid) {
        int rows = grid.size();
    
    // Handle edge cases
    if (rows <= 1) return true; // If there's only one row or no row, conditions are met

    int cols = grid[0].size();
    
    // Check conditions for each row
    for (int i = 0; i < rows - 1; ++i) {
        // If the current row has different number of columns from the next row, return false
        if (grid[i].size() != grid[i + 1].size()) return false;
        
        // Check elements in the same column of consecutive rows
        for (int j = 0; j < cols - 1; ++j) {
            if (grid[i][j] != grid[i + 1][j] || grid[i][j] == grid[i][j + 1]) {
                return false;
            }
        }
        // Check the last column of the current row
        if (grid[i][cols - 1] != grid[i + 1][cols - 1]) return false;
    }
    
    return true;
}

int main(){
    int n;
    int m;

    cin >> m;
    cin >> n;
  
    vector<vector<int>> grid( n , vector<int> (m));  
  
    for(int i = 0; i < n; i++) 
    { 
        for(int j = 0; j < m; j++) 
        { 
            cin >> grid[i][j]; 
        } 
    } 
  
    for(int i = 0; i < n; i++) 
    { 
        for(int j = 0; j < m; j++) 
        { 
            cout << grid[i][j] << " "; 
        } 
        cout << endl; 
    } 
    satisfiesConditions(grid);

    if(satisfiesConditions(grid) == true){
        cout << "true";
    }else{
        cout << "false";
    }
    
      
   return 0; 
}