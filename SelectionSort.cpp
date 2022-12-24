#include<iostream>

using namespace std;

class Selection{
    private:
    int n,i,j,temp;
    int arr[7];
    public:

    void getData()
    {

    cout<<"Enter Total Number of Days"<<endl;
    cin>>n;


    for(i=0; i<n; i++)
    {
        cout<<"Enter Days "<<i+1<<endl;
        cin>>arr[i];
    }
    }

    void sorted()
    {
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            }
    }
    }

    void print()
    {
    for(i=0; i<n; i++)
    {
        cout<<"I have sorted in this way, The last bigger day would be probably hard working "<<arr[i]<<endl;

    }
}
};

int main()
{
    Selection n;
    n.getData();
    n.sorted();
    n.print();

    return 0;
}


