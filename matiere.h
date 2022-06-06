#ifndef MATIERE_H_INCLUDED
#define MATIERE_H_INCLUDED
#include "enseignant.h"

class matiere
{
private:
    string IdMat;
    string NomMat;
    float Coef;
    enseignant Ens;
public:
    matiere();
    matiere(string,string,float,enseignant);
    string getNomMat() const {return NomMat;};
    float getCoefM() const {return Coef;};
    //void afficherMat();
    friend ostream& operator<<(ostream&,const matiere&);
    matiere saisirMat();

};

matiere::matiere()
{
    IdMat="vide";
    NomMat="vide";
    Coef=0;
}

matiere::matiere(string a, string b, float c, enseignant d)
{
    this->IdMat=a;
    this->NomMat=b;
    this->Coef=c;
    this->Ens=d;
}

ostream& operator<<(ostream& out, const matiere& c){
out <<"\t\t\t\t\t\t "<<c.IdMat<<"\t"<<c.NomMat<<"\t"<<c.Coef<<"\t"<<c.Ens.getId()<<"\t"<<c.Ens.getNom()<<" "<<c.Ens.getPrenom()<<endl;
return out;
}

matiere matiere::saisirMat()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 9);
    matiere P;
    cout<<"\t\t\t\t\t\t Introduire Mat -> ";
    SetConsoleTextAttribute(hConsole, 8);
    cin>>P.IdMat;
    SetConsoleTextAttribute(hConsole, 9);
    cout<<"\t\t\t\t\t\t Introduire Nom_Mat -> ";
    SetConsoleTextAttribute(hConsole, 8);
    cin>>P.NomMat;
    SetConsoleTextAttribute(hConsole, 9);
    cout<<"\t\t\t\t\t\t Introduire Coef -> ";
    SetConsoleTextAttribute(hConsole, 8);
    cin>>P.Coef;
    P.Ens=Ens.saisirEnseignant();

    return P;
}
/*void matiere::afficherMat()
{
    cout<<IdMat<<NomMat<<Coef;
    Ens.afficheEns();
}*/
#endif // MATIERE_H_INCLUDED
