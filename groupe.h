#ifndef GROUPE_H_INCLUDED
#define GROUPE_H_INCLUDED
#include "groupeModule.h"

class groupe
{
private:
    string IdGRP;
    string niveau;
    string diplome;
    string specialite;
    int Num_G;
    vector<groupeModule> listeModules;
    vector<groupeModule> getMod()const {return listeModules;};
    vector<etudiant> listeEtudiant;
    vector<etudiant> getEtu()const {return listeEtudiant;};
public:
    groupe();
    groupe(string, string, string, string, int, vector<groupeModule>, vector<etudiant>);
    //void afficherGroupe();
    friend ostream& operator<<(ostream&,const groupe&);
};

groupe::groupe()
{
    IdGRP="vide";
    niveau="vide";
    diplome="vide";
    specialite="vide";
    Num_G=0;
}

groupe::groupe(string a, string b, string c, string d, int e, vector<groupeModule> f, vector<etudiant> g)
{
    this->IdGRP=a;
    this->niveau=b;
    this->diplome=c;
    this->specialite=d;
    this->Num_G=e;
    this->listeModules=f;
    this->listeEtudiant=g;
}

ostream& operator<<(ostream& out, const groupe& c){
out<<"\t\t\t\t\t\t " <<c.IdGRP<<"  "<<c.niveau<<"  "<<c.diplome<<"\t"<<c.specialite<<"\t"<<c.Num_G<<"\t";
for(int i=0; i<(int)c.listeModules.size() ;i++)
{out<<c.listeModules[i].getNM()<<"\t"<<c.listeEtudiant[i].getNum()<<endl;
out<<"\t\t \t\t \t\t\t\t \t\t";
//if(j<(int)c.listeModules.size()) j++;
}
for(int i=(int)c.listeModules.size(); i<(int)c.listeEtudiant.size() ;i++)
{out<<"\t"<<c.listeEtudiant[i].getNum()<<endl;
out<<"\t\t \t\t \t\t\t\t \t\t";
}
out<<endl;

return out;
}

/*void groupe::afficherGroupe()
{
    cout<<IdGRP<<niveau<<diplome<<specialite<<Num_G;
    for(int i=0; i<(int)listeModules.size(); i++)
    {
        listeModules[i].afficheGroupe();
    }
    for(int j=0; j<(int)listeEtudiant.size();  j++)
    {
        listeEtudiant[j].affichePers();
    }
}*/

#endif // GROUPE_H_INCLUDED
