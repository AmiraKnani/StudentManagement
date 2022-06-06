#ifndef ETUDIANT_H_INCLUDED
#define ETUDIANT_H_INCLUDED
#include "personne.h"


class etudiant : public personne
{
private :
    int numIns;
public:
    etudiant();
    etudiant(int, string, string, string, int);
    //void affichePers();
    //etudiant saisirEtudiant();
    friend ostream& operator<<(ostream&,const etudiant&);
    int getNum() const {return numIns;};
};

etudiant::etudiant():personne()
{
    numIns=0;
}

etudiant::etudiant(int a, string b, string c, string d, int n): personne(a,b,c,d)
{
    numIns=n;
}

ostream& operator<<(ostream& out, const etudiant & x){
out <<"\t\t\t\t\t\t "<<x.getId()<<"\t"<<x.getNom()<<"\t"<<x.getPrenom()<<"\t"<<x.getMail()<<"\t"<<x.numIns<<endl;
return out;
}

/*etudiant etudiant::saisirEtudiant()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 9);
    etudiant P;
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
    cout<<"\t\t\t\t\t\t Introduire Mail -> ";
    SetConsoleTextAttribute(hConsole, 8);
    cin>>P.mail;
    cout<<"\t\t\t\t\t\t Introduire NumIns -> ";
    SetConsoleTextAttribute(hConsole, 8);
    cin>>P.numIns;
    return P;
}*/

/*void etudiant::affichePers()
{   afficher();
    cout<<numIns;
}*/
#endif // ETUDIANT_H_INCLUDED
