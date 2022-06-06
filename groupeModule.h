#ifndef GROUPEMODULE_H_INCLUDED
#define GROUPEMODULE_H_INCLUDED
#include "matiere.h"
#include <vector>

class groupeModule
{
private:
    string IdGm;
    string NomGm;
    float CoefGm;
public:
    groupeModule();
    groupeModule(string, string, float, vector<matiere>);
    vector<matiere> listeMat;
    vector<matiere> getMat()const {return listeMat;};
    //void afficheGroupe();
    groupeModule saisirGM();
    string getNM() const {return NomGm;};
    int getCoef() const {return CoefGm;};
    //void ajoutListeGM (groupeModule, );
    friend ostream& operator<<(ostream&,const groupeModule&);
};

groupeModule::groupeModule()
{
    IdGm="vide";
    NomGm="vide";
    CoefGm=0;
}

groupeModule::groupeModule(string a, string b, float c, vector<matiere> d)
{
    this->IdGm=a;
    this->NomGm=b;
    this->CoefGm=c;
    this->listeMat=d;
}

ostream& operator<<(ostream& out, const groupeModule& c){
out <<"\t\t\t\t\t\t "<<c.IdGm<<"\t"<<c.NomGm<<"\t"<<c.CoefGm<<"\t";
for(int i=0; i<(int)c.listeMat.size(); i++){
    out<<c.getMat()[i].getNomMat()<<"\t"<<endl;
    out<<"\t\t\t\t\t\t\t\t\t";}
    out<<endl;
return out;
}

groupeModule groupeModule::saisirGM()
{   HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 9);
    groupeModule P;
    cout<<"\t\t\t\t\t\t Introduire Id -> ";
    SetConsoleTextAttribute(hConsole, 8);
    cin>>P.IdGm;
    SetConsoleTextAttribute(hConsole, 9);
    cout<<"\t\t\t\t\t\t Introduire Nom_GM -> ";
    SetConsoleTextAttribute(hConsole, 8);
    cin>>P.NomGm;
    SetConsoleTextAttribute(hConsole, 9);
    cout<<"\t\t\t\t\t\t Introduire Coef -> ";
    SetConsoleTextAttribute(hConsole, 8);
    cin>>P.CoefGm;
    SetConsoleTextAttribute(hConsole, 9);
    cout<<"\t\t\t\t\t\t Introduire Nombre de matiere -> ";
    SetConsoleTextAttribute(hConsole, 8);
    int x,i;
    cin>>x;
    for (i=0; i<x; i++)
    {
        listeMat[i]=P.listeMat[i].saisirMat();
    }


    //P.listeMat=(1,0);
    return P;

}

/*void groupeModule::ajoutListeGM()
{

}*/
/*void groupeModule::afficheGroupe()
{
    cout<<IdGm<<NomGm<<CoefGm;
    for(int i=0; i<(int)listeMat.size(); i++)
    {
        listeMat[i].afficherMat();
    }

}*/

#endif // GROUPEMODULE_H_INCLUDED
