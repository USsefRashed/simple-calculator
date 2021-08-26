#include<iostream>
using namespace std;
class Product{
    private:
    char ans;
    int size=0;
    double series[0],prod=0;
    public:
    void getInput()
    {
        cout<<"How many numbers U want to product them??"<<endl;
        try
        {
            cin>>size;
            if(size==0)
            {throw "it must be more than 0\n press 'e' to exit program\tpress'c' to continue \n";}
        setSeries();
        cout<<pro();
        }
        catch(const char*msg)
        {
            do
            {
            cout<< msg<< '\n';
            cin>>ans;
            if(ans=='e'){break;}
            else if(ans=='c'){cout<<"How many numbers U want to product them??\n";cin>>size;setSeries();cout<<"product = "<<pro();}
            else{cout<<"invalid value try again\n";}
            } while ((size==0)&&(ans!='e'&&ans!='c'));
        }
        
    
    }        
    void setSeries()
    {
        for(int i=0;i<=size;i++)
        {
    cout<<"Enter "<<i+1<<" number"<<endl;
            cin>>series[i];
        }
        for(int i=1;i<=size;i++)
        {
            prod*=series[i];
        }
        
    }
    double pro()
    {
    return prod;
    }

};