#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class Movie{
    private:
    string title;
    string synopsis;
    string mpaa;
    string genre;

    Person director;
    Person actors;

    public:
    Movie(){}

    Movie(string title, string synopsis, string mpaa, string genre, Person director, Person actors){
        this->title = title;
        this->synopsis = synopsis;
        this->mpaa = mpaa;
        this->genre = genre;
        this->director = director;
        this->actors = actors;
    }

    string getTitle(){
        return title;
    }
    string getSynopsis(){
        return synopsis;
    }
    string getMPAA(){
        return mpaa;
    }
    string getGenre(){
        return genre;
    }

    Person getDirector(){
        return director;
    }

    Person getActors(){
        return actors;
    }

    void setTitle(string movietitle){
        title = movietitle;
    }

    void setSynopsis(string moviesynopsis){
        synopsis = moviesynopsis;
    }

    void setMPAA(string movieMpaa){
        mpaa = movieMpaa;
    }
    
    void setGenre(string moviegenre){
        genre = moviegenre;
    }
    
    void setDirector(Person direk){
        director = direk;
    }

    void setActors(Person aktor){
        actors = aktor;
    }

};