#include <iostream>

using namespace std;

int main()
{
    int k,z,nk,nz,nb;
    nz=0;
    cout << "teclea el tamanio del Rombo que quieres" << endl;
    cin >> nk;

    for (k=1; k<=nk; k+=2){
        nz=(nk-k)/2;

        for (z=1; z<=nk; z++){
            if (z<=nz || z>nz+k){
                cout << " ";
            }else{
                cout << "*";
                }
        }
        cout << endl;
    }

    if ((nk%2)!=0){
    nk=nk-2;
    }else{
    nk=nk-3;
    }

    for (k=nk; k>=1; k-=2){
        nz=(nk-k)/2;

        for (z=nk; z>=0; z--){
            if (z<=nz-1 || z>nz+k-1){
                cout << " ";
            }else{
                cout << "*";
                }
        }
        cout << endl;
    }
    return 0;
}
