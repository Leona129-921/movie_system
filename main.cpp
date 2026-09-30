#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

struct movie {
    string title;
    string genre;
    int rating;
    string language;
    
};

vector<movie> loadMovieDatabase(const string& moviefile) {
    vector<movie> db;
    ifstream file(moviefile);
    if(!file.is_open()) {
        cout<<"Sorry, could not open Movie File." <<endl;
        return db;
    }
     

}

int main() 
{
    int choice;
    string name;
    string movieName;
    string genre;

    cout << "======Netflix Movie Finder======" << endl;

    cout << "Please enter your username: ";
    cin >> name;

    while (true){
        cout << "==========Main Menu===========" << endl;
        cout << "Welcome, " << name << "!" << endl;
        cout << "1. Search a movie" << endl;
        cout << "2. Movie Recommendation" << endl;
        cout << "3. Exit" << endl;
        cout << "===============================" << endl;

        cout << "Please enter your choice: ";
        cin >> choice;
        cout << endl;

        if (choice == 1) {
            cout << "Enter the movie name: ";
            string movieName;
            cin.ignore(); 
            getline(cin, movieName);
            cout << "Searching for movie: " << movieName << endl;
            // can add code to search for the movie in database
        } 

        else if (choice == 2) {
            cout << "Enter your preferred genre (e.g., Action, Comedy, Drama): ";
            cin >> genre;
            cout << "Fetching recommendations for genre: " << genre << endl;
            // can add code to fetch movie recommendations based on the genre
        } 

        else if (choice == 3) {
            cout << "Exiting the program. Goodbye!" << endl;
            break; // Exit the loop and end the program
        } 
        else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
test