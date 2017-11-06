#include <iostream>
using namespace std;
class array
{
	int arr[100];
	public:	
	void hashtable(int size);
	void hash(int size,int element); 			
};
void array::hash(int size,int element)
{
	int i = element%size;	
	arr[i]=element;	
}
void array::hashtable(int size)
	{
		for(int i=0;i<size;i++)
		{
			cout<<i<<"-"<<arr[i]<<endl;
		}
	}
int main()
{
	int size,element,option;
	array list;
	cout<<"Enter the size of array: ";
	cin>>size;
	while(1)
	{
		cout<<"1.Enter the elements"<<endl<<"2.Display"<<endl<<"3.Exit"<<endl;
		cin>>option;
		if(option==3)
			break;	
		if(option==1)
		{
			cout<<"Enter the element";
			cin>>element;
			list.hash(size,element);
		}
		if(option==2)
		{
			cout<<"Hash table is\n";
			list.hashtable(size);
		}
	}		
	return 0;	
}
