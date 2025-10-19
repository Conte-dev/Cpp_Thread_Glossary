#include<iostream>
#include<thread>
using namespace std;

void CreaThread(){                        
    cout<<"secondo thread in esecuzione \n";
}
int main(){
    thread t(CreaThread);
    cout<<"primo rthread in esecuzione \n";
    t.join();  //aspetta che il thread creato dalla funzione finisca l'esecuzione
    cout<<"secondo thread terminato \n";
    return 0; 
}


