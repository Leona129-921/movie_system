#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Movie {
    std::string title;
    std::string genre;
    int rating; // 1 to 5 stars
    std::string language;
    std::string description;
    int year; 
};    

//functions
bool searchByTitle(const vector<Movie>& movies, const string& query);
bool filterByGenre(const vector<Movie>& movies, const string& targetGenre);
bool filterByMinRating(const vector<Movie>& movies, int minRating);
bool filterByLanguage(const vector<Movie>& movies, const string& lang);

int main() {
    
    int choice;
    string name;
    string movieName;
    string genre;
    
    vector<Movie> catalog = {m1, m2};
    
    Movie m1 = {"Hope", "Sci-Fi", 1, "English", "A bad movie", 2026};
    Movie m2 = {"Colony", "Sci-Fi", 4, "English", "Zombie Movie", 2026};
    
    
    
    string query = "Hope";
    searchByTitle(catalog, query);
    
    
    return 0;
}

//fuction definitions
bool searchByTitle(const vector<Movie>& movies,const string& query){
    bool found=false;
    cout<<"========================================="<<endl;
    cout<<" SEARCH RESULTS FOR: \""<<query<<"\""<<endl;
    cout<<"========================================="<<endl;
    for(const auto& movie:movies){
        if(movie.title.find(query)!=string::npos){
            cout<<"Movie: "<<movie.title<<endl;
            cout<<"Genre: "<<movie.genre<<endl;
            cout<<"Year: "<<movie.year<<endl;
            cout<<"Language: "<<movie.language<<endl;
            cout<<"Rating: "<<movie.rating<<"/5 stars"<<endl;
            cout<<"Overview: "<<movie.description<<endl<<endl;
            found=true;
        }
    }
    return found;
}


bool filterByGenre(const vector<Movie>& movies,const string& targetGenre){
    bool found=false;
    cout<<"========================================="<<endl;
    cout<<" MOVIES IN GENRE: "<<targetGenre<<endl;
    cout<<"========================================="<<endl;
    for(const auto& movie:movies){
        if(movie.genre==targetGenre){
            cout<<"Movie: "<<movie.title<<endl;
            cout<<"Genre: "<<movie.genre<<endl;
            cout<<"Year: "<<movie.year<<endl;
            cout<<"Language: "<<movie.language<<endl;
            cout<<"Rating: "<<movie.rating<<"/5 stars"<<endl;
            cout<<"Overview: "<<movie.description<<endl<<endl;
            found=true;
        }
    }
    return found;
}

bool filterByMinRating(const vector<Movie>& movies,int minRating){
    bool found=false;
    cout<<"========================================="<<endl;
    cout<<" MOVIES WITH RATING >= "<<minRating<<" STAR(S)"<<endl;
    cout<<"========================================="<<endl;
    for(const auto& movie:movies){
        if(movie.rating>=minRating){
            cout<<"Movie: "<<movie.title<<endl;
            cout<<"Genre: "<<movie.genre<<endl;
            cout<<"Year: "<<movie.year<<endl;
            cout<<"Language: "<<movie.language<<endl;
            cout<<"Rating: "<<movie.rating<<"/5 stars"<<endl;
            cout<<"Overview: "<<movie.description<<endl<<endl;
            found=true;
        }
    }
    return found;
}


bool filterByLanguage(const vector<Movie>& movies,const string& lang){
    bool found=false;
    cout<<"========================================="<<endl;
    cout<<" MOVIES IN LANGUAGE: "<<lang<<endl;
    cout<<"========================================="<<endl;
    for(const auto& movie:movies){
        if(movie.language==lang){
            cout<<"Movie: "<<movie.title<<endl;
            cout<<"Genre: "<<movie.genre<<endl;
            cout<<"Year: "<<movie.year<<endl;
            cout<<"Language: "<<movie.language<<endl;
            cout<<"Rating: "<<movie.rating<<"/5 stars"<<endl;
            cout<<"Overview: "<<movie.description<<endl<<endl;
            found=true;
        }
    }
    return found;
}








