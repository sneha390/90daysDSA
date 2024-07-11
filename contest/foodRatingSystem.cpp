#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>

using namespace std;
using pis = pair<int, string>;

class FoodRatings {
    map<string, pis> mp; 
    map<string, set<pis>> t; 
public:
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        int n = foods.size();
        for (int i = 0; i < n; ++i) {
            string a = foods[i], b = cuisines[i];
            int c = ratings[i];
            mp[a] = pis(c, b); 
            t[b].insert(pis(-c, a)); 
        }
    }
    
    void changeRating(string food, int newRating) {
        pis& p = mp[food]; 
        t[p.second].erase(pis(-p.first, food)); 
        p.first = newRating; 
        t[p.second].insert(pis(-p.first, food)); 
    }
    
    string highestRated(string cuisine) {
        return t[cuisine].begin()->second; 
    }
};

int main() {
    vector<string> foods = {"sushi", "burger", "pizza"};
    vector<string> cuisines = {"Japanese", "American", "Italian"};
    vector<int> ratings = {{5, 4, 3}};

    FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);

    cout << "Highest rated Japanese food: " << obj->highestRated("Japanese") << endl;
    cout << "Highest rated American food: " << obj->highestRated("American") << endl;
    cout << "Highest rated Italian food: " << obj->highestRated("Italian") << endl;

    obj->changeRating("pizza", 6);
    cout << "Highest rated Italian food after changing pizza rating: " << obj->highestRated("Italian") << endl;

    // Clean up
    delete obj;
    return 0;
}
