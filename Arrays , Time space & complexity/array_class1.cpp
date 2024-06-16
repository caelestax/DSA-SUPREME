#include<iostream>
using namespace std;

int main(){
      int arr[5] = { 1 ,3,5,7,9};

      for( int index = 0 ; index <= 5 ; index++)
      {
            cout << arr[index] << endl ;
      }
      return 0;
}


//double of array 

#include<iostream>
using namespace std;

int main(){
      int arr[5];
      for (int index = 0 ; index < 5 ; index++){
            cout << " Give me the number : ";
            cin >> arr[index];

      }

      for(int index = 0 ; index < 5 ; index++)
      {
            cout <<" the double of every Array : " << (2* arr[index]) << endl;
      }
      return 0;
} 


//for counting the total number of zeros and ones 

#include<iostream>
using namespace std;

int main()
{
      int arr[] = {0,1,0,1,1,1,1,1,1,0,0,0,0,0,1};
      int size = 15;
      int numZero = 0;
      int numOne = 0;

      for( int i = 0; i < size ; i++)
      {
            if(arr[i] == 0)
            {
                  numZero++;


            }

            else
            {
                  numOne++;
            }
      }

      cout<< " the Number of zeros : " << numZero << endl;
      cout <<" the Number of Ones : "<< numOne << endl;
      return 0;

}


//max Number in Array 
#include<iostream>
#include<limits.h>
using namespace std;

int main(){
      int arr[] = {9,5,4,8,0,4,6,56,7,69,4,98};
      int size = 12;
      int max = INT_MIN;
      for(int i = 0; i < size ;i++)
      {
            if(arr[i] > max ){
                  max = arr[i];
            }

      }
      cout << "Max number : " << max ;
      return 0;

}

// find minimum Number 
#include<iostream>
#include<limits.h>
using namespace std;

int main(){
      int arr[] = {5,6,3,-1,4,34,12,1};
      int size = 8;
      int min = INT_MAX ;
      for(int i = 0 ; i < size ; i++)
      {
            if( arr[i]< min)
            {
                  min = arr[i];

            }
            
      }
      cout << " Min number " << min;
      return 0;
}




// extream point in array 
//note point - for minimum space we can use directly 
//if( start > end )
// break;
//cout << arr[ start];
// cout << arr[end];
// start++;
// end--;

#include<iostream>
using namespace std;

int main(){
      int arr[] = { 22 , 5, -4, 8 , 34, 55 , 94 ,95 };
      int size = 8;
      int start = 0;
      int end = (size - 1);

      while(start <= end){
            if (start < end){
                  cout << arr[start] <<" ";
                  cout << arr[end]<< " ";
            }
            if( start == end )
            {
                  cout << arr[start]<< " ";
            }
            start++;
            end--;
      }

      return 0;
}


//reverse of an array 

#include<iostream>
using namespace std;

int main()
{
      int arr[] = { 5 , 10 ,15 , 20 , 25 , 30 ,35,40 , 45 ,50 };
      int size = 9 ;
      int start = 0 ;
      int end = (size - 1 );

      while(start <= end)
      {
            //step 1
            swap(arr [start] , arr[ end]);
            //step 2
            start++;
            // step 3 
            end--; 
      
      }

      // printing all the swap numbers 
      for( int i = 0  ; i < size ; i++)
      {
            cout << arr[i] << " " ; 
      }

      return 0 ; 
}






