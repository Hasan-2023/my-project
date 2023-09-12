#include<bits/stdc++.h>
using namespace std;

float  add()
{
    int n ;
    float sum = 0;
    cout<<"Enter how many values you want to add"<<endl;
    cin>>n;

    int arr[n];

    cout<<"Enter your "<<n<<" values "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"You have Entered these values "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
    cout<<endl;
}

float substrc()
{
    int n1,  n2;
    float substript;
    float mins =0 , pertive = 0;

    cout<<"Enter How many minus value you want to calculate " <<endl;
    cin>>n1;

    int arr1[n1];

    cout<<"Enter "<<n1<<" number of values "<<endl;
    for(int i=0; i<n1; i++)
    {
        cin>>arr1[i];
    }

    cout<<"You have typed these values "<<endl;
    for(int i=0;i<n1; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    cout<<"Enter how many pertive value you want to calculate "<<endl;
    cin>>n2;

    int arr2[n2];

    cout<<"Enter your "<<n2<<" numbers values "<<endl;
    for(int i=0; i<n2; i++)
    {
        cin>>arr2[i];
    }

    cout<<"You have typed these number of values" <<endl;
    for(int i=0; i<n2; i++)
    {
        cout<<arr2[i]<<" ";
    }

    cout<<"Your total values of minus is: "<<endl;
    for(int i=0; i<n1; i++)
    {
        mins = mins + arr1[i];
    }
    cout<<mins<<endl;

    cout<<"Your total value of perptive is: "<<endl;
    for(int i=0; i<n2; i++)
    {
        pertive = pertive + arr2[i];
    }

    cout<<pertive<<endl;

    substript = mins - pertive;
    return substript;
     cout<<endl;

}
 float multiplication()
 {
     int mul = 1;
     int n;
     cout<<"Enter how many value you want to calculate" <<endl;
     cin>>n;

     int arr[n];

     cout<<"Enter your "<<n<<"numbers values"<<endl;
     for(int i=0; i<n; i++)
     {
         cin>>arr[i];
     }
     cout<<"You have typed these values: "<<endl;
     for(int i=0; i<n; i++)
     {
         cout<<arr[i]<<" ";
     }

     for(int i=0; i<n; i++)
     {
         mul = mul *arr[i];
     }
     return mul;
     cout<<endl;

 }

 float division()
 {
     float n1, n2,n3;

     cout<<"Enter your 1st value"<<endl;
     cin>>n1;
     cout<<"Enter your 2nd value"<<endl;
     cin>>n2;

     n3 = n1/n2;
     return n3;
     cout<<endl;
 }

 float remaind()
 {
     int  n1, n2, n3;

     cout<<"Enter your 1st value"<<endl;
     cin>>n1;
     cout<<"Enter your 2nd value"<<endl;
     cin>>n2;

     n3 = n1%n2;
     return n3;
    cout<<endl;
 }
int main()
{
    int option, n;
    cout<<"This is a calculator"<<endl;
    cout<<"You can addition, subtraction, multiplication, division and remainder  by this calculator"<<endl;

do
{
    cout<<"Which operation do you want to perform"<<endl;
    cout<<"Select from option number"<<endl;
    cout<<"Enter 0 to exit"<<endl;
    cout<<"Enter 1 for addition"<<endl;
    cout<<"Enter 2 for substriplication"<<endl;
    cout<<"Enter 3 for multiplication"<<endl;
    cout<<"Enter 4 for division"<<endl;
    cout<<"Enter 5 for remainder"<<endl;
    cout<<"Enter 6 for clear screen"<<endl;

    cin>>option;

    switch(option)
    {
    case 0:
        break;
    case 1:
        cout<<endl<<"The addition these value is : "<<add()<<endl;
        break;
    case 2:
        cout<<endl<<"The substriplication of these value is : "<<substrc()<<endl;
        break;
    case 3:
        cout<<endl<<"The multiplication of these value is: "<<multiplication()<<endl;
         break;
    case 4:
        cout<<endl<<"The division of these value is: "<<division()<<endl;
         break;
    case 5:
        cout<<endl<<"The reminder if these value is: "<<remaind()<<endl;
        break;
    case 6:
        system("cls");
        break;
    default:
        cout<<"Enter the proper option number"<<endl;
        break;
    }




}
    while(option!=0);
    return 0;
}

