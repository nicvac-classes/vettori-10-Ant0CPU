#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, i;
    float Svoti, media;

    do{
        cout<<"Inserire il numero di studenti"<<endl;
        cin>>n;
    } while (n<=0);

    vector<string>nomi(n);
    vector<float>voti(n);
    vector<int>crediti(n);

    i=0;
    while (i<n) {
        cout<<"Inserire il nome dello studente"<<endl;
        cin>>nomi[i];
        
        cout<<"Inserire la valutazione dello studente"<<endl;
        cin>>voti[i];
        
        cout<<"Inserire il numero di crediti acquisiti dallo studente"<<endl;
        cin>>crediti[i];

        i=i+1;
    }

    Svoti=0;
    for (i=0; i<n; i++) {
        Svoti=Svoti+voti[i];
    }
    media=Svoti/n;

    i=0;
    while (i<n) {
        if (voti[i]>media and crediti[i]>=6) {
            cout<<"Lo studente "<<nomi[i]<<", ha conseguito una valutazione maggiore della media e dei crediti formativi maggiori di sei"<<endl;
        }
        i=i+1;
    }
}