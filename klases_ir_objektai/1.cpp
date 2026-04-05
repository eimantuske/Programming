#include <iostream>
#include <string>

using namespace std;

class car {
    public:
        string brand;
        string model;
        int year;
        string rida;
        void info();
        int speed(int maxspeed);
        car() {
            cout<<"hello world "<<endl;
        }

};

void car::info() {
    cout<<"Sios masinos "<<brand<<" : "<<rida<<endl;
}

int car::speed(int maxspeed) {
    return maxspeed;
}

int main(){
    car masina;


    masina.brand = "Toyota";
    masina.model = "Camry";
    masina.year = 2020;
    masina.rida = "500k";

    cout<<"============"<<endl;

    cout<<"Brand : "<<masina.brand<<endl;
    cout<<"Model : "<<masina.model<<endl;
    cout<<"Year : "<<masina.year<<endl; 
    
    cout<<"============"<<endl;

        masina.info();

    cout<<"============"<<endl;

    cout<<"Max speed : "<<masina.speed(240)<<" km/h"<<endl;

    cout<<"============"<<endl;

    car masina2;



    return 0;
}