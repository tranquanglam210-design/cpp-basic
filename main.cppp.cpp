#include<iostream>
#include <cstdlib> // Thư viện để dùng hàm rand() và srand()
#include <ctime>   // Thư viện để dùng hàm time()

using namespace std;

int main(){
    srand(time(0));
    long sobimat,sobatki,solanthu;
    sobimat=rand()%1000+1;

    cout<<"Tro choi doan so "<<endl;
    cout<<"nhap mot so bat ki tu 1 den 1000"<<endl;
do{
        cout<<"nhap so ban doan: ";
    cin>>sobatki;
    solanthu++;
if (sobatki>sobimat)cout<<"qua cao"<<endl;
if(sobatki<sobimat)cout<<"qua thap"<<endl;
if (sobatki==sobimat)cout<<"chuc mung ban da doan dung voi "<<solanthu<<" lan thu"<<endl<<"        end game     ";
}
while (sobatki!=sobimat);

return 0;
}
