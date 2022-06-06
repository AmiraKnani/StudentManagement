#ifndef ENSEIGNANT_H_INCLUDED
#define ENSEIGNANT_H_INCLUDED
#include "personne.h"

class enseignant : public personne
{
private :
    int CNSS;
public:
    enseignant();
    enseignant(int, string, string, string, int);
    //void afficheEns();
    enseignant saisirEnseignant();
    friend ostream& operator<<(ostream&,const enseignant&);
};

enseignant::enseignant():personne()
{
    CNSS=0;
}

enseignant::enseignant(int a, string b, string c, string d, int n): personne(a,b,c,d)
{
    CNSS=n;
}

ostream& operator<<(ostream& out, const enseignant & x){
out <<"\t\t\t\t\t\t "<<x.getId()<<"\t"<<x.getNom()<<"\t"<<x.getPrenom()<<"\t"<<x.getMail()<<"\t"<<x.CNSS<<endl;
return out;
}

enseignant enseignant::saisirEnseignant()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 9);
    enseignant P;
    cout<<"\t\t\t\t\t\t Introduire Id -> ";
    SetConsoleTextAttribute(hConsole, 8);
    cin>>P.id;
    SetConsoleTextAttribute(hConsole, 9);
    cout<<"\t\t\t\t\t\t Introduire Nom -> ";
    SetConsoleTextAttribute(hConsole, 8);
    cin>>P.nom;
    SetConsoleTextAttribute(hConsole, 9);
    cout<<"\t\t\t\t\t\t Introduire Prenom -> ";
    SetConsoleTextAttribute(hConsole, 8);
    cin>>P.prenom;
    SetConsoleTextAttribute(hConsole, 9);
    cout<<"\t\t\t\t\t\t Introduire Mail -> ";
    SetConsoleTextAttribute(hConsole, 8);
    cin>>P.mail;
    SetConsoleTextAttribute(hConsole, 9);
    cout<<"\t\t\t\t\t\t Introduire CNSS -> ";
    SetConsoleTextAttribute(hConsole, 8);
    cin>>P.CNSS;
    return P;
}

/*void enseignant::afficheEns()
{   afficher();
    cout<<CNSS;
}*/


#endif // ENSEIGNANT_H_INCLUDED
