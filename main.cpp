#include <iostream>
#include <string.h>

using namespace std;

void AfisareNumar (char v[11]){
    strrev(v);
    cout<<v;
}

void Baza10in16 (int n){
    char caractere[16] = {'1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'}, numar[11] = {0};

    cout<<numar[1];

    while(n>0){
        n-=1;

        for(int i=0;i<=9;i++){
            if(cont[i] == 15){cont[i] = 0;}
        }

        for(int i=0;i<=9;i++){
            if(numar[i]!='F'){
                    numar[i] = caractere[cont[i]];
                    cont[i]++;
                    break;
            }
            else{
                numar[i]='0';
            }
        }
    }
    AfisareNumar(numar);
}

int main()
{
int n;
cin>>n;
Baza10in16(n);
}




