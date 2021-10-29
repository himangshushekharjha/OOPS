#include<bits/stdc++.h>
using namespace std;

class Complex{
    int real, img;
    //Constructor must be public
    public:
    static int cnt;
    Complex(){
        cout<<"Hello from complex class "<<endl;
    }
    Complex(int real, int img){
        this->real = real;
        this->img = img;
    }
    friend ostream& operator<<(ostream&,Complex&);
    friend istream& operator>>(istream&,Complex&);
};

//Intialization of static data members is necessary
int Complex::cnt = 1;

// Friend functions used for operator overloading and capable of accessing private members.
ostream& operator<<(ostream& cout, Complex& c){
    cout<<c.real<<" + "<<c.img<<"i"<<endl;
    return cout;
}

istream& operator>>(istream& cin, Complex& c){
    cin>>c.real>>c.img;    
    return cin;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        int real,img;
        Complex obj;
        cin>>obj;
        // Complex obj = new Complex(real,img);
        cout<<Complex::cnt<<") "<<obj;
        Complex::cnt++;
    }
    return 0;
}