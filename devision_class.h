#include<iostream>
using namespace std;
class Devision
{
    private:
    char ans;
    int size=0;
    double num1,num2;
    public:
    void getInput()
    {
            cout<<"Enter 2 numbers to devision\nEnter the first number\n";cin>>num1;
            try
            {
                cout<<"Enter the second numeber\n";cin>>num2;
                if(num2==0){throw "Maths error! :can't devide by 0\n press('e')to exit program\t||\tpress('c')to continue";}
            }
        catch(const char* msg)
        {
            do
            {
                cout<< msg<< '\n';
                cin>>ans;
                if(ans=='e'){break;}
                else if(ans=='c')
                {
                    cout<<"Enter the second numeber\n";cin>>num2;
                    cout<<num1<<" / "<<num2<<" = "<<dev()<<endl;
                }
                else{cout<<"invalid value try again\n";}
            } while ((num2==0)&&(ans!='e'&&ans!='c'));

        }
    }
    
    double dev()
    {
    return num1/num2;
    }

};