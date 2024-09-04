//using constructore or without constructor

#include<iostream>
using namespace std;

class InFun{

    public:

    int a;
    int b;

    // InFun(int a_, int b_)
    // {
        // a = a_;
        // b = b_;
    // }

        inline int Mul()
        {
            return a*b;
        } 

        inline int Cub()
        {
            return a*a*a;
        }

    // void Show()
    // {
        // cout<<"Multiplication: "<< a <<" , "<<b<<" = "<<Mul()<<endl;
        // cout<<"cub: "<< a <<" , "<<a<<" , " <<a<<" , "<<" = "<<Mul()<<endl;

    // }


};

    int main()
    {

        // InFun data(2,4);
            InFun data;
            data.a =2;
            data.b =4;

            cout<<"Multiplication: "<< data.a <<" , "<<data.b<<" = "<< data.Mul() <<endl;
            cout<<"cub: "<< data.a <<" , "<< data.a <<" , " << data.a <<" , "<<" = "<< data.Mul() <<endl;


        // data.Show();

        return 0;
    }