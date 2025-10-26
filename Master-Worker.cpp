#include<iostream>
#include<thread>
#include<chrono>
#include<vector>
#include<mutex>

struct Task{
    int id;
    Task(int i=0)id(i){}
};
struct Worker{
    int id,
    std::vectorTask>&coda
    std::mutex&mtx
    bool& fine;
    std::thread t;
    Worker(int i, std::vector<Task>& m, bool& f):id(i),coda(c),mtx(m),finito(f){}
    
    void inizio(){
        t=std::thread(&Worker::lavoro, this);
    }
    void coda(){
        while(true){
            Task task(0);
            bool trovato=false;
                                                             
        mtx.lock();                                        //Inizio impostazione coda
        if(!coda.empty()){
        task=coda.front();
        trovato=true;
        
        }
    }
};