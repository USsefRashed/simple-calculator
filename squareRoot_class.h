#include<iostream>
#include<cmath>
using namespace std;
class SquareRoot
{
    private:
    char ans;
    int size=0;

    double series[0],sqr=0, sq[0];
    public:
    
    void getInput()
    {
        cout<<"How many numbers U want to squareRoot them??"<<endl;
            try
            {
            cin>>size;
                if(size==0){throw "it must be more than 0\n press 'e' to exit program\tpress'c' to continue \n";}
            setSeries();
            squareRoot();
            }
        catch(const char*msg)
        {
            do
            {
               cout<< msg<< '\n';
                cin>>ans;
                    if(ans=='e'){break;}
                    else if(ans=='c')
                    {
                    cout<<"How many numbers U want to squareRoot them??\n";cin>>size;
                    setSeries();
                    squareRoot();
                    }
                    else{cout<<"invalid value try again\n";}
            } while ((size==0)&&(ans!='e'&&ans!='c'));
        }
        
    
    }        
    void setSeries()
    {
        
        for(int i=0;i<=size;i++)
        {
           cout<<"Enter "<<i+1<<" number"<<endl;cin>>series[i];
        }
        for(int i=1;i<=size;i++)
        {
            sq[i]=sqrt(series[i]);
        }
        
    }
  void squareRoot()
    {
        for(int i=1;i<=size;i++)
        {
             cout<<"sqrt "<<i<<"= "<<sq[i]<<endl;
        }
    }

};