
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <chrono>
using namespace std;

int main(int argc, char** argv)
{
    if( argc>1)
    {

        string failas;
        failas=argv[1];
        ifstream fd;
        fd.open(failas);
         stringstream p;
       p<<fd.rdbuf();
       string z1, z2;
       int mini=9999999, maxi=-99999999, vidsuma=0, kiekis=0, kartai=0;
       int poros=0;
       while (!p.eof())
       {
           kiekis=0;
           p>>z1>>z2;


           int g = 31;
    int hasha=1;
    int hashaa=1;
    int hash1=2;
    int hash11=2;
    int a=z1.length();
    int aa=z2.length();
    string k, kk;
     clock_t start, end;
        start = clock();
    for(int t=a-1; t>=0;t--)
    {
        k=k+z1[t];
        kk=kk+z2[t];
    }

    for(int i=0;i<a;i++)
    {
        hasha=g*hasha+int(z1[i]);
        hashaa=g*hashaa+int(z2[i]);
    }



   stringstream tikrinimas;
   stringstream tikrinimass;
   tikrinimas<<hex<<hasha;
   tikrinimass<<hex<<hashaa;
   string legit;
   string legitt;
   legit = tikrinimas.str();
   legitt = tikrinimass.str();
  // cout<<endl<<legit;
    for(int i=0;i<8;i++)
    {
        if(legit[i]==legitt[i])
        {
            kiekis++;
        }
    }
  int ilgis = legit.length();
    for(int i=0;i<a;i++)
    {
        hash1=g*hash1+int(k[i]);
        hash11=g*hash11+int(kk[i]);
    }

   // cout<<hex<<hasha;

   if(ilgis!=8)
   {
       int kiek = 8-ilgis;
       //for(int y=0;y<kiek;y++)
         //   cout<<"0";
   }
   //cout<<hex<<hashaa;
   if(ilgis!=8)
   {
       int kiek = 8-ilgis;
       //for(int y=0;y<kiek;y++)
           // cout<<"0";
   }


   // cout<<hex<<hash1;
    stringstream tikrinimas1;
    stringstream tikrinimas11;
   tikrinimas1<<hex<<hash1;
   tikrinimas11<<hex<<hash11;
   string legit1;
   string legit11;
   legit1 = tikrinimas1.str();
   legit11 = tikrinimas11.str();

    ilgis = legit1.length();
    for(int i=0;i<8;i++)
    {
        if(legit1[i]==legit11[i])
        {
            kiekis++;
        }
    }
    if(ilgis!=8)
   {
       int bruhh = 8-ilgis;
      // for(int y=0;y<bruhh;y++)
       // cout<<"0";
   }

  //  cout<<hex<<hash11;
    if(ilgis!=8)
   {
       int bruhh = 8-ilgis;
       //for(int y=0;y<bruhh;y++)
      //  cout<<"0";
   }
  // cout<<endl;
        if(hasha==hashaa && hash1==hash11)
        {
            poros++;
        }
         end = clock();
        double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
       // cout <<" Hashinti uztruko: "<< time_taken<< " s"<<endl;

        if(kiekis<mini)
        {
            mini=kiekis;
        }
        if(kiekis>maxi)
        {
            maxi=kiekis;
        }
        vidsuma+=kiekis;
        kartai++;

       }
      // cout<<endl<<"Mažiausiai sutampanciu simboliu: "<<mini<<endl;
      // cout<<"Daugiausiai sutampanciu simboliu: "<<maxi<<endl;
       int procentai;
       procentai = ((vidsuma / kartai)*100)/16;
      // cout<<"Procentinis vidurkinis simboliu sutapimas: "<<procentai<<endl;
      cout<<poros<<endl;
    //string s=p.str();
    //string k;
    //s=p.str();

    }
    else if( argc==1)
    {
        cout<<"Veskite simbolius: "<<endl;
        string s;
       cin>>s;
    string k;
    int g = 31;
    int hasha=1;
    int hash1=2;
    int a=s.length();
    for(int t=a-1; t>=0;t--)
        k=k+s[t];
    for(int i=0;i<a;i++)
        hasha=g*hasha+int(s[i]);


   stringstream tikrinimas;
   tikrinimas<<hex<<hasha;
   string legit;
   legit = tikrinimas.str();
  // cout<<endl<<legit;

  int ilgis = legit.length();
    for(int i=0;i<a;i++)
        hash1=g*hash1+int(k[i]);
    cout<<hex<<hasha;
   if(ilgis!=8)
   {
       int kiek = 8-ilgis;
       for(int y=0;y<kiek;y++)
            cout<<"0";
   }
    cout<<hex<<hash1;
    stringstream tikrinimas1;
   tikrinimas1<<hex<<hash1;
   string legit1;
   legit1 = tikrinimas1.str();

    ilgis = legit1.length();
    if(ilgis!=8)
   {
       int bruhh = 8-ilgis;
       for(int y=0;y<bruhh;y++)
        cout<<"0";
   }

    }


    return 0;
}
