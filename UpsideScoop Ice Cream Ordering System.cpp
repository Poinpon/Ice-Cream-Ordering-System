#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>

using namespace std;

char error(char);
char flavorError(char);
char toppingError(char);
string cupError(string);
char sizeError(char);

int main()
{
    char answer,flavor,size,topping;
    std::string cup;

    float toppingPrice,sizeMultiplier,flavorPrice,cupPrice;

    cout<<"Do you want to start the program? (Y/N)"<<endl;
    cout<<"Answer: ";
    cin>> answer;

    answer = error (answer);

    {
        if (toupper(answer) == 'Y')
        {
            cout<<"\nWelcome to Upside Scoop"<<endl;
            cout<<"+-------------------------+"<<endl;
            cout<<"|                         |"<<endl;
            cout<<"| Please choose a Flavor  |"<<endl;
            cout<<"|                         |"<<endl;
            cout<<"|  Chocolate - C          |"<<endl;
            cout<<"|                         |"<<endl;
            cout<<"|  Strawberry - S         |"<<endl;
            cout<<"|                         |"<<endl;
            cout<<"|  Vanilla - V            |"<<endl;
            cout<<"|                         |"<<endl;
            cout<<"+-------------------------+"<<endl;
            cout<<"\nChoice: ";
            cin>>flavor;
            
            flavor = flavorError(flavor);

            flavorPrice = 2;

            cout<<"+-------------------------+"<<endl;
            cout<<"|                         |"<<endl;
            cout<<"| Please choose a Topping |"<<endl;
            cout<<"|                         |"<<endl;
            cout<<"|  Oreo - O               |"<<endl;
            cout<<"|                         |"<<endl;
            cout<<"|  KitKat - K             |"<<endl;
            cout<<"|                         |"<<endl;
            cout<<"|  Marshmallow - M        |"<<endl;
            cout<<"|                         |"<<endl;
            cout<<"|  No Topping - N         |"<<endl;
            cout<<"|                         |"<<endl;
            cout<<"+-------------------------+"<<endl;
            cout<<"\nChoice: ";
            cin>>topping;

            topping = toppingError (topping);

            
                if (toupper(topping) == 'O')
                {
                    toppingPrice = 1.5;
                }

                else if (toupper(topping) == 'K')
                {
                    toppingPrice = 2.5;
                }

                else if (toupper(topping) == 'M')
                {
                    toppingPrice = 2;
                }

                else if (toupper(topping) == 'N')
                {
                    toppingPrice = 0;
                }
            
            cout<<"\nPlease choose (Cup - CUP) or (Cone - CONE)"<<endl;
            cout<<"\nChoice: ";
            cin>> cup;

            cup = cupError (cup);
            
                if (cup == "CUP")
                {
                    cupPrice = 2;
                }

                else if (cup == "CONE")
                {
                    cupPrice = 1;
                }

            cout<<"+-------------------------+"<<endl;
            cout<<"|                         |"<<endl;
            cout<<"| Please choose a Size    |"<<endl;
            cout<<"|                         |"<<endl;
            cout<<"|  Small - S              |"<<endl;
            cout<<"|                         |"<<endl;
            cout<<"|  Regular - R            |"<<endl;
            cout<<"|                         |"<<endl;
            cout<<"|  Large - L              |"<<endl;
            cout<<"|                         |"<<endl;
            cout<<"+-------------------------+"<<endl;
            cout<<"\nChoice: ";
            cin>>size;

            size = sizeError (size);

            
                if (toupper(size) == 'S')
                {
                    sizeMultiplier = 1.1;
                }

                else if (toupper(size) == 'R')
                {
                    sizeMultiplier = 1.15;
                }

                else if (toupper(size) =='L')
                {
                    sizeMultiplier = 1.2;
                }

            float TotalPrice (float,float,float,float);

            cout<<"\nYour total price is RM"<<TotalPrice (flavorPrice,toppingPrice,sizeMultiplier,cupPrice)<<endl;
            cout<<"Thank you for using our system";

            return 0;
        }

        else if (toupper(answer) == 'N')
        cout<<"\nThank you please come again";
        return 0;
    }
}

float TotalPrice (float flavorP,float toppingP,float sizeM,float cupP)
{
    float sum;
    sum = (flavorP + toppingP + cupP) * sizeM;
    return sum;
}

char error (char answer)
{

    while (toupper(answer) != 'Y' && toupper(answer) != 'N')
    {
        cout<<"error" << endl;
        cout<<"Enter Y or N" << endl;
        cout<<"Answer: ";
        cin>> answer;
    }
    return answer;
}

char flavorError (char flavor)
{

    while (toupper(flavor) != 'C' && toupper(flavor) != 'S' && toupper(flavor) != 'V')
    {
        cout<<"error" << endl;
        cout<<"Enter C S or N" << endl;
        cout<<"Choice :";
        cin>> flavor;
    }
    return flavor;
}

char toppingError (char topping)
{

    while (toupper(topping) != 'O' && toupper(topping) != 'K' && toupper(topping) != 'M' && toupper(topping) !='N')
    {
        cout<<"error" << endl;
        cout<<"Enter O K M or N" <<endl;
        cout<<"Choice :";
        cin>> topping;
    }
    return topping;
}

string cupError (string cup)
{

    while (cup != "CUP" && cup != "CONE")
    {
        cout<<"error" << endl;
        cout<<"Enter CUP or CONE" <<endl;
        cout<<"Choice :";
        cin>> cup;
    }
    return cup;
}

char sizeError (char size)
{

    while (toupper(size) != 'S' && toupper(size) != 'R' && toupper(size) != 'L')
    {
        cout<<"error" << endl;
        cout<<"Enter S R or L" <<endl;
        cout<<"Choice :";
        cin>>size ;
    }
    return size;
}
