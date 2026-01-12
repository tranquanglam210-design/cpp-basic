#include<iostream>
#include <cstdlib> // Thư viện để dùng hàm rand() và srand()
#include <ctime>   // Thư viện để dùng hàm time()


using namespace std;

int main()
{
    srand(time(0));
    long keo,bua,bao,mt,ban,solan;
    bool win=false;
    mt=rand()%3+1;




    cout<<"Tro choi oan tu ti "<<endl;
    cout<<"1.keo"<<endl;
    cout<<"2.bua"<<endl;
    cout<<"3.bao"<<endl;
    cout<<"luu y :chon so tu 1 den 3 thoi "<<endl;
    cout<<"chon nhanh khong thay bung dai bay gio"<<endl;

    do{

        cout<<"ban chon: ";
        cin>>ban;
        cout<<endl;


        cout<<" ban chon: ";
        if(ban==1)cout<<"keo"<<endl;
        else if(ban==2)cout<<"bua"<<endl;
        else if (ban>3||ban<1){
cout<<"m dua thay day a,chon so tu 1-3 thoi"<<endl;
           cout<<" chon lai di thang ngu "<<endl;
           }
        else cout<<"bao"<<endl;



        cout<<"may tinh chon: ";
        if (ban>3||ban<1){
            cout<<"choi ban vay bro,t doi bay gio"<<endl;
            cout <<"chon han hoi di bro";
        }
        else if(mt==1)cout<<"keo"<<endl;
        else if(mt==2)cout<<"bua"<<endl;
        else cout<<"bao"<<endl;
        solan++;
    if(ban==mt)cout<<"draw"<<endl;
   else if ((ban == 1 && mt== 3) ||
               (ban == 2 && mt == 1) ||
               (ban == 3 && mt== 2))
               {
                   cout<<"ban thang sau "<<solan<<" lan choi"<<endl;
                   win=true;
               }
               else if (ban>3||ban<1)cout <<endl<<" chon nhanh!"<<endl;
    else cout<<"ban thua"<<endl;
    }
    while (!win);

 return 0;
}
