
#include<iostream>
using namespace std;
class Sub{
    private:
    char ans;
    int size=0;
    double series[0],minus=0;
    public:
     
    void getInput()
    {
        cout<<"How many numbers U want to subtract them??"<<endl;
        try
        {
            cin>>size;
            if(size==0)
            {throw "it must be more than 0\n press 'e' to exit program\tpress'c' to continue \n";}
        setSeries();
        cout<<sub();
        }
        catch(const char*msg)
        {
            do
            {
            cout<< msg<< '\n';
            cin>>ans;
                if(ans=='e'){break;}
                else if(ans=='c'){cout<<"How many numbers U want to subtract them??\n";cin>>size;setSeries();cout<<"sub = "<<sub();}
                else{cout<<"invalid value try again\n";}
            } while ((size==0)&&(ans!='e'&&ans!='c'));
        }
        
    
    }        
    void setSeries()
    {
        for(int i=1;i<=size;i++)
        {
    cout<<"Enter "<<i<<" number"<<endl;
            cin>>series[i];
        }
        for(int i=1;i<=size;i++)
        {
            minus-=series[i];
        }
        
    }
double sub()
    {
    return minus;
    }   

};