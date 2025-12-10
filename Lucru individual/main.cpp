#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct Tara {
    char nume[50];
    char capitala[50];
    char continent[50];
    long long suprafata;
    long long locuitori;
};

int main() {
    ifstream fin("in.txt");
    if (!fin) {
        cout << "Eroare: Fisierul in.txt nu a fost gasit!" << endl;
        return 1;
    }

    ofstream foutBin("Tara.dat", ios::binary);

    int n;
    fin >> n;

    Tara temp;
    cout << "Se citeste din in.txt si se scrie in Tara.dat..." << endl;

    for(int i = 0; i < n; i++) {
        fin >> temp.nume >> temp.capitala >> temp.continent >> temp.suprafata >> temp.locuitori;

        foutBin.write((char*)&temp, sizeof(Tara));
    }

    fin.close();
    foutBin.close();

    ifstream finBin("Tara.dat", ios::binary);
    if (!finBin) {
        cout << "Eroare la deschiderea fisierului binar!" << endl;
        return 1;
    }

    Tara tari[100];
    int count = 0;

    while(finBin.read((char*)&temp, sizeof(Tara))) {
        tari[count] = temp;
        count++;
    }
    finBin.close();

    ofstream foutTxt("out.txt");
    char capitalaCautata[50];

    cout << "Introduceti capitala cautata: ";
    cin >> capitalaCautata;


    foutTxt << "1. Cautare dupa capitala '" << capitalaCautata << "':" << endl;
    bool gasit = false;
    for(int i = 0; i < count; i++) {

        if(strcmp(tari[i].capitala, capitalaCautata) == 0) {
            foutTxt << "Tara: " << tari[i].nume << ", Continent: " << tari[i].continent << endl;
            gasit = true;
        }
    }
    if(!gasit) {
        foutTxt << "Nu a fost gasita tara cu aceasta capitala." << endl;
    }
    foutTxt << endl;


    long long maxSuprafata = tari[0].suprafata;
    for(int i = 1; i < count; i++) {

        if(tari[i].suprafata > maxSuprafata) {
            maxSuprafata = tari[i].suprafata;
        }
    }

    foutTxt << "2. Tari cu suprafata maxima (" << maxSuprafata << " km2):" << endl;
    for(int i = 0; i < count; i++) {

        if(tari[i].suprafata == maxSuprafata) {
            foutTxt << "- " << tari[i].nume << endl;
        }
    }
    foutTxt << endl;

    for(int i = 0; i < count - 1; i++) {

        for(int j = 0; j < count - i - 1; j++) {

            if(tari[j].locuitori < tari[j+1].locuitori) {
                Tara aux = tari[j];
                tari[j] = tari[j+1];
                tari[j+1] = aux;
            }
        }
    }

    foutTxt << "3. Tari ordonate descrescator dupa locuitori:" << endl;
    for(int i = 0; i < count; i++) {
        foutTxt << tari[i].nume << " - " << tari[i].locuitori << " locuitori" << endl;
    }

    foutTxt.close();
    cout << "Prelucrarea a fost finalizata! Verificati fisierul 'out.txt'." << endl;

    return 0;
}