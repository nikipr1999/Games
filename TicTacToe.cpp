#include<iostream>
#include<stdlib.h>
using namespace std;
int status();
void block();
int t=7,player=1;
char box[10]={'0','1','2','3','4','5','6','7','8','9'};
int main()
{
    int value;
    char mark[2]={'X','O'};
    do
    {

        block();
        if(status()==-1)
       {
            player=(player==1)?2:1;
         while(1){
            cout<<"\n\tPlayer "<<player<<" turn, Enter the box number : ";
            cin>>value;
            if(box[value]!='X'&&box[value]!='O')
                {
                    box[value]=mark[player-1];
                    break;
                }
            else
            {
                cout<<"\n\t Sorry this box is already filled";
            }


        }
       }
       else if(status()==1)
       {
           cout<<"\n\n\t\t PLAYER "<<player <<" WON\n\n";
           return 0;
       }
       else
       {
           cout<<"\n\n\t\tIT IS A DRAW MATCH";
           return 0;
       }


    }while(1);
    return 0;
}

void block()
{
    system("CLS");
        cout<<"\n\n\t\t"<<"TIC TAC TOE \n\n";
        cout<<"\tPlayer 1 : \'X\' \t Player 2 : \'O\'\n\n\n";
        cout<<"\t"<<"\t"<<"|"<<"\t"<<"\t"<<"|"<<"\t\n";
        cout<<"\t"<<box[1]<<"\t"<<"|"<<"\t"<<box[2]<<"\t"<<"|"<<"\t"<<box[3]<<"\n";
        cout<<"\t"<<"\t"<<"|"<<"\t"<<"\t"<<"|"<<"\t\n";
        cout<<"\t-----------------------------------\n";
        cout<<"\t"<<"\t"<<"|"<<"\t"<<"\t"<<"|"<<"\t\n";
        cout<<"\t"<<box[4]<<"\t"<<"|"<<"\t"<<box[5]<<"\t"<<"|"<<"\t"<<box[6]<<"\n";
        cout<<"\t"<<"\t"<<"|"<<"\t"<<"\t"<<"|"<<"\t\n";
        cout<<"\t-----------------------------------\n";
        cout<<"\t"<<"\t"<<"|"<<"\t"<<"\t"<<"|"<<"\t\n";
        cout<<"\t"<<box[7]<<"\t"<<"|"<<"\t"<<box[8]<<"\t"<<"|"<<"\t"<<box[9]<<"\n";
        cout<<"\t"<<"\t"<<"|"<<"\t"<<"\t"<<"|"<<"\t\n\n\n";

}

int status()
{
    //if status returns 0 means it is draw
    //if status returns 1 means the last player won
    //if status returns -1 means the game needs to be continued
    int i,left_box=0;
    for(i=1;i<=9;i+=3)
    {
        if(box[i]==box[i+1]&&box[i]==box[i+2])
            return 1;
    }
    for(i=1;i<=3;i++)
    {
        if(box[i]==box[i+3]&&box[i]==box[i+6])
            return 1;
    }
    if(box[1]==box[5]&&box[1]==box[9])
        return 1;
    if(box[3]==box[5]&&box[3]==box[7])
        return 1;

    for(i=1;i<=9;i++)
    {
        if(box[i]==int(i));
        {
            left_box=1;
            break;
        }
    }
    if(left_box==0)
        return 0;
    else
        return -1;
}
