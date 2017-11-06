#include <iostream>
using namespace std;
class array
{
	int arr[100];
	public:	
	void traverse(int size);
	void insertion(int size,int element, int position);	
	void deletion(int size,int element);
	int searching(int size,int element);	
};
void array::insertion(int size,int element,int position)
	{
		for(int i=size; i>position; i--)
		{
			arr[i]=arr[i-1];
		}
		arr[position]=element;		
	}
void array::traverse(int size)
	{
		for(int i=0;i<size;i++)
		{
			cout<<arr[i]<<endl;
		}
	}
void array::deletion(int size,int element)
	{
		int count=0;
		for(int i=0; i<size; i++)
		{
			if(arr[i]==element)
			{
				for(int j=i; j<(size-1); j++)
				{
					arr[j]=arr[j+1];
				}
				count++;
				break;
			}
		}
		if(count==0)
		{
			cout<<"Element not found\n";
		}
	}
int array::searching(int size,int element)
	{
		int flag,pos;
		for(int i=0; i<size; i++)
		{
			if(arr[i]==element)
			{
				flag=1;
				pos=i+1;
				break;
			}
		}
		if(flag==0)
		{
			cout<<"Element not found";
		}
		return pos;
	}
int main()
{
	array list;
	int size=0,element,option,position;
	cout<<"Enter size of array: ";
	cin>>size;
	while(1)
	{
		cout<<"1.Insertion"<<endl<<"2.Deletion"<<endl<<"3.Searching"<<endl<<"4.Exit"<<endl;
		cin>>option;
		if(option==4)
			break;
		if(option==1)
		{
			cout<<"Enter the element to be inserted: ";
			cin>> element;
			cout<<"Enter the position: ";
			cin>>position;
			if(position>=size)
			{
				cout<<"you ran out of size\n";
				break;
			}
			else
			{
				list.insertion(size,element, position);
				list.traverse(size);
			}
		}
		if(option==2)
		{
			cout<<"Enter the element to be deleted: ";
			cin>>element;
			list.deletion(size,element);
			list.traverse(size);
		}
		if(option==3)
		{
			int loc;
			cout<<"Enter the element to be searched: ";
			cin>>element;
			loc=list.searching(size,element);
			cout<<loc<<endl;
		}
	}
	return 0;	
}
