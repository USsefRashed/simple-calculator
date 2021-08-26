#include<iostream>
#include"cal.h"
using namespace std;
int main()
{
        char cho;
        Calculator c;
        shape s;
        cout<<"\n\n\t\t================Welcome================\n\n\t================Choose Type================\n\n\tNumbers--press-->('n')\n\tShapes--press-->('s')\n\tExit--press-->('e')\n";
        do
        {
                cin>>cho;
                if(cho=='e')
                break;
                switch (cho)
                {
                        case 's':{ s.Shapechoice();break;}
                        case 'n':{c.operation();break;}
                        default:
                        {
                        cout<<"Invalid choice\n";break;
                        }
                }
        } while (cho!='s'&&cho!='n'&&cho!='e');
}