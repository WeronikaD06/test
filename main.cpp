#include <iostream>
using namespace std;
int main() {
    double waga, wzrost, BMI;
    cout<<"Witaj! Czas obliczyć Twoje BMI!!!"<<endl;
    cout<<"Jak gruby jesteś? (podaj w kilogramach)"<<endl;
    cin>>waga;
    cout<<"Ile masz cm bydlaka? (podaj w metrach)"<<endl;
    cin>>wzrost;
    BMI=waga/(wzrost*wzrost);
    cout<<"Twoje BMI wynosi: "<<BMI<<endl;
    cout<<"Twoja diagnoza: ";
    if(!isnan(BMI)){
        if (BMI<=0)
            cout<<"Błąd. Sprawdź jeszcze raz!"<<endl;
        if ((BMI>0)&&(BMI<16)) cout<<"wygłodzenie"<<endl;
        if ((BMI>=16)&&(BMI<17)) cout<<"wychudzenie"<<endl;
        if ((BMI>=17)&&(BMI<18.5)) cout<<"niedowaga"<<endl;
        if ((BMI>=18.5)&&(BMI<25)) cout<<"pożądana masa ciała"<<endl;
        if ((BMI>=25)&&(BMI<30)) cout<<"nadwaga"<<endl;
        if ((BMI>=30)&&(BMI<35)) cout<<"gruby"<<endl;
        if ((BMI>=35)&&(BMI<40)) cout<<"bardzo gruby"<<endl;
        if (BMI>40) cout<<"gruby w chuj"<<endl;
    }

    return 0;
}

