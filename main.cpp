#include <iostream>
#include <iomanip>
#include <windows.h>
#include "note.h"
#include "groupe.h"
#include <fstream>
#include <vector>


void Invalide()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 4);
    cout<<"\t\t\t\t\t\t Choix errone! Veuillez reintroduire votre choix!"<<endl;

}

int Leave()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 4);
    cout<<"\t\t\t\t\t\t Voulez-vous quitter? "<<endl;
    cout<<"\t\t\t\t\t\t 1-Menu principal "<<endl;
    cout<<"\t\t\t\t\t\t 2-Quitter "<<endl;
    int x;
    SetConsoleTextAttribute(hConsole, 8);
    cout<<"\t\t\t\t\t\t ->";
    cin>>x;
    return x;
}

float moyenneRSx(float a, float b, float c)
{
    return (a+b+c)/3;
}
float moyenneDBA(float a, float b)
{
    return (a+b)/2;
}
float moyenneC(float a, float b)
{
    return (a+b)/2;
}
float moyennePython(float a, float b, float c)
{
    return (a+b+c)/3;
}
float moyenneProba(float a, float b)
{
    return (a+b)/2;
}
float moyenneStat(float a, float b, float c)
{
    return (a+b+c)/3;
}
float moyenneMPI(float a, float b)
{
    return (a+b)/2;
}
float moyenneILY(float a, float b, float c)
{
    return (a+b+c)/3;
}
float moyenneGP(float a, matiere a1, float b, matiere b1, float c, matiere c1, float d, matiere d1)
{
    return (a*a1.getCoefM()+b*b1.getCoefM()+c*c1.getCoefM()+d*d1.getCoefM())/(a1.getCoefM()+b1.getCoefM()+c1.getCoefM()+d1.getCoefM());
}
float moyenneGenerale(float a, groupeModule a1, float b, groupeModule b1)
{
    return (a*a1.getCoef()+b*b1.getCoef())/(a1.getCoef()+b1.getCoef());
}

string resultat(float a)
{
    if(a>=10) return "ADMIS";
    return "AJRN.";
}

string mention(float a)
{
    if(a>=10&&a<12) return "PASS.";
    else if(a>=12&&a<14) return "ABIEN";
    else if(a>=14&&a<16) return "BIEN ";
    else if(a>=16&&a<18) return "TBIEN";
    else if(a>=18) return "EXCE.";
    return ("     ");

}


int main()
{
    personne p(20,"moi","toi","lui");
    //cout<<p;
    //p.afficher();
    //ETUDIANT
    etudiant e1(1,"Knani","Amira","mira@pi.tn",19065);
    etudiant e2(2,"Majed","Nawres","noussa@pi.tn",19038);
    etudiant e3(3,"Mannai","Hasna","hassnouch@pi.tn",19167);
    etudiant e4(4,"Ayedi","Nadia","nadou@pi.tn",19278);
    etudiant e5(5,"Chekir","Mohamed","midou@pi.tn",19007);
    etudiant e6(6,"Rjab","Baya","bayou@pi.tn",19110);

    //e.affichePers();
    //cout<<e;
    //ENSEIGNANT
    enseignant en1 (1,"Majed","Wassila","wass@pi.tn",22019);
    enseignant en2 (2,"Zouaghi","Amina","mouna@pi.tn",27319);
    enseignant en3 (3,"Ayed","Asma","souma@pi.tn",29167);

    //en.afficheEns();
    //cout<<en;
    //MATIERE
    matiere M1("15L0","RSx",4,en1);
    matiere M2("16L2","DBA",3,en2);
    matiere M3("21L1","C++",1,en3);
    matiere M4("32L2","Python",1,en1);
    matiere M5("09L1","Proba",2,en1);
    matiere M6("21L7","Stat",2,en2);
    matiere M7("10L3","MPI",6,en3);
    matiere M8("11L2","ILY",7,en1);

    //M.afficherMat();
    //cout<<M;
    //TABLE_MATIERE
    vector<matiere> Vec1;
    vector<matiere> :: iterator it1=Vec1.begin();
    Vec1.insert(it1,M1);
    Vec1.push_back(M2);
    Vec1.push_back(M3);
    Vec1.push_back(M4);
    vector<matiere> Vec2;
    vector<matiere> :: iterator it2=Vec2.begin();
    Vec2.insert(it2,M5);
    Vec2.push_back(M6);
    Vec2.push_back(M7);
    Vec2.push_back(M8);

    //Vec.insert(it+1,M2);
    //cout<<"thiiss test!!!!!!"<<endl;

    groupeModule gm1("IRM11","INFO",3, Vec1);
    groupeModule gm2("IRM12","MATHS",5, Vec2);

    //TABLE_GROUPE_MODULE
    vector <groupeModule> Vac1;
    vector <groupeModule> :: iterator ia2=Vac1.begin();
    Vac1.insert(ia2,gm1);
    Vac1.push_back(gm2);
    vector <groupeModule> Vac4;
    vector <groupeModule> :: iterator ia4=Vac4.begin();
    Vac4.insert(ia4,gm1);

    //TABLE_ETUDIANT
    vector <etudiant> Vac2;
    vector<etudiant> :: iterator ia3=Vac2.begin();
    Vac2.insert(ia3,e1);
    Vac2.push_back(e2);
    Vac2.push_back(e3);
    Vac2.push_back(e6);
    vector <etudiant> Vac3;
    vector<etudiant> :: iterator ia5=Vac3.begin();
    Vac3.insert(ia5,e4);
    Vac3.push_back(e5);

    groupe GP1("H1","1R","ING","Info",11,Vac1,Vac2);
    groupe GP2("H2","2R","ING","Meca",12,Vac4,Vac3);

    //gm.afficheGroupe();
    //cout<<gm;
    //vector<groupeModule> vic(1,gm1);
    //vector<etudiant> vac(1,e1);

    //GP.afficherGroupe();
    //cout<<"thiiss test"<<endl;
    //cout<<GP;

    //NOTES ETUDIANT E1
    note n11(M1,e1,14,"TP");
    note n12(M1,e1,13,"DS");
    note n13(M1,e1,17,"EXAMEN");
    note n14(M2,e1,16,"DS");
    note n15(M2,e1,14,"EXAMEN");
    note n16(M3,e1,17,"DS");
    note n17(M3,e1,15,"EXAMEN");
    note n18(M4,e1,16,"TP");
    note n19(M4,e1,14,"DS");
    note n20(M4,e1,14.5,"EXAMEN");
    note n21(M5,e1,15.5,"DS");
    note n22(M5,e1,12,"EXAMEN");
    note n23(M6,e1,17.5,"TP");
    note n24(M6,e1,16,"DS");
    note n25(M6,e1,16.5,"EXAMEN");
    note n26(M7,e1,15,"DS");
    note n27(M7,e1,17,"EXAMEN");
    note n28(M8,e1,12.5,"TP");
    note n29(M8,e1,14,"DS");
    note n30(M8,e1,12,"EXAMEN");
    vector <note> VNote;
    vector <note> :: iterator pp=VNote.begin();
    VNote.insert(pp,n11);
    VNote.push_back(n12);
    VNote.push_back(n13);
    VNote.push_back(n14);
    VNote.push_back(n15);
    VNote.push_back(n16);
    VNote.push_back(n17);
    VNote.push_back(n18);
    VNote.push_back(n19);
    VNote.push_back(n20);
    VNote.push_back(n21);
    VNote.push_back(n22);
    VNote.push_back(n23);
    VNote.push_back(n24);
    VNote.push_back(n25);
    VNote.push_back(n26);
    VNote.push_back(n27);
    VNote.push_back(n28);
    VNote.push_back(n29);
    VNote.push_back(n30);
    float RSxE1=moyenneRSx(n11.getNote(),n12.getNote(),n13.getNote());
    float DBAE1=moyenneDBA(n14.getNote(),n15.getNote());
    float CE1=moyenneC(n16.getNote(),n17.getNote());
    float PyE1=moyennePython(n18.getNote(),n19.getNote(),n20.getNote());
    float ProE1=moyenneProba(n21.getNote(),n22.getNote());
    float StatE1=moyenneStat(n23.getNote(),n24.getNote(),n25.getNote());
    float MPIE1=moyenneMPI(n26.getNote(),n27.getNote());
    float ILYE1=moyenneILY(n28.getNote(),n29.getNote(),n30.getNote());
    float GPIE1=moyenneGP(RSxE1,M1,DBAE1,M2,CE1,M3,PyE1,M4);
    float GPME1=moyenneGP(ProE1,M5,StatE1,M6,MPIE1,M7,ILYE1,M8);
    float MGE1=moyenneGenerale(GPIE1,gm1,GPME1,gm2);

    //NOTES ETUDIANT E2
    note n31(M1,e2,18,"TP");
    note n32(M1,e2,17.75,"DS");
    note n33(M1,e2,17,"EXAMEN");
    note n34(M2,e2,18.5,"DS");
    note n35(M2,e2,19.25,"EXAMEN");
    note n36(M3,e2,18,"DS");
    note n37(M3,e2,18,"EXAMEN");
    note n38(M4,e2,17,"TP");
    note n39(M4,e2,19,"DS");
    note n40(M4,e2,16.5,"EXAMEN");
    note n41(M5,e2,18.5,"DS");
    note n42(M5,e2,17,"EXAMEN");
    note n43(M6,e2,19.5,"TP");
    note n44(M6,e2,18,"DS");
    note n45(M6,e2,17.75,"EXAMEN");
    note n46(M7,e2,18,"DS");
    note n47(M7,e2,16,"EXAMEN");
    note n48(M8,e2,19.5,"TP");
    note n49(M8,e2,17,"DS");
    note n50(M8,e2,18,"EXAMEN");
    vector <note> VNote1;
    vector <note> :: iterator pp1=VNote1.begin();
    VNote1.insert(pp1,n31);
    VNote1.push_back(n32);
    VNote1.push_back(n33);
    VNote1.push_back(n34);
    VNote1.push_back(n35);
    VNote1.push_back(n36);
    VNote1.push_back(n37);
    VNote1.push_back(n38);
    VNote1.push_back(n39);
    VNote1.push_back(n40);
    VNote1.push_back(n41);
    VNote1.push_back(n42);
    VNote1.push_back(n43);
    VNote1.push_back(n44);
    VNote1.push_back(n45);
    VNote1.push_back(n46);
    VNote1.push_back(n47);
    VNote1.push_back(n48);
    VNote1.push_back(n49);
    VNote1.push_back(n50);
    float RSxE2=moyenneRSx(n31.getNote(),n32.getNote(),n33.getNote());
    float DBAE2=moyenneDBA(n34.getNote(),n35.getNote());
    float CE2=moyenneC(n36.getNote(),n37.getNote());
    float PyE2=moyennePython(n38.getNote(),n39.getNote(),n40.getNote());
    float ProE2=moyenneProba(n41.getNote(),n42.getNote());
    float StatE2=moyenneStat(n43.getNote(),n44.getNote(),n45.getNote());
    float MPIE2=moyenneMPI(n46.getNote(),n47.getNote());
    float ILYE2=moyenneILY(n48.getNote(),n49.getNote(),n50.getNote());
    float GPIE2=moyenneGP(RSxE2,M1,DBAE2,M2,CE2,M3,PyE2,M4);
    float GPME2=moyenneGP(ProE2,M5,StatE2,M6,MPIE2,M7,ILYE2,M8);
    float MGE2=moyenneGenerale(GPIE2,gm1,GPME2,gm2);

    //NOTES ETUDIANT E4
    note n51(M1,e4,05,"TP");
    note n52(M1,e4,08.75,"DS");
    note n53(M1,e4,07,"EXAMEN");
    note n54(M2,e4,08.5,"DS");
    note n55(M2,e4,09.25,"EXAMEN");
    note n56(M3,e4,06,"DS");
    note n57(M3,e4,07,"EXAMEN");
    note n58(M4,e4,07.5,"TP");
    note n59(M4,e4,05,"DS");
    note n60(M4,e4,06.5,"EXAMEN");
    note n61(M5,e4,07,"DS");
    note n62(M5,e4,07.25,"EXAMEN");
    note n63(M6,e4,03,"TP");
    note n64(M6,e4,02.5,"DS");
    note n65(M6,e4,05,"EXAMEN");
    note n66(M7,e4,06,"DS");
    note n67(M7,e4,06,"EXAMEN");
    note n68(M8,e4,05.75,"TP");
    note n69(M8,e4,07,"DS");
    note n70(M8,e4,06.25,"EXAMEN");
    vector <note> VNote3;
    vector <note> :: iterator pp3=VNote3.begin();
    VNote3.insert(pp3,n51);
    VNote3.push_back(n52);
    VNote3.push_back(n53);
    VNote3.push_back(n54);
    VNote3.push_back(n55);
    VNote3.push_back(n56);
    VNote3.push_back(n57);
    VNote3.push_back(n58);
    VNote3.push_back(n59);
    VNote3.push_back(n60);
    VNote3.push_back(n61);
    VNote3.push_back(n62);
    VNote3.push_back(n63);
    VNote3.push_back(n64);
    VNote3.push_back(n65);
    VNote3.push_back(n66);
    VNote3.push_back(n67);
    VNote3.push_back(n68);
    VNote3.push_back(n69);
    VNote3.push_back(n70);
    float RSxE3=moyenneRSx(n51.getNote(),n52.getNote(),n53.getNote());
    float DBAE3=moyenneDBA(n54.getNote(),n55.getNote());
    float CE3=moyenneC(n56.getNote(),n57.getNote());
    float PyE3=moyennePython(n58.getNote(),n59.getNote(),n60.getNote());
    float ProE3=moyenneProba(n61.getNote(),n62.getNote());
    float StatE3=moyenneStat(n63.getNote(),n64.getNote(),n65.getNote());
    float MPIE3=moyenneMPI(n66.getNote(),n67.getNote());
    float ILYE3=moyenneILY(n68.getNote(),n69.getNote(),n70.getNote());
    float GPIE3=moyenneGP(RSxE3,M1,DBAE3,M2,CE3,M3,PyE3,M4);
    float GPME3=moyenneGP(ProE3,M5,StatE3,M6,MPIE3,M7,ILYE3,M8);
    float MGE3=moyenneGenerale(GPIE3,gm1,GPME3,gm2);

    //NOTES ETUDIANT E5
    /*note n71(M1,e5,12,"TP");
    note n72(M1,e5,13,"DS");
    note n73(M1,e5,12.5,"EXAMEN");
    note n74(M2,e5,14,"DS");
    note n75(M2,e5,13.25,"EXAMEN");
    note n76(M3,e5,10,"DS");
    note n77(M3,e5,12.5,"EXAMEN");
    note n78(M4,e5,15.5,"TP");
    note n79(M4,e5,16,"DS");
    note n80(M4,e5,12,"EXAMEN");
    note n81(M5,e5,13,"DS");
    note n82(M5,e5,13.5,"EXAMEN");
    note n83(M6,e5,12.25,"TP");
    note n84(M6,e5,11,"DS");
    note n85(M6,e5,11.5,"EXAMEN");
    note n86(M7,e5,12,"DS");
    note n87(M7,e5,10,"EXAMEN");
    note n88(M8,e5,14.5,"TP");
    note n89(M8,e5,11,"DS");
    note n90(M8,e5,16.5,"EXAMEN");
    vector <note> VNote4;
    vector <note> :: iterator pp4=VNote4.begin();
    VNote4.insert(pp4,n71);
    VNote4.push_back(n72);
    VNote4.push_back(n73);
    VNote4.push_back(n74);
    VNote4.push_back(n75);
    VNote4.push_back(n76);
    VNote4.push_back(n77);
    VNote4.push_back(n78);
    VNote4.push_back(n79);
    VNote4.push_back(n80);
    VNote4.push_back(n81);
    VNote4.push_back(n82);
    VNote4.push_back(n83);
    VNote4.push_back(n84);
    VNote4.push_back(n85);
    VNote4.push_back(n86);
    VNote4.push_back(n87);
    VNote4.push_back(n88);
    VNote4.push_back(n89);
    VNote4.push_back(n90);
    float RSxE4=moyenneRSx(n71.getNote(),n72.getNote(),n73.getNote());
    float DBAE4=moyenneDBA(n74.getNote(),n75.getNote());
    float CE4=moyenneC(n76.getNote(),n77.getNote());
    float PyE4=moyennePython(n78.getNote(),n79.getNote(),n80.getNote());
    float ProE4=moyenneProba(n81.getNote(),n82.getNote());
    float StatE4=moyenneStat(n83.getNote(),n84.getNote(),n85.getNote());
    float MPIE4=moyenneMPI(n86.getNote(),n87.getNote());
    float ILYE4=moyenneILY(n88.getNote(),n89.getNote(),n90.getNote());
    float GPIE4=moyenneGP(RSxE4,M1,DBAE4,M2,CE4,M3,PyE4,M4);
    float GPME4=moyenneGP(ProE4,M5,StatE4,M6,MPIE4,M7,ILYE4,M8);
    float MGE4=moyenneGenerale(GPIE4,gm1,GPME4,gm2);*/


    //n.afficheNote();
    //cout<<n;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 9);
    cout<<"\t\t\t\t\t\t -------------------------------------------------- \n";
    cout<<"\t\t\t\t\t\t |                     BIENVENU                   | \n";
    cout<<"\t\t\t\t\t\t -------------------------------------------------- \n";
    cout<<endl;
    cout<<"\t\t\t\t\t\t 1-Afficher les donnees ETUDIANTS"<<endl;
    cout<<"\t\t\t\t\t\t 2-Afficher les donnees ENSEIGNANTS"<<endl;
    cout<<"\t\t\t\t\t\t 3-Afficher les donnees MATIERES"<<endl;
    cout<<"\t\t\t\t\t\t 4-Afficher les donnees GROUPE MODULE"<<endl;
    cout<<"\t\t\t\t\t\t 5-Afficher les donnees GROUPE"<<endl;
    cout<<"\t\t\t\t\t\t 6-Afficher les donnees NOTE"<<endl;
    cout<<"\t\t\t\t\t\t 7-Afficher PV de resultats"<<endl;
    SetConsoleTextAttribute(hConsole, 8);
    cout<<"\t\t\t\t\t\t ->";
    int x;
    cin>>x;
    switch(x)
    {
        case 1:
        {SetConsoleTextAttribute(hConsole, 9);
        cout<<"\t\t\t\t\t\t -------------------------------------------------- "<<endl;
        cout<<"\t\t\t\t\t\t |ID\t|NOM\t|PRENOM\t|MAIL\t\t|NumINS\t  | \n"<<endl;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<e1;
        cout<<e2;
        cout<<e3;
        cout<<e4;
        cout<<e5;
        cout<<e6;
        int x=Leave();
        switch(x)
        {
            case 1:main();
            case 2:
            SetConsoleTextAttribute(hConsole, 9);
            cout<<"\t\t\t\t\t\t Merci pour votre visite!"; break;
            default : Invalide(); main();
        }
        }break;
        case 2:
        {SetConsoleTextAttribute(hConsole, 9);
        cout<<"\t\t\t\t\t\t -------------------------------------------------- "<<endl;
        cout<<"\t\t\t\t\t\t |ID\t|NOM\t|PRENOM\t|MAIL\t\t|CNSS\t  | \n"<<endl;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<en1;
        cout<<en2;
        int x=Leave();
        switch(x)
        {
            case 1:main();
            case 2:
            SetConsoleTextAttribute(hConsole, 9);
            cout<<"\t\t\t\t\t\t Merci pour votre visite!"; break;
            default : Invalide(); main();
        }
        }break;
        case 3:
        {SetConsoleTextAttribute(hConsole, 9);
        cout<<"\t\t\t\t\t\t -------------------------------------------------- "<<endl;
        cout<<"\t\t\t\t\t\t |ID\t|NOM\t|COEF\t|ID_ENS\t|NOM_ENS\t  | \n"<<endl;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<M1;
        cout<<M2;
        cout<<M3;
        cout<<M4;
        cout<<M5;
        cout<<M6;
        cout<<M7;
        cout<<M8;
        int x=Leave();
        switch(x)
        {
            case 1:main();
            case 2:
            SetConsoleTextAttribute(hConsole, 9);
            cout<<"\t\t\t\t\t\t Merci pour votre visite!"; break;
            default : Invalide(); main();
        }
        }break;
        case 4:
        {SetConsoleTextAttribute(hConsole, 9);
        cout<<"\t\t\t\t\t\t -------------------------------------------------- "<<endl;
        cout<<"\t\t\t\t\t\t |ID\t|NOM\t|COEF\t|LISTE_MATIERE\t  | \n"<<endl;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<gm1;
        cout<<gm2;
        int x=Leave();
        switch(x)
        {
            case 1:main();
            case 2:
            SetConsoleTextAttribute(hConsole, 9);
            cout<<"\t\t\t\t\t\t Merci pour votre visite!"; break;
            default : Invalide(); main();
        }
        }break;
        case 5:
        {SetConsoleTextAttribute(hConsole, 9);
        cout<<"\t\t\t\t\t\t -------------------------------------------------- "<<endl;
        cout<<"\t\t\t\t\t\t |ID|NIV|DIPLOME|SPEC.\t|NUM_G\t|LIST_M\t|LIST_E\t  | \n"<<endl;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<GP1;
        cout<<GP2;
        int x=Leave();
        switch(x)
        {
            case 1:main();
            case 2:
            SetConsoleTextAttribute(hConsole, 9);
            cout<<"\t\t\t\t\t\t Merci pour votre visite!"; break;
            default : Invalide(); main();
        }
        }break;
        case 6:
        {SetConsoleTextAttribute(hConsole, 9);
        cout<<"\t\t\t\t\t\t -------------------------------------------------- "<<endl;
        cout<<"\t\t\t\t\t\t |ETUDIANT\t|MATIERE\t|NOTE\t|TYPE\t  | \n"<<endl;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t\t\t\t\t\t "<<e1.getNom()<<" "<<e1.getPrenom();
        cout<<VNote[0];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        int i=1;
        do
        {cout<<VNote[i].getNote()<<"\t"<<VNote[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}
        while(VNote[i].getMat().getNomMat()==VNote[i-1].getMat().getNomMat());
        cout<<"\t\t\t\t\t\t\t\t\t\t\t "<<VNote[3];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=4;
        do
        {cout<<VNote[i].getNote()<<"\t"<<VNote[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}while(VNote[i].getMat().getNomMat()==VNote[i-1].getMat().getNomMat());
        cout<<"\t\t\t\t\t\t\t\t\t\t\t "<<VNote[5];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=6;
        do
        {cout<<VNote[i].getNote()<<"\t"<<VNote[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}while(VNote[i].getMat().getNomMat()==VNote[i-1].getMat().getNomMat());
        cout<<"\t\t\t\t\t\t\t\t\t\t\t "<<VNote[7];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=8;
        do
        {cout<<VNote[i].getNote()<<"\t"<<VNote[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}while(VNote[i].getMat().getNomMat()==VNote[i-1].getMat().getNomMat());
        cout<<"\t\t\t\t\t\t\t\t\t\t\t "<<VNote[10];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=11;
        do
        {cout<<VNote[i].getNote()<<"\t"<<VNote[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}
        while(VNote[i].getMat().getNomMat()==VNote[i-1].getMat().getNomMat());
        cout<<"\t\t\t\t\t\t\t\t\t\t\t "<<VNote[12];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=13;
        do
        {cout<<VNote[i].getNote()<<"\t"<<VNote[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}while(VNote[i].getMat().getNomMat()==VNote[i-1].getMat().getNomMat());
        cout<<"\t\t\t\t\t\t\t\t\t\t\t "<<VNote[15];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=16;
        do
        {cout<<VNote[i].getNote()<<"\t"<<VNote[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}while(VNote[i].getMat().getNomMat()==VNote[i-1].getMat().getNomMat());
        cout<<"\t\t\t\t\t\t\t\t\t\t\t "<<VNote[17];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=18;
        do
        {cout<<VNote[i].getNote()<<"\t"<<VNote[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}while(VNote[i].getMat().getNomMat()==VNote[i-1].getMat().getNomMat());
        cout<<"\t\t\t\t\t\t\t\t\t\t "<<e2.getNom()<<" "<<e2.getPrenom();
        cout<<VNote1[0];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=1;
        do
        {cout<<VNote1[i].getNote()<<"\t"<<VNote1[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}
        while(VNote1[i].getMat().getNomMat()==VNote1[i-1].getMat().getNomMat());
        cout<<"\t\t\t\t\t\t\t\t\t\t\t "<<VNote1[3];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=4;
        do
        {cout<<VNote1[i].getNote()<<"\t"<<VNote1[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}while(VNote1[i].getMat().getNomMat()==VNote1[i-1].getMat().getNomMat());
        cout<<"\t\t\t\t\t\t\t\t\t\t\t "<<VNote1[5];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=6;
        do
        {cout<<VNote1[i].getNote()<<"\t"<<VNote1[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}while(VNote1[i].getMat().getNomMat()==VNote1[i-1].getMat().getNomMat());
        cout<<"\t\t\t\t\t\t\t\t\t\t\t "<<VNote1[7];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=8;
        do
        {cout<<VNote1[i].getNote()<<"\t"<<VNote1[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}while(VNote1[i].getMat().getNomMat()==VNote1[i-1].getMat().getNomMat());
        cout<<"\t\t\t\t\t\t\t\t\t\t\t "<<VNote1[10];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=11;
        do
        {cout<<VNote1[i].getNote()<<"\t"<<VNote1[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}
        while(VNote1[i].getMat().getNomMat()==VNote1[i-1].getMat().getNomMat());
        cout<<"\t\t\t\t\t\t\t\t\t\t\t "<<VNote1[12];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=13;
        do
        {cout<<VNote1[i].getNote()<<"\t"<<VNote1[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}while(VNote1[i].getMat().getNomMat()==VNote1[i-1].getMat().getNomMat());
        cout<<"\t\t\t\t\t\t\t\t\t\t\t "<<VNote1[15];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=16;
        do
        {cout<<VNote1[i].getNote()<<"\t"<<VNote1[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}while(VNote1[i].getMat().getNomMat()==VNote1[i-1].getMat().getNomMat());
        cout<<"\t\t\t\t\t\t\t\t\t\t\t "<<VNote1[17];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=18;
        do
        {cout<<VNote1[i].getNote()<<"\t"<<VNote1[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}while(VNote1[i].getMat().getNomMat()==VNote1[i-1].getMat().getNomMat());
        cout<<"\t\t\t\t\t\t\t\t\t\t "<<e4.getNom()<<" "<<e4.getPrenom();
        cout<<VNote3[0];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=1;
        do
        {cout<<VNote3[i].getNote()<<"\t"<<VNote3[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}
        while(VNote3[i].getMat().getNomMat()==VNote3[i-1].getMat().getNomMat());
        cout<<"\t\t\t\t\t\t\t\t\t\t\t "<<VNote3[3];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=4;
        do
        {cout<<VNote3[i].getNote()<<"\t"<<VNote3[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}while(VNote3[i].getMat().getNomMat()==VNote3[i-1].getMat().getNomMat());
        cout<<"\t\t\t\t\t\t\t\t\t\t\t "<<VNote3[5];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=6;
        do
        {cout<<VNote3[i].getNote()<<"\t"<<VNote3[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}while(VNote3[i].getMat().getNomMat()==VNote3[i-1].getMat().getNomMat());
        cout<<"\t\t\t\t\t\t\t\t\t\t\t "<<VNote3[7];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=8;
        do
        {cout<<VNote3[i].getNote()<<"\t"<<VNote3[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}while(VNote3[i].getMat().getNomMat()==VNote3[i-1].getMat().getNomMat());
        cout<<"\t\t\t\t\t\t\t\t\t\t\t "<<VNote3[10];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=11;
        do
        {cout<<VNote3[i].getNote()<<"\t"<<VNote3[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}
        while(VNote3[i].getMat().getNomMat()==VNote3[i-1].getMat().getNomMat());
        cout<<"\t\t\t\t\t\t\t\t\t\t\t "<<VNote3[12];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=13;
        do
        {cout<<VNote3[i].getNote()<<"\t"<<VNote3[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}while(VNote3[i].getMat().getNomMat()==VNote3[i-1].getMat().getNomMat());
        cout<<"\t\t\t\t\t\t\t\t\t\t\t "<<VNote3[15];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=16;
        do
        {cout<<VNote3[i].getNote()<<"\t"<<VNote3[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}while(VNote3[i].getMat().getNomMat()==VNote3[i-1].getMat().getNomMat());
        cout<<"\t\t\t\t\t\t\t\t\t\t\t "<<VNote3[17];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=18;
        do
        {cout<<VNote3[i].getNote()<<"\t"<<VNote3[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}while(VNote3[i].getMat().getNomMat()==VNote3[i-1].getMat().getNomMat());
        /*cout<<"\t\t\t\t\t\t\t\t\t\t "<<e5.getNom()<<" "<<e5.getPrenom();
        cout<<VNote4[0];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=1;
        do
        {cout<<VNote4[i].getNote()<<"\t"<<VNote4[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}
        while(VNote4[i].getMat().getNomMat()==VNote4[i-1].getMat().getNomMat());
        cout<<"\t\t\t\t\t\t\t\t\t\t\t "<<VNote4[3];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=4;
        do
        {cout<<VNote4[i].getNote()<<"\t"<<VNote4[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}while(VNote4[i].getMat().getNomMat()==VNote4[i-1].getMat().getNomMat());
        cout<<"\t\t\t\t\t\t\t\t\t\t\t "<<VNote4[5];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=6;
        do
        {cout<<VNote4[i].getNote()<<"\t"<<VNote4[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}while(VNote4[i].getMat().getNomMat()==VNote4[i-1].getMat().getNomMat());
        cout<<"\t\t\t\t\t\t\t\t\t\t\t "<<VNote4[7];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=8;
        do
        {cout<<VNote4[i].getNote()<<"\t"<<VNote4[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}while(VNote4[i].getMat().getNomMat()==VNote4[i-1].getMat().getNomMat());
        cout<<"\t\t\t\t\t\t\t\t\t\t\t "<<VNote4[10];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=11;
        do
        {cout<<VNote4[i].getNote()<<"\t"<<VNote4[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}
        while(VNote4[i].getMat().getNomMat()==VNote4[i-1].getMat().getNomMat());
        cout<<"\t\t\t\t\t\t\t\t\t\t\t "<<VNote4[12];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=13;
        do
        {cout<<VNote4[i].getNote()<<"\t"<<VNote4[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}while(VNote4[i].getMat().getNomMat()==VNote4[i-1].getMat().getNomMat());
        cout<<"\t\t\t\t\t\t\t\t\t\t\t "<<VNote4[15];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=16;
        do
        {cout<<VNote4[i].getNote()<<"\t"<<VNote4[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}while(VNote4[i].getMat().getNomMat()==VNote4[i-1].getMat().getNomMat());
        cout<<"\t\t\t\t\t\t\t\t\t\t\t "<<VNote4[17];
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        i=18;
        do
        {cout<<VNote4[i].getNote()<<"\t"<<VNote4[i].getType();
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
        i++;}while(VNote4[i].getMat().getNomMat()==VNote4[i-1].getMat().getNomMat());*/
        cout<<endl;
        int x=Leave();
        switch(x)
        {
            case 1:main();
            case 2:
            SetConsoleTextAttribute(hConsole, 9);
            cout<<"\t\t\t\t\t\t Merci pour votre visite!"; break;
            default : Invalide(); main();
        }
        }break;
        case 7 :
        {SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t\t\t\t\t\t\t\t\t\t ---------------------------------------------------------------------------------- "<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t |";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<"GROUPE_MODULE : "<<gm1.getNM()<<"\t\t ";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<"GROUPE_MODULE : "<<gm2.getNM()<<"\t\t";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<"  M  ";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|  ";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<"R  ";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|  ";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<"M  ";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t |-------------------------------|------------------------------|  ";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<"O  ";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|  ";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<"E  ";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|  ";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<"E  ";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"| "<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t |";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<"COEF : "<<gm1.getCoef()<<"\t\t         ";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<"COEF : "<<gm2.getCoef()<<"        \t\t";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|  ";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<"Y  ";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|  ";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<"S  ";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|  ";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<"N  ";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|"<<endl;
         cout<<"\t\t\t\t\t\t\t\t\t\t |-------------------------------|------------------------------|  ";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<"E  ";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|  ";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<"U  ";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|  ";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<"T  ";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"| ";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t |";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<gm1.listeMat[0].getNomMat();
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t |";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<gm1.listeMat[1].getNomMat();
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t|";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<gm1.listeMat[2].getNomMat();
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t|";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<gm1.listeMat[3].getNomMat();
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t |";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<gm2.listeMat[0].getNomMat();
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t |";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<gm2.listeMat[1].getNomMat();
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t|";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<gm2.listeMat[2].getNomMat();
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t|";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<gm2.listeMat[3].getNomMat();
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t|  ";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<"N  ";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|  ";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<"L  ";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|  ";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<"I  ";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"| "<<endl;
        cout<<"\t\t\t\t\t\t --------------------------------|-------|------|-------|--------|-------|------|-------|-------|  ";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<"N  ";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|  ";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<"T  ";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|  ";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<"O  ";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"| "<<endl;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t\t\t\t\t\t| ";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<" LISTE DES ETUDIANTS           ";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<gm1.listeMat[0].getCoefM();
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t |";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<gm1.listeMat[1].getCoefM();
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t|";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<gm1.listeMat[2].getCoefM();
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t|";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<gm1.listeMat[3].getCoefM();
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t |";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<gm2.listeMat[0].getCoefM();
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t |";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<gm2.listeMat[1].getCoefM();
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t|";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<gm2.listeMat[2].getCoefM();
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t|";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<gm2.listeMat[3].getCoefM();
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t|  ";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<"E  ";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|  ";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<"A  ";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|  ";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<"N  ";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"| "<<endl;
        cout<<"\t\t\t\t\t\t --------------------------------|-------|------|-------|--------|-------|------|-------|-------|--";
        cout<<"---";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|--";
        SetConsoleTextAttribute(hConsole, 9);
        cout<<"T";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"--|-----| "<<endl;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t\t\t\t\t\t| ";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<" "<<e1.nom<<"  "<<e1.prenom<<"                  ";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<setprecision (4)<<RSxE1;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t |";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<DBAE1;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<CE1;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<PyE1;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t |";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<ProE1;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t |";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<StatE1;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<MPIE1;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<ILYE1;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<MGE1;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<resultat(MGE1);
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<mention(MGE1);
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"| "<<endl;
        cout<<"\t\t\t\t\t\t --------------------------------|-------|------|-------|--------|-------|------|-------|-------|-----|-----|-----|"<<endl;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t\t\t\t\t\t| ";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<" "<<e2.nom<<"  "<<e2.prenom<<"                 ";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<setprecision (4)<<RSxE2;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t |";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<DBAE2;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<CE2;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<PyE2;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t |";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<ProE2;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t |";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<StatE2;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<MPIE2;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<ILYE2;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<MGE2;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<resultat(MGE2);
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<mention(MGE2);
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"| "<<endl;
        cout<<"\t\t\t\t\t\t --------------------------------|-------|------|-------|--------|-------|------|-------|-------|-----|-----|-----|"<<endl;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t\t\t\t\t\t| ";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<" "<<e4.nom<<"  "<<e4.prenom<<"                  ";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<setprecision (4)<<RSxE3;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t |";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<DBAE3;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<CE3;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<PyE3;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t |";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<ProE3;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t |";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<StatE3;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<MPIE3;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<ILYE3;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<MGE3;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<resultat(MGE3);
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<mention(MGE3);
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"| "<<endl;
        /*cout<<"\t\t\t\t\t\t --------------------------------|-------|------|-------|--------|-------|------|-------|-------|-----|-----|-----|"<<endl;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t\t\t\t\t\t| ";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<" "<<e5.nom<<" "<<e5.prenom<<"                ";
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<setprecision (4)<<RSxE4;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t |";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<DBAE4;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<CE4;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<PyE4;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t |";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<ProE4;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t |";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<StatE4;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<MPIE4;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<ILYE4;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"\t|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<MGE4;
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<resultat(MGE4);
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"|";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<mention(MGE4);
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"| "<<endl;*/
        cout<<"\t\t\t\t\t\t ------------------------------------------------------------------------------------------------------------------";
        cout<<endl;
        int x=Leave();
        switch(x)
        {
            case 1:main();
            case 2:
            SetConsoleTextAttribute(hConsole, 9);
            cout<<"\t\t\t\t\t\t Merci pour votre visite!"; break;
            default : Invalide(); main();
        }
        }break;
        default : Invalide(); main();






    }
    /*vector<groupeModule> tabModule;
    if (x==0) Invalide();
    else

        for(int i=0; i<x; i++)
    {groupeModule h;
     SetConsoleTextAttribute(hConsole, 9);
    cout<<"\t\t\t\t\t\t -------------------------------------------------- \n";
    cout<<"\t\t\t\t\t\t |                  Groupe_Module_No"<<i+1<<"             | \n";
    cout<<"\t\t\t\t\t\t -------------------------------------------------- \n";
    cout<<endl;
    tabModule[i]=h.saisirGM();
    cout<<"finish";
    cout<<tabModule[i];
    }*/






}
