#include <iostream>
using namespace std;
class MergeSort
{   int a[];
    public:
void merging(int a[],int low,int mid,int high)
{
	cout<<endl<<"Merging has started"<<endl;
	cout<<"called function: merging(int a[],"<<low<<","<<mid<<","<<high<<")"<<endl;
    int temp[10],j,i,k;

    j=mid+1;
    //cout<<j;

    k=low;
    i=low;
    cout<<"I, J, K value as: "<<i<<"\t"<<j<<"\t"<<k<<endl;
    cout<<"Actual values" <<a[k]<<"\t"<<a[j]<<endl;
    while((k<=mid)&&(j<=high))
    {
        if(a[k]<a[j])
        {
          temp[i]=a[k];
          k++;
        }
        else
        {
          temp[i]=a[j];
          j++;
        }
        i++;
    }
    while(k<=mid)
    {
       temp[i]=a[k];
       k++;
       i++;
    }
    while(j<=high)
    {
       temp[i]=a[j];
       j++;
       i++;
    }
    cout<<"printing copied values: "<<endl;
    for(i=low;i<=high;i++)
    {
		a[i]=temp[i];
		cout<<i<<": "<<a[i];
	}
    cout<<endl;
}


void msort(int a[],int low,int high)
{
  int mid;
  if(high>low)
  {
      mid=(high+low)/2;
      cout<<endl<<"First Half msort(a,"<<low<<","<<mid<<");"<<endl;
      msort(a,low,mid);
      cout<<endl<<"Second msort(a,"<<mid+1<<","<<high<<");"<<endl;
      msort(a,mid+1,high);
      cout<<endl<<"Merging merging(a,"<<low<<","<<mid<<","<<high<<");"<<endl;
      merging(a,low,mid,high);
  }
}
};
int main()
{   MergeSort MS;
    int a[20],high,low,i,n;
    cout<<"Enter the no of elements in your list"<<endl;
    cin>>n;
    low=0;
    high=n-1;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The  unsorted list is"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }

    MS.msort(a,low,high);

    cout<<endl<<"Sorted list is";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
}


