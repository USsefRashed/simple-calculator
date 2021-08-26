#include<iostream>
using namespace std;
class Rectangle
{
    public:

        double length=0.0;
        double width=0.0;
            void getDimensions()
            {
                try{
                cout<<"Enter the length\n";cin>>length;
                if(length==0.0){throw "length must be more than 0\n";}

                }catch(const char* msg)
                {
                    do{
                    cout<<msg<<endl;

                    cout<<"Renter the length"<<endl;
                    cin>>length;
                    }while(length==0.0);
                }
                try{
                cout<<"Enter the width\n";cin>>width;
                if(width==0.0){throw "width must be more than 0\n";}
                }catch(const char* msg)
                {
                    do{
                    cout<<msg<<endl;
                    cout<<"Renter the width"<<endl;
                    cin>>width;
                    }while(width==0.0);
                }
            area();
            }
void area()
{
cout<<"Rectangle Area="<<length<<" * "<<width<<" = "<<length*width<<"squared area";
}
};
