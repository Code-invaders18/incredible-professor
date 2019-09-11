#include<iostream>
#include<list>
using namespace std;

class graph
{
    int V;
    list<int> *l;
public:
    graph(int v)
    {
        V=v;
       //here we are considering array of linked list
        l= new list<int>[v];
    }
    void addedge(int u,int v,bool bidir=true)
    {
        l[u].push_back(v);
        if(bidir)
        {
            l[v].push_back(u);
        }
    }
    void print()
    {
        for(int i=0;i<V;i++)
        {
            cout<<i<<"-->";
            //l[i] is a linked list
            for(int vertex:l[i])
            {
               cout<<vertex<<",";
            }
            cout<<endl;
        }
    }
};
int main()
{
    graph g(5);
    g.addedge(0,1);
    g.addedge(0,4);
    g.addedge(4,3);
    g.addedge(1,4);
    g.addedge(1,2);
    g.addedge(2,3);
    g.print();
    return 0;


}
