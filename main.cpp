#include <iostream>
#include <queue>

using namespace std;

void showq(queue<int> gq)
{
    queue<int> g = gq;
    while (!g.empty()) {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}

int main()
{
    queue<int> arrival;
    bool busy = false;
    int delay = 0;
    int numCustomer = 0;
    int x =0;
    int maximum =0;
    while(maximum<=5){
        if(arrival.size()==0){
            delay = 0;
            ++numCustomer;
            arrival.push(++x);
            maximum++;

            cout << "delay user "<< numCustomer <<": "<< delay<<endl;
            cout << "busy: " << busy<<endl;
            busy = true;
        }
        else if(arrival.size()>0){
            ++delay ;
            ++numCustomer;
            busy = true;
            arrival.push(++x);
            maximum++;
            cout << "delay user "<< numCustomer <<": "<< delay<<endl;
            cout << "busy: " << busy<<endl;
        }
         if(arrival.size()==5){
            cout<<"error server is full"<<endl;
            cout << "busy: " << busy<<endl;
            break;
        }

    }
    return 0;
}
