#include<iostream>
#include <cmath>
#include"add_class.h"
#include"sub_class.h"
#include"multiply_class.h"
#include"squareRoot_class.h"
#include"devision_class.h"
#include"sort_class.h"
#include"rectangle.h"
#include"square.h"
using namespace std;

class Calculator:public SquareRoot,Add,Sub,Devision,Sort,Product
{
    private:
    char op;
    public:
    void operation()
    {
     cout<<"\n\n\t============choose operation============\n\n\tAdd--press-->('a')\n\tSubtract--press-->('s')\n\tproduction--press-->('p')\n\tDvision--press-->('d')\n\tSort--press-->('o')\n\tSquareRoot--press-->('q')\n\tExit--press-->('e')\n";
     do
     {
        cin>>op;
        if(op=='e'){break;}
        switch (op)
        {
            case 'a':{Add a; a.getInput();break;}
            case 's':{Sub s; s.getInput();break;}
            case 'p':{Product p; p.getInput();break;}
            case 'd':{Devision d; d.getInput();break;}
            case 'o':{Sort o; o.getInput();break;}
            case 'q':{SquareRoot sq; sq.getInput();break;}
            default:
            {cout<<"Invalid choice\n";break;}
        }

      } while (op!='s'&&op!='a'&&op!='q'&&op!='p'&&op!='d'&&op!='o');
    }
};
class shape:public Square,Rectangle
{
    private:
    char ch;
    public:
    void Shapechoice()
    {
        cout<<"\n\n\t============choose operation============\n\n\tRectangle--press-->('r')\n\tSquare--press-->('s')\n\tExit--press-->('e')";
      do
        {
          cin>>ch;
            if(ch=='e'){break;}
            switch (ch)
            {
                case 's':{Square x; x.getSqrDimensions();break;}
                case 'r':{Rectangle r;r.getDimensions();break;}

                default:{cout<<"Invalid choice\n";break;}
            }
        } while (ch!='s'&&ch!='r');
    }
};