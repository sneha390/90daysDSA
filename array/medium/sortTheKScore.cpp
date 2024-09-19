#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int mx;
        for(int i = 0; i < score.size() ; i++){
            mx = i;
            for(int j = i ; j < score.size() ; j++){
                if(score[j][k] > score[mx][k]){
                    mx = j;
                }
            }
            swap(score[i] , score[mx]);
        }
        return score;
}

int main() {
    vector<vector<int>> scores = {
        {90, 80, 70},
        {85, 95, 75},
        {88, 78, 80}
    };

    int k = 1; 
   
    vector<vector<int>> sortedScores = sortTheStudents(scores, k);

    cout << "Sorted scores based on column " << k << ":\n";
    for (const auto& row : sortedScores) {
        for (int score : row) {
            cout << score << " ";
        }
        cout << endl;
    }

    return 0;
}