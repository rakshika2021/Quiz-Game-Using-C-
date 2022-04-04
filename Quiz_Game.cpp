#include<iostream>
using namespace std;
int main()
{char option;
 char c;
 int finalresult=0;
 int playquiz(void);
 finalresult= playquiz();
 if(c=='s'||c=='S')
 {
 cout<<"Your total score is: "<<finalresult<<endl;
 
 if(finalresult>=6)
 {
     cout<<" Congratulations you have passed the quiz!!!!!!"<<endl;
     cout<<" Do You Want To Play again? 'Y' or 'N'"<<endl;
     char playAgain;
     cin>>playAgain;
     if(playAgain== 'Y' || playAgain=='Y')
     {playquiz();}
 }
 else
 {cout<<"oops!!! Better Luck Next tIME!"<<endl;}
 }
}
int playquiz()
{int score=0;
char option;
char c;
    cout<<"________welcome to Quiz Game__________"<<endl;
    cout<<"Please followw the instructions given below"<<endl;
    cout<<"Step 1: Quiz contains total 10 questions"<<endl;
    cout<<"step 2: you will be awarded 1 marks for each right answer"<<endl;
    cout<<"step 3:There will be no negative marking"<<endl;
    cout<<"step 4: please press s to start the quiz"<<endl;
    cout<<"step 5:please select your answer with given options (a), (b), (c), (d)"<<endl;
    cout<<"step 6: if youb will score>=6, then you have passed the quiz"<<endl;
    
    cin>>c;
    if(c=='s'|| c=='S'){
    cout<<"What is the capital of india"<<endl;
    cout<<"(a) Delhi (b) Mumbai (c) Kolkate (d) Chennai"<<endl;
    cin>>option;
    cout << '\a';
    if(option=='a' || option=='A')
    {
        score=score+1;
    }
    else
    {
        score=score+0;
    }
    cout<<"Who is the prime minister of india"<<endl;
    cout<<"(a) Kehriwal (b) Nmarendra Modi (c) YOGI Adityanath (d) Nitin Gadkari"<<endl;
    cin>>option;
    cout << '\a';
    if(option=='b' || option=='B')
    {
        score=score+1;
    }
    else
    {
        score=score+0;
    }
        cout<<"Which is the national Bird of india"<<endl;
    cout<<"(a) Peacock (b) Sparrow (c) Pigeon (d) Parrot"<<endl;
    cin>>option;
    cout << '\a';
    if(option=='a' || option=='a')
    {
        score=score+1;
    }
    else
    {
        score=score+0;
    }
        cout<<"Which amaong the following is the national animal of india"<<endl;
    cout<<"(a) zebra (b) leopard (c) lion (d) Tiger"<<endl;
    cin>>option;
    cout << '\a';
    if(option=='d' || option=='D')
    {
        score=score+1;
    }
    else
    {
        score=score+0;
    }
        cout<<"What is the name of the national flower of india"<<endl;
    cout<<"(a) Lily (b) Rose (c) Lotus (d) Gladia"<<endl;
    cin>>option;
    cout << '\a';
    if(option=='c' || option=='C')
    {
        score=score+1;
    }
    else
    {
        score=score+0;
    }
        cout<<"Who is the chief minister of Uttar Pradesh"<<endl;
    cout<<"(a) Kehriwal (b) Nmarendra Modi (c) YOGI Adityanath (d) Nitin Gadkari"<<endl;
    cin>>option;
    cout << '\a';
    if(option=='c' || option=='C')
    {
        score=score+1;
    }
    else
    {
        score=score+0;
    }
        cout<<"What is the capital of "<<endl;
    cout<<"(a) Lucknow (b) Delhi (c) bihar (d) patna"<<endl;
    cin>>option;
    cout << '\a';
    if(option=='a' || option=='A')
    {
        score=score+1;
    }
    else
    {
        score=score+0;
    }
        cout<<"Who is the leader of congress"<<endl;
    cout<<"(a) Rahul (b) Roshan (c) Soddi (d) Nitin Gadkari"<<endl;
    cin>>option;
    cout << '\a';
    if(option=='a' || option=='A')
    {
        score=score+1;
    }
    else
    {
        score=score+0;
    }
        cout<<"Which of the ollowing states comes in north region"<<endl;
    cout<<"(a) Delhi (b) Banglore (c) chennai (d) Kerala"<<endl;
    cin>>option;
    cout << '\a';
    if(option=='b' || option=='B')
    {
        score=score+1;
    }
    else
    {
        score=score+0;
    }
    
}
else{
cout<<'\a';
    cout<<"You have enter invalid character again to play quiz";}
    return score;
    
}
