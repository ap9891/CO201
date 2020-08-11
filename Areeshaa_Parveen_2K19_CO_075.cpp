// #include<iostream>
// using namespace std;
// class student
// {
//     private:
//     char name[10];
//     int sub1,sub2,sub3,sub4,sub5;
//     int sum1=0,sum2=2,sum3=0,sum4=0,sum5=0;
//     public:
//     void details()
//     {
//         cin>>name;
//         cin>>sub1>>sub2>>sub3>>sub4>>sub5;
//         sum1 +=sub1;
//         sum2 +=sub2;
//         sum3 +=sub3;
//         sum4 +=sub4;
//         sum5 +=sub5;
//     }
//     void show(int x)
//     {
//         cout<<"avg in sub1 ="<<(float)sum1/x<<" "<<"avg in sub2 ="<<(float)sum2/x<<" "<<"avg in sub3 ="<<(float)sum3/x<<" "
//         <<"avg in sub4 ="<<(float)sum4/x<<" "<<"avg in sub5 ="<<(float)sum5/x<<" "<<endl;
//     }
//     void calc()
//     {
//         int total;
//         total = (sub1+sub2+sub3+sub4+sub5);
//         cout<<"total ="<<total<<endl;
//         float avg = total/5.0;
//         cout<<"avg ="<<avg<<endl;
//     }
// };
// int main()
// {
//     student s;
//     int n;
//     cin>>n;
//     int *arr = new int[n]{};
//     for(int i=0;i<n;i++)
//     {
//         s.details();
//         s.calc();
//     }
//     s.show(n);
//     return 0;
// }
#include<iostream>
using namespace std;
int main()
{
    int r,c=5;
    cin>>r;
    int **arr = new int*[r];
    for(int i=0 ;i <r ;i++)
    {
        arr[i] = new int[c];
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0; j <c;j++)
        {
            cin>>arr[i][j];
        }
    }
    int sub1=0,sub2=0,sub3=0,sub4=0,sub5=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0 ;j<c;j++)
        {
            if(j==0)
            {
                sub1 += arr[i][j];
            }
            else if(j==1)
            {
                sub2 +=arr[i][j];
            }
            else if(j==2)
            {
                sub3 +=arr[i][j];
            }
             else if(j==3)
            {
                sub4 +=arr[i][j];
            }
             else if(j==4)
            {
                sub5 +=arr[i][j];
            }
        }
    }
    cout<<"Average of each subject"<<endl;
    cout<<"avg in sub1 ="<<(float)sub1/r<<" "<<"avg in sub2 ="<<(float)sub2/r<<" "<<"avg in sub3 ="<<(float)sub3/r<<" "
        <<"avg in sub4 ="<<(float)sub4/r<<" "<<"avg in sub5 ="<<(float)sub5/r<<" "<<endl;
        int sum=0;
    for(int i =0 ;i <r;i++)
    {
        sum=0;
        for(int j=0; j < c;j++)
        {
            sum +=arr[i][j];
        }
        cout<<"total marks of " <<i<<" student ="<<sum<<endl;
    }
    return 0;
}