#include<iostream>
using namespace std;

int main(){
    system("clear");
    int n;
    cin >> n;
    
    for(int i=1;i<=n;i++){
        
        
        for(int j=1;j<i;j++){
            cout << "*";
            

        }
        cout <<endl;
        
    }
    
    for(int i = 1;i<=n;i++){
        
        for(int j=n-i+1; j>=1;j--){
            
        
            cout << "*";
            

        }
        cout << endl;
    }
}