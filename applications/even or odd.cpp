#include <iostream>
#include <array>
using namespace std;

    int arrays(int arr[],int count)
    {
        int nums_even=0;
        int nums_odd=0;
        for(int i=0;i<count;i++){
        if((arr[i]%2==0))
        { nums_even++;}
        if((arr[i]%2!=0)){
        nums_odd++;}
        }
        // cout<<"numbers of odd is "<<sum_odd<<"\n";
        // cout<<"numbers of even is "<<sum_even<<"\n";
        int even_sum=0;
        int odd_sum=0;
        int sum_equal=0;

if (nums_even>nums_odd){
    for(int i=0;i<count;i++)
    {
        if((arr[i]%2==0))
        { even_sum+=arr[i];}
    }
        cout<<"even numbers sum = "<<even_sum<<endl;
}
else if (nums_even<nums_odd){
    for(int i=0;i<count;i++)
    {
        if((arr[i]%2!=0))
        { odd_sum+=arr[i];}
    }
        cout<<"odd numbers sum = "<<odd_sum<<endl;
}else
{
    for(int i=0;i<count;i++)
    {
        sum_equal+=arr[i];
    }
    cout<<"equal of numbers is = "<<sum_equal<<endl;
}
}
    int main()
    {
        int arr[]={1,3,4,6,8,12};      //30
        int count=sizeof(arr)/sizeof(arr[0]);
        arrays(arr,count);
        int arr2[]={1,3,5,7,2,4,9};
        int count_2=sizeof(arr2)/sizeof(arr2[0]);
        arrays(arr2,count_2);
        int arr_3[]={1,2,3,4,5,6};
        int count_3=sizeof(arr_3)/sizeof(arr_3[0]);
        arrays(arr_3,count_3);//   21

        return 0;
    }
