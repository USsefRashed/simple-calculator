#include<iostream>
using namespace std;
class Sort{
    private:
    char ans;
    int size=0;
    double series[0];
    public:
    
    void getInput()
    {
        cout<<"How many numbers U want to sort them??"<<endl;
        try
        {
            cin>>size;
            if(size==0)
            {throw "it must be more than 0\n press 'e' to exit program\tpress'c' to continue \n";}
        bubleSortArray();
        cout<<seriesDis();
        }
        catch(const char*msg)
        {
            do
            {
            cout<< msg<< '\n';
            cin>>ans;
                if(ans=='e'){break;}
                else if(ans=='c'){cout<<"How many numbers U want to sort them??\n";cin>>size;bubleSortArray();cout<<"sum = "<<seriesDis();}
                else{cout<<"invalid value try again\n";}
            } while ((size==0)&&(ans!='e'&&ans!='c'));
        }
        
    
    }        
void bubleSortArray( ){
    for(int i=0;i<=size-1;i++)
    for(int g=size-1;i<g;g--)
    if(series[g]<series[g-1])
    swap(series[g],series[g-1]);
    }
    double seriesDis()
    {
        for(int i=0;i<=size;i++)
        {return series[i];}
    }

};