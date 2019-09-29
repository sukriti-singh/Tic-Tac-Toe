#include <iostream>
using namespace std;
char a[3][3]= {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char player='X';
void draw()                           /* for displaying the matrix*/
{
    int i,j;
    cout<<"Tic Tac Toe"<<endl;
    for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
           {cout<<a[i][j]<<' ';
           }
           cout<<endl;
     }

}
void input()                           /* for inputting the number which is to be replaced*/
{
    char n;
    cin>>n;
    if( a[0][0] == n)
        a[0][0]= player;
    else if( a[0][1] == n)
        a[0][1]= player;
    else if( a[0][2] == n)
        a[0][2]= player;
    else if( a[1][0] == n)
        a[1][0]= player;
    else if( a[1][1] == n)
        a[1][1]= player;
    else if( a[1][2] == n)
        a[1][2]= player;
    else if( a[2][0] == n)
        a[2][0]= player;
    else if( a[2][1] == n)
        a[2][1]= player;
    else if( a[2][2] == n)
        a[2][2]= player;
}
void toggleplayer()                   /* for changing the player after every turn*/
{
     if(player=='X')
        player='O';
     else
        player='X';
}
int winner()                          /* for checking the winner*/
{
     if(a[0][0]=='X' && a[0][1]=='X' && a[0][2]=='X')
         {
         return 1;
         }
     else if(a[1][0]=='X' && a[1][1]=='X' && a[1][2]=='X')
         {
         return 2;
         }
     else if(a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='X')
        {
         return 3;
        }
     else if(a[0][0]=='X' && a[1][0]=='X' && a[2][0]=='X')
         {
         return 4;
         }
     else if(a[1][0]=='X' && a[1][1]=='X' && a[1][2]=='X')
         {
         return 5;
         }
     else if(a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='X')
         {
         return 6;
         }
     else if(a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X')
         {
         return 7;
         }
     else if(a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='X')
         {
         return 8;
         }

     if(a[0][0]=='O' && a[0][1]=='O' && a[0][2]=='O')
       {
         return 9;
       }
     else if(a[1][0]=='O' && a[1][1]=='O' && a[1][2]=='O')
       {
         return 10;
       }
     else if(a[2][0]=='O' && a[2][1]=='O' && a[2][2]=='O')
       {
         return 11;
       }
     else if(a[0][0]=='O' && a[1][0]=='O' && a[2][0]=='O')
       {
         return 12;
       }
     else if(a[1][0]=='O' && a[1][1]=='O' && a[1][2]=='O')
       {
         return 13;
       }
     else if(a[2][0]=='O' && a[2][1]=='O' && a[2][2]=='O')
       {
         return 14;
       }
     else if(a[0][0]=='O' && a[1][1]=='O' && a[2][2]=='O')
       {
         return 15;
       }
     else if(a[0][2]=='O' && a[1][1]=='O' && a[2][0]=='O')
       {
         return 16;
       }
}

int main()
{
   draw();
   while(1)                             /* while(1) is an infinite loop*/
   {
     input();
     draw();
     toggleplayer();
     int s=winner();
     if(s==1 || s==2 || s==3 || s==4 || s==5 || s==6 || s==7 || s==8)
     {
        cout<<"Hurray! Player X wins!";
        break;
     }
     if(s==9 || s==10 || s==11 || s==12 || s==13 || s==14 || s==15 || s==16)
     {
        cout<<"Hurray! Player O wins!";
        break;

     }

   }

   return 0;
}

