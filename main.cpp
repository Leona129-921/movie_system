#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Movie 
{
    string title;
    string genre;
    int year; 
    string language;
    double rating; // 1 to 5 stars
    string description;
    
};    

//functions
bool searchByTitle(const vector<Movie>& movies, const string& query);
bool filterByGenre(const vector<Movie>& movies, const string& targetGenre);
bool filterByMinRating(const vector<Movie>& movies, double minRating);
bool filterByLanguage(const vector<Movie>& movies, const string& lang);

int main() 
{
   
    //a hardcoded small database, will be replaced with the complete version of database
    Movie m1 = {"Hope", "Sci-Fi", 2026, "Korean", 1, "A bad movie"};
    Movie m2 = {"Colony", "Sci-Fi", 2026, "Korean", 4, "Zombie Movie"};
    vector<Movie> catalog = {m1, m2};
   
    int choice;
    string name;
    string movieName;
    string genre;
    double minRatingStar;
    string language;

    cout << "====== Movie Finder ======" << endl;

    cout<<"Please enter your username: ";
    cin>>name;

    while (true)
    {
        cout<<"==========Main Menu==========="<<endl;
        cout<<"Welcome, "<<name<<"!"<<endl;
        cout<<"1. Search a movie"<<endl;
        cout<<"2. Movie Recommendation (Sci-Fi, Action, Comedy)"<<endl;
        cout<<"3. Minimum Rating (1 to 5 stars)"<<endl;
        cout<<"4. Language (English, Chinese, Tamil, Japanese, Korean)"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"==============================="<<endl;

        cout<<"Please enter your choice: ";
        cin>>choice;
        cout<<endl;

        if (choice == 1) 
        {
            cout << "Enter the movie name: ";
            cin.ignore(); 
            getline(cin, movieName);
            searchByTitle(catalog, movieName);
        } 

        else if (choice == 2) 
        {
            cout<<"Enter your preferred genre (Sci-Fi, Action, Comedy): ";
            cin.ignore();
            getline(cin, genre);
            filterByGenre(catalog, genre);
        } 

        else if (choice == 3) 
        {
        cout<<"Enter your preferred minimum rating (1 to 5 stars): ";
        cin>>minRatingStar;
        filterByMinRating(catalog, minRatingStar);
        }

        else if (choice == 4)
        {
            cout<<"Enter your preferred language a (English, Chinese, Tamil, Japanese, Korean): ";
            cin.ignore();
            getline(cin, language);
            filterByLanguage(catalog, language);
        }

        else if (choice == 5) 
        {
            cout<<"Exiting the program. Goodbye!"<<endl;
            break;
        } 

        else 
        {
            cout<<"Invalid choice. Please try again."<<endl<<endl;
        }
    }




    return 0;
}

//fuction definitions
bool searchByTitle(const vector<Movie>& movies,const string& query)
{
    bool found=false;
    cout<<"========================================="<<endl;
    cout<<" SEARCH RESULTS FOR: "<<query<<endl;
    cout<<"========================================="<<endl;
    for(const auto& movie:movies)
    {
        if(movie.title.find(query)!=string::npos)
        {
            cout<<"Movie: "<<movie.title<<endl;
            cout<<"Genre: "<<movie.genre<<endl;
            cout<<"Year: "<<movie.year<<endl;
            cout<<"Language: "<<movie.language<<endl;
            cout<<"Rating: "<<movie.rating<<"/5 stars"<<endl;
            cout<<"Overview: "<<movie.description<<endl<<endl;
            found=true; 
        }
    }

    if (!found) 
    {
        cout<<"No movies found matching: "<<query<<endl<<endl;
    }

    return found;
}


bool filterByGenre(const vector<Movie>& movies,const string& targetGenre)
{
    bool found=false;
    cout<<"========================================="<<endl;
    cout<<" MOVIES IN GENRE: "<<targetGenre<<endl;
    cout<<"========================================="<<endl;
    for(const auto& movie:movies)
    {
        if(movie.genre==targetGenre)
        {
            cout<<"Movie: "<<movie.title<<endl;
            cout<<"Genre: "<<movie.genre<<endl;
            cout<<"Year: "<<movie.year<<endl;
            cout<<"Language: "<<movie.language<<endl;
            cout<<"Rating: "<<movie.rating<<"/5 stars"<<endl;
            cout<<"Overview: "<<movie.description<<endl<<endl;
            found=true;
        }
    }

    if (!found) 
    {
        cout<<"No movies found matching: "<<targetGenre<<endl<<endl;
    }

    return found;
}

bool filterByMinRating(const vector<Movie>& movies,double minRating)
{
    bool found=false;
    cout<<"========================================="<<endl;
    cout<<" MOVIES WITH RATING >= "<<minRating<<" STAR(S)"<<endl;
    cout<<"========================================="<<endl;
    for(const auto& movie:movies)
    {
        if(movie.rating>=minRating)
        {
            cout<<"Movie: "<<movie.title<<endl;
            cout<<"Genre: "<<movie.genre<<endl;
            cout<<"Year: "<<movie.year<<endl;
            cout<<"Language: "<<movie.language<<endl;
            cout<<"Rating: "<<movie.rating<<"/5 stars"<<endl;
            cout<<"Overview: "<<movie.description<<endl<<endl;
            found=true;
        }
    }

    if (!found) 
    {
        cout<<"No movies found matching: "<<minRating<<endl<<endl;
    }

    return found;
}


bool filterByLanguage(const vector<Movie>& movies,const string& lang)
{
    bool found=false;
    cout<<"========================================="<<endl;
    cout<<" MOVIES IN LANGUAGE: "<<lang<<endl;
    cout<<"========================================="<<endl;
    for(const auto& movie:movies)
    {
        if(movie.language==lang)
        {
            cout<<"Movie: "<<movie.title<<endl;
            cout<<"Genre: "<<movie.genre<<endl;
            cout<<"Year: "<<movie.year<<endl;
            cout<<"Language: "<<movie.language<<endl;
            cout<<"Rating: "<<movie.rating<<"/5 stars"<<endl;
            cout<<"Overview: "<<movie.description<<endl<<endl;
            found=true;
        }
    }

    if (!found) 
    {
        cout<<"No movies found matching: "<<lang<<endl<<endl;
    }

    return found;
}