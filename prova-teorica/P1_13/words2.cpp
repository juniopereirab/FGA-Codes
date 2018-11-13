#include <fstream>

using namespace std;

int words(const char *in){
    ifstream scan;
    scan.open(in);

    if(!scan.is_open()){
        return -1;
    }

    int cont = 0;
    char aux = ' ';
    string mens = "";

    while(!scan.eof()){
        scan.get(aux);

        if(aux == ' ' || aux == '\n'){
            cont++;
            mens = "";
        }
        else{
            mens += aux;
        }
    }

    scan.close();
    return cont;
}