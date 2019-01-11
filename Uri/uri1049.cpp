#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
  string a;
  string b;
  string c;

  string vert = "vertebrado";
  string ave = "ave";
  string carn = "carnivoro";
  string oni = "onivoro";
  string mamifero = "mamifero";
  string herb = "herbivoro";
  string inver = "invertebrado";
  string inseto = "inseto";
  string hema = "hematofago";
  string ane = "anelideo";
  cin >> a;
  cin >> b;
  cin >> c;



  if(a == vert){
    if(b == ave){
      if(c == carn){
        cout << "aguia" << endl;
      }
      if(c == oni){
        cout << "pomba" << endl;
      }
    }
    if(b == mamifero){
      if(c == oni){
        cout << "homem" << endl;
      }
      if(c == herb){
        cout << "vaca" << endl;
      }
    }
  }

  if(a == inver){
    if(b == inseto){
      if(c == hema){
        cout << "pulga" << endl;
      }
      if(c == herb){
        cout << "lagarta" << endl;
      }
    }
    if(b == ane){
      if(c == hema){
        cout << "sanguessuga" << endl;
      }
      if(c == oni){
        cout << "minhoca" << endl;
      }
    }
  }

  return 0;
}
