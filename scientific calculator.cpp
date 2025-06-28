#include<iostream>
#include<cmath>
#include<windows.h>
 using namespace std;
  void show_calculator()
  {
   cout<<"______________________________"<<endl;
    cout<<"___                        ___"<<endl;
    cout<<"_        SCIENTIFIC          _"<<endl;
    cout<<"_        CALCULATOR          _"<<endl;
    cout<<"___                        ___"<<endl;
    cout<<"______________________________"<<endl;
    cout<<"   +      |    -      |   *   "<<endl;
    cout<<"  add     | subtract  | multiply"<<endl;
    cout<<"______________________________"<<endl;
    cout<<"    /     |    m      |  l        "<<endl;
    cout<<"  divide  |   mode    | log         "<<endl;
    cout<<"_______________________________"<<endl;
    cout<<"   s      |   c       |  t        "<<endl;
    cout<<"  square  |  cos      | tan         "<<endl;
    cout<<"_______________________________"<<endl;
    cout<<"   s      |   c       |  t        "<<endl;
    cout<<"  sin     |   cos     | tan         "<<endl;
    cout<<"_______________________________"<<endl;
    cout<<"   r      |    k      |  .        "<<endl;
    cout<<"  sq root |  clear    |  close        "<<endl;
    cout<<"_______________________________"<<endl;
}
void display_output(double answer)
{ 
    cout<<"______________________________"<<endl;
    cout<<"___                ___________"<<endl;
    cout<<"_   CURRENT       | "<<answer<<endl;
    cout<<"_   OUTPUT IS:    |___________"<<endl;
    cout<<"___                        ___"<<endl;
    cout<<"______________________________"<<endl;
    cout<<"   +      |    -      |   *   "<<endl;
    cout<<"  add     | subtract  | multiply"<<endl;
    cout<<"______________________________"<<endl;
    cout<<"    /     |    m      |  l        "<<endl;
    cout<<"  divide  |   mode    | log         "<<endl;
    cout<<"_______________________________"<<endl;
    cout<<"   s      |   c       |  t        "<<endl;
    cout<<"  square  |  cos      | tan         "<<endl;
    cout<<"_______________________________"<<endl;
    cout<<"   S      |   C       |  t        "<<endl;
    cout<<"  sin     |   cos     | tan         "<<endl;
    cout<<"_______________________________"<<endl;
    cout<<"   r      |    k      |  .        "<<endl;
    cout<<"  sq root |  clear    |  close        "<<endl;
    cout<<"_______________________________"<<endl;
}
    
  int main ()
  {
    double num1 = 0.0;
     double num2 = 0.0;
    double answer = 0.0;
    char inp = '\n';
    bool converter = 0;
    //show_calculator();
    while(inp !=  '.'){
       if(converter == 1)//if we want to display output
       {//we take 1 input
        display_output(answer);
        cout<<"enter:";
        cin>>inp;
        if(inp == '+' || inp == '-' || inp == '*' || inp == '/' || inp == 'm' || inp == 'p'){
          num1 = answer;
          cout<<"enter num1 :";
          cin>>num1;
          cout<<"enter num2 :";
          cin>>num2;
         }
         else if(inp == 'k' || inp == '.'){

         }
         else{
          num1 = answer;}

       }
       else{
        //if we want to show basic calculator
        //we take 2 inputs
        show_calculator();
         cout<<"enter :";
         cin>>inp;
         if(inp == '+' || inp == '-' || inp == '*' || inp == '/' || inp == 'm' || inp == 'p'){
          num1 = answer;
          cout<<"enter num1 :";
          cin>>num1;
          cout<<"enter num2 :";
          cin>>num2;
         }
         else if(inp == 'k' || inp == '.'){

         }
         else{
          cout<<"enter num1 :";
          cin>>num1;
         }
         converter = 1;

       }
       
       switch(inp)
       {
        case '+':
        answer = num1 + num2;
        break;
         case '-':
        answer = num1 - num2;
        break;
         case '*':
        answer = num1 * num2;
        break;
         case '/':
        answer = num1 / num2;
        break;
         case 'm':
        answer =int(num1) % int(num2);
        break;
         case 'l':
        answer = log(num1);
        break;
         case 's':
        answer = num1 * num1;
        break;
         case 'c':
        answer = num1 * num1 * num1;
        break;
         case 'p':
        answer =pow(num1,num2);
        break;
         case 'S':
        answer = sin(num1);
        break;
         case 'C':
        answer =cos(num1);
        break;
         case 't':
        answer =tan(num1);
        break;
         case 'r':
        answer =sqrt(num1);
        break;
         case '.': 
        break;
         case 'k':
        converter = 0;
        break;
        default:
        cout<<"~~invalid value~~"<<endl;

        
       }
       system("cls");
       
       
    
      }
    return 0;

  }