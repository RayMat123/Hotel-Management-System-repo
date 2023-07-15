#include <iostream>

using namespace std;

int main()
{
    int quant;//quant = quantity
    int choice;
    //Quantity
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
    //food items sold
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
    //Total price of items
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;

    cout<<"\n\t Quantity of items available";
    cout<<"\n Rooms available: ";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta: ";
    cin>>Qpasta;
    cout<<"\n Quantity of burger: ";
    cin>>Qburger;
    cout<<"\n Quantity of noodles: ";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake: ";
    cin>>Qshake;
    cout<<"\n Quantity of chcicken: ";
    cin>>Qchicken;

    m:
    cout<<"\n\t\t\t Please select from the menu options ";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burger";
    cout<<"\n4) Noodles";
    cout<<"\n5) Shake";
    cout<<"\n6) Chicken";
    cout<<"\n7) Information regarding sales and collection";
    cout<<"\n8) Exit";

    cout<<"\n\n Please enter your choice: ";
    cin>>choice;

    switch(choice){
        case 1:
            cout<<"\n\n Enter the number of rooms you want: ";
            cin>>quant;

            if(Qrooms-Srooms >= quant){
                Srooms = Srooms + quant;
                Total_rooms = Total_rooms + quant * 1200;
                cout<<"\n\n\t\t"<<quant<<" room/rooms have been alloted to you!";
            }
            else
                cout<<"\n\tOnly"<<Qrooms-Srooms<<"Rooms remaining in hotel.";
                break;

             case 2:
            cout<<"\n\n Enter pasta quantity: ";
            cin>>quant;

            if(Qpasta-Spasta >= quant){
                Spasta = Spasta + quant;
                Total_pasta = Total_pasta + quant * 250;
                cout<<"\n\n\t\t"<<quant<<" pasta is the order!";
            }
            else
                cout<<"\n\tOnly"<<Qpasta-Spasta<<"Pasta remaining in hotel.";
                break;

            case 3:
            cout<<"\n\n Enter burger quantity: ";
            cin>>quant;

            if(Qburger-Sburger >= quant){
                Sburger = Sburger + quant;
                Total_burger = Total_burger + quant * 120;
                cout<<"\n\n\t\t"<<quant<<" burger is the order!";
            }
            else
                cout<<"\n\tOnly"<<Qpasta-Spasta<<"Burgers remaining in hotel.";
                break;

            case 4:
            cout<<"\n\n Enter noodles quantity: ";
            cin>>quant;

            if(Qnoodles-Snoodles >= quant){
                Snoodles = Snoodles + quant;
                Total_noodles = Total_noodles + quant * 140;
                cout<<"\n\n\t\t"<<quant<<" noodles is the order!";
            }
            else
                cout<<"\n\tOnly"<<Qnoodles-Snoodles<<"Noodles remaining in hotel.";
                break;

            case 5:
            cout<<"\n\n Enter shakes quantity: ";
            cin>>quant;

            if(Qshake-Sshake >= quant){
                Sshake = Sshake + quant;
                Total_shake = Total_shake + quant * 120;
                cout<<"\n\n\t\t"<<quant<<" shakes is the order!";
            }
            else
                cout<<"\n\tOnly"<<Qshake-Sshake<<"Shakes remaining in hotel.";
                break;

            case 6:
            cout<<"\n\n Enter chicken quantity: ";
            cin>>quant;

            if(Qchicken-Schicken >= quant){
                Schicken = Schicken + quant;
                Total_chicken = Total_chicken + quant * 150;
                cout<<"\n\n\t\t"<<quant<<" chicken is the order!";
            }
            else
                cout<<"\n\tOnly"<<Qchicken-Schicken<<"Chickn remaining in hotel.";
                break;

            case 7:
            cout<<"\n\t\tDetails of sales and collection:";
            cout<<"\n\nNumber of rooms we had: "<<Qrooms;
            cout<<"\n\nNumber of rooms we gave for rent: "<<Srooms;
            cout<<"\n\nRemaining rooms: "<<Qrooms-Srooms;
            cout<<"\n\nTotal rooms collection for the day: "<<Total_rooms;

            cout<<"\n\nNumber of Pasta we had: "<<Qpasta;
            cout<<"\n\nNumber of Pasta we sold: "<<Spasta;
            cout<<"\n\nRemaining Pasta: "<<Qpasta-Spasta;
            cout<<"\n\nTotal Pasta collection for the day: "<<Total_pasta;

            cout<<"\n\nNumber of Burgers we had: "<<Qburger;
            cout<<"\n\nNumber of Burgers we sold: "<<Sburger;
            cout<<"\n\nRemaining Burgers: "<<Qburger-Sburger;
            cout<<"\n\nTotal Burgers collection for the day: "<<Total_burger;

            cout<<"\n\nNumber of Noodles we had: "<<Qnoodles;
            cout<<"\n\nNumber of Noodles we sold: "<<Snoodles;
            cout<<"\n\nRemaining Noodles: "<<Qnoodles-Snoodles;
            cout<<"\n\nTotal Noodles collection for the day: "<<Total_noodles;

            cout<<"\n\nNumber of Shakes we had: "<<Qshake;
            cout<<"\n\nNumber of Shakes we sold: "<<Sshake;
            cout<<"\n\nRemaining Shakes: "<<Qshake-Sshake;
            cout<<"\n\nTotal Shakes collection for the day: "<<Total_shake;

            cout<<"\n\nNumber of Chicken we had: "<<Qchicken;
            cout<<"\n\nNumber of Chicken we sold: "<<Schicken;
            cout<<"\n\nRemaining Chicken: "<<Qchicken-Schicken;
            cout<<"\n\nTotal Chicken collection for the day: "<<Total_chicken;

            case 8:
            exit(0);

            default:
                cout<<"\nPlease select the numbers mentioned above!";
    }
    goto m;


}
