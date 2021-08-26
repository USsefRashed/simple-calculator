#include<iostream>
using namespace std;
class Square{
    private:
    double length;
    public:
    
        void getSqrDimensions()
        {
            try{
                cout<<"Enter the length\n";
                cin>>length;
                area();
                if(length==0.0){throw "length must be more than 0\n";}
                }
            catch(const char* msg)
                {
                do
                {
                cout<<msg<<endl;
                cout<<"Renter the length"<<endl;
                cin>>length;
                }while(length==0.0);area();
                }
        }            
          
  void area()
  {
      cout<<"Square Area"<<length<<"^2"<<length*length<<endl;
  }
};