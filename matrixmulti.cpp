using namespace std;
#include <iostream>

int main(){
    cout << "---------------------------------------------------------------" << endl;
    cout << "Give Matrix dimension: ";
    int h;
    cin >> h;
    cout << "---------------------------------------------------------------" << endl;
   int a[h][h];
   int b[h][h];
   int c[h][h];

   int d;
   int f;

    for(int i=0; i<h; i++){
        for(int j=0; j<h; j++){ 
            cout<<"Write a["<<i<<"]["<<j<<"] --->  ";
            cin>>d;
            a[i][j] = d;
        }
    }
    
    cout << "---------------------------------------------------------------" << endl;
    cout << "Matrix a " << endl;
    
    for(int r = 0; r < h; r++){
        for(int y = 0; y < h; y++){
            cout << a[r][y] << " ";
        }
        cout << "\n";
    }

    cout << "---------------------------------------------------------------" << endl;
    
    for(int i=0; i<h; i++){
        for(int j=0; j<h; j++){ 
            cout<<"Write b["<<i<<"]["<<j<<"] --->  ";
            cin>>f;
            b[i][j] = f;
        }
    }
    
    cout << "---------------------------------------------------------------" << endl;
    cout << "Matrix b " << endl;
    
    for(int r = 0; r < h; r++){
        for(int y = 0; y < h; y++){
            cout << b[r][y] << " ";
            c[r][y] = 0;
        }
        cout << "\n";
    }

    
    for(int x=0; x<h; x++){
    	for(int z=0; z<h; z++){
            for(int t = 0; t < h; t++)
                c[z][x] = c[z][x] + a[z][t]*b[t][x];
            }

    }

    cout << "---------------------------------------------------------------" << endl;    
        
    cout << "Matrix a*b " << endl;
    
     for(int r = 0; r < h; r++){
        for(int y = 0; y < h; y++){
            cout << c[r][y] << " ";
        }
        cout << "\n";
    }
    
    cout << "---------------------------------------------------------------" << endl;
    
  return 0;
}