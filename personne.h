#ifndef PERSONNE_H_INCLUDED
#define PERSONNE_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;

class personne
{
public:
    int id;
    string nom;
    string prenom;
    string mail;
public:
    personne();
    personne(int,string,string,string);
    //void afficher();
    friend ostream& operator<<(ostream&,const personne&);
    int getId() const {return id;};
    string getNom() const {return nom;};
    string getPrenom() const {return prenom;};
    string getMail() const {return mail;};
};

personne::personne()
{
    id=0;
    nom="vide";
    prenom="vide";
    mail="vide";
}

personne::personne(int a, string b, string c, string d)
{
    this->id=a;
    this->nom=b;
    this->prenom=c;
    this->mail=d;
}

ostream& operator<<(ostream& out, const personne& c){
out <<c.id<<c.nom<<c.prenom<<c.mail << endl;
return out;
}

/*void personne::afficher()
{
    cout<<id<<nom<<prenom<<mail;
}*/


#endif // PERSONNE_H_INCLUDED
