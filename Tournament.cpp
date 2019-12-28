#include<bits/stdc++.h>
using namespace std;
class Player
{
    public:
        string Name ;
        static int no_of_players;
        int player_id;
        int Rating;
        int Tempo;
        int Points;
        Player()
        {
            Tempo=0;
            Points=0;
        }
        void Display()
        {
            cout<<"Name:"<<Name<<endl<<"Player id:"<<player_id<<endl<<"Rating:"<<Rating<<endl<<"Tempo:"<<Tempo<<endl<<"Points:"<<Points;
        }
};

class Tournament
{
   public:
        vector <Player*> table;
        int Number_Players;
        int Number_Matches;
        string Name; //Tournament Name
        Tournament(string abc){
            Name = abc;
            Number_Players=0;
    }
    void AddPlayers()
    {
        char prompt='y';
        while(prompt=='y' || prompt=='Y')
        {
            Player* temp;
            temp= new Player();
            cout<<"\n Enter Player name:";
            cin>>(*temp).Name;
            cout<<"\n Enter Player rating:";
            cin>>(*temp).Rating;
           (*temp).player_id = ++Number_Players;
            (*temp).Display();
            table.push_back(temp);
            
        cout<<"Do you want to add new player[y/n]"<<endl;
        cin>>prompt;
        system("clear");
        }
        cout<<"Do you want to review[y/n]";
        cin>>prompt;
        if(prompt=='y' || prompt=='Y')
        {
            Display();
        }
    }
    void Display()
    {
        system("clear");
        cout<<"NAME:"<<Name<<"\n\n";
        int i=Number_Players;
        while(i--)
        {
            cout<<"PLAYER ID:"<<(*table[Number_Players-i -1]).player_id<<endl;
            cout<<"PLAYER NAME:"<<(*table[Number_Players-i -1]).Name<<endl;
            cout<<"POINTS:"<<(*table[Number_Players-i -1]).Points<<endl;
            cout<<"RATING:"<<(*table[Number_Players-i -1]).Rating<<endl;
            cout<<"TEMPO:"<<(*table[Number_Players-i -1]).Tempo<<endl;
            cout<<endl<<endl;
        }
        getchar();
        system("clear");
        char prompt;
        cout<<"for delete press D, for adding players press A, for saving press S";
        if(prompt=='D' || prompt=='d')
        {
           // delete();
        }
        if(prompt=='A' || prompt=='a')
        {
            AddPlayers();
        }
    }
};
int main()
{   
    string Tournament_Name;
    cout<<"Add Tournament Name"<<"\n";
    cin>>Tournament_Name;
    Tournament Obj1(Tournament_Name);
    Obj1.AddPlayers();
}
