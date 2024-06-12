#include <iostream>
#include <string>
#include "Movie.h"

using namespace std;

int main(){
    string t, s, m, g;
    string directorFname, directorLname, directorGender;
    string actorFname, actorLname, actorGender;

    Movie movie;
    Person person;

    cout<<"Enter Movie Title: ";
    getline(cin, t);
    movie.setTitle(t);

    cout<<"Enter Synopsis: ";
    getline(cin, s);
    movie.setSynopsis(s);

    cout<<"Enter MPAA: ";
    cin>>m;
    movie.setMPAA(m);

    cout<<"Enter Genre/s: ";
    cin>>g;
    movie.setGenre(g);

    cout << "Who is the director: "<<endl;
    cout<<"First Name: ";
    cin>>directorFname;
    person.setFirstname(directorFname);

    cout<<"Last Name: ";
    cin>>directorLname;
    person.setLastname(directorLname);
    Person director(directorFname, directorLname, directorGender);
    movie.setDirector(director);
    cin.ignore(); 

    cout << "Who is the Actor/Actress: "<<endl;
    cout<<"First Name: ";
    cin>>actorFname;
    person.setFirstname(actorFname);

    cout<<"Last Name: ";
    cin>>actorLname;
    person.setLastname(actorLname);
    Person actor(actorFname, actorLname, actorGender);
    movie.setActors(actor);

    cout<<"\n";
    cout<<"Movie Details: "<<endl;
    cout<<"Movie Title: "<< movie.getTitle()<<endl;
    cout<<"Synopsis: "<< movie.getSynopsis()<<endl;
    cout << "MPAA Rating: " << movie.getMPAA() << endl;
    cout << "Genre: " << movie.getGenre() << endl;
    cout << "Director: " << movie.getDirector().getFullName() << endl;
    cout << "Actor/Actress: " << movie.getActors().getFullName() << endl;
}