#ifndef NOTE_H_INCLUDED
#define NOTE_H_INCLUDED
#include "matiere.h"
#include "etudiant.h"

class note
{
private:
    matiere mat;
    etudiant etu;
    float nota;
    string type;
public:
    note();
    note(matiere, etudiant, float, string);
    //void afficheNote();
    friend ostream& operator<<(ostream&,const note&);
    matiere getMat(){return mat;};
    float getNote(){return nota;};
    string getType(){return type;};
};

note::note()
{
    nota=0;
    type="vide";
}

note::note(matiere a, etudiant b, float c, string d)
{
    this->mat=a;
    this->etu=b;
    this->nota=c;
    this->type=d;
}

ostream& operator<<(ostream& out, const note& c){
out<<"\t"<<c.mat.getNomMat()<<"\t\t"<<c.nota<<"\t"<<c.type<<endl;
return out;
}

/*void note::afficheNote()
{
    cout<<nota<<type;
    mat.afficherMat();
    etu.affichePers();
}*/



#endif // NOTE_H_INCLUDED
