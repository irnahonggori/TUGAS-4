#include <iostream>

using namespace std;
int main()
{
    bool adatukar;
    int x[100],i=0,j,temp,n;

    cout<<"banyak data : ";
    cin>>n;
    while (i<n)
        {
            cout<<"masukkan data ke-"<<i+1<<": ";
            cin>>x[i];
            i++;
        }


    adatukar=true;
    i=1;
    while (i<n && adatukar)
    {
        j=1;
        adatukar=false;
        while (j<=(n-1))
        {
            if (x[j-1] > x[j])
            {
                adatukar=true;
                temp=x[j-1];
                x[j-1]=x[j];
                x[j]=temp;
            }
            j++;
        }
        i++;
    }
    i=0;
    cout<<endl<<endl;
    cout<<"data urut : ";
    while (i<n)
    {
       cout<<x[i]<<", " ;
       i++;
    }


    return 0;
}
