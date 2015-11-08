#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x=0, y=0, i=0;
    bool rev=0;
    string dir;
    cin>>dir;
    cout<<"(x0,y0)=\n";
    cin>>x>>y;
    while(dir[i]=='<' || dir[i]=='>' || dir[i]=='^' || dir[i]=='v' || dir[i]=='~')
    {
        switch(dir[i])
        {
            case '<':
                {
                    if(rev)
                        x++;
                    else
                        x--;
                    break;
                }
            case '>':
                {
                    if(rev)
                        x--;
                    else
                        x++;
                    break;
                }
            case '^':
                {
                    if(rev)
                        y++;
                    else
                        y--;
                    break;
                }
            case 'v':
                {
                    if(rev)
                        y--;
                    else
                        y++;
                    break;
                }
            case '~':
                 rev = 1-rev;
        }
        i++;
    }
    cout<<"(x,y)=("<<x<<','<<y<<")\n";
}
