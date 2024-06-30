// 1912. Design Movie Rental System

// You have a movie renting company consisting of n shops. 
// You want to implement a renting system that supports searching for, booking, and returning movies. 
// The system should also support generating a report of the currently rented movies.
// Each movie is given as a 2D integer array entries where entries[i] = [shopi, moviei, pricei] indicates that there is a copy of movie moviei at shop shopi with a rental price of pricei. 
// Each shop carries at most one copy of a movie moviei.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class MovieRentingSystem {
    map<pair<int, int>, int> price; 
    unordered_map<int, set<pair<int, int>>> unrented; 
    set<tuple<int, int, int>> rented;
public:
    MovieRentingSystem(int n, vector<vector<int>>& entries) {
        for(auto &i : entries){
            int shop = i[0] , movie = i[1] , p = i[2];
            price[{shop, movie}] = p;
            unrented[movie].emplace(p,shop);
        }
        
    }
    
    vector<int> search(int movie) {
        auto &s = unrented[movie];
        vector<int>ans;
        int i = 0;
        for(auto it = s.begin(); i < 5 && it != s.end() ; ++it, ++i){
            ans.push_back(it->second);
        }
        return ans;       
    }
    
    void rent(int shop, int movie) {
        int p = price[{shop,movie}];
        unrented[movie].erase({p, shop});
        rented.emplace(p, shop, movie);  
    }
    
    void drop(int shop, int movie) {
        int p = price[{shop,movie}];
        rented.erase({p,shop,movie});
        unrented[movie].emplace(p,shop); 
    }
    
    vector<vector<int>> report() {
        vector<vector<int>>ans;
        int i = 0;
        for(auto it = rented.begin() ; it != rented.end() && i < 5; ++i, ++it){
            auto [p,s,m] = *it;
            ans.push_back({s,m});
        }
        return ans;
    }
};

int main() {
  
    vector<vector<int>> entries = {
        {0, 1, 5},
        {0, 2, 6},
        {0, 3, 7},
        {1, 1, 4},
        {1, 2, 7},
        {2, 1, 5}
    };

    MovieRentingSystem mrs(3, entries);

    // Search for movie 1
    cout << "Search movie 1: ";
    vector<int> searchResult = mrs.search(1);
    for (int shop : searchResult) {
        cout << shop << " ";
    }
    cout << endl;

    // Rent movie 1 from shop 0
    cout << "Rent movie 1 from shop 0" << endl;
    mrs.rent(0, 1);

    // Search for movie 1 again
    cout << "Search movie 1: ";
    searchResult = mrs.search(1);
    for (int shop : searchResult) {
        cout << shop << " ";
    }
    cout << endl;

    // Report rented movies
    cout << "Report rented movies: ";
    vector<vector<int>> reportResult = mrs.report();
    for (auto &item : reportResult) {
        cout << "(" << item[0] << ", " << item[1] << ") ";
    }
    cout << endl;

    // Drop movie 1 back to shop 0
    cout << "Drop movie 1 from shop 0" << endl;
    mrs.drop(0, 1);

    // Search for movie 1 again
    cout << "Search movie 1: ";
    searchResult = mrs.search(1);
    for (int shop : searchResult) {
        cout << shop << " ";
    }
    cout << endl;

    // Report rented movies again
    cout << "Report rented movies: ";
    reportResult = mrs.report();
    for (auto &item : reportResult) {
        cout << "(" << item[0] << ", " << item[1] << ") ";
    }
    cout << endl;

    return 0;
}



/**
 * Your MovieRentingSystem object will be instantiated and called as such:
 * MovieRentingSystem* obj = new MovieRentingSystem(n, entries);
 * vector<int> param_1 = obj->search(movie);
 * obj->rent(shop,movie);
 * obj->drop(shop,movie);
 * vector<vector<int>> param_4 = obj->report();
 */