// finding any number by binary searching 
#include<iostream>
using namespace std; 

int binarysearch(int arr[] , int size , int target );
int main(){
      int arr[] = { 2,4,6,8,10,12,14,16}; 
      int size = 8 ;  
      int target = 16 ; 

      int indexoftarget = binarysearch(arr , size , target );

      if(indexoftarget == -1 ){
            cout << " target not found "; 

      }
      else{
            cout << " Target found " << indexoftarget << endl; 
      }
      return 0; 

}
int binarysearch(int arr[] , int size , int target )
{
      int start = 0 ; 
      int end = size - 1 ; 
     

      while( start <= end)
      {
            // int mid = start + (end - start) / 2;
            int mid = ( start + end ) / 2 ; 
            int element = arr[mid]; 
            if( arr[mid] == target )
            {
                  return mid; 
            }
            else if(element < target )
            {
                  // search in right 
                  start = mid + 1; 
            }
            else{
                  // search in left 
                  end = mid - 1 ; 
            }
      }

      // not found anything then 
      return -1 ; 
}
// for vector if we want to use directly 
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std; 

int main()
{
      vector<int> v{1,2,3,4,5,6,7,8,9,10}; 
      int arr[] = { 10 ,20 ,30,40,50 ,60 ,70 , 80 }; 
      int size = 8; 
      // This stl syntax is for vector 
      if(binary_search(v.begin(), v.end() , 9 ))
      {
            cout << " found in vector " << endl ; 
      }
      else{
            cout << " Not found in vector " << endl; 
      }
      // This stl syntax is for array  
      if(binary_search(arr , arr + size , 10 ))
      {
            cout << " found in array " << endl; 
      }
      else{
            cout << " Not found in array " << endl; 
      }
      return 0 ;
}
// find first occurence of any number  
#include<iostream>
#include<vector>
using namespace std ; 

int firstoccurence(vector<int> arr ,int target);
int main(){
      vector<int> arr{1,3,4,4,4,4,6,6,7,7,9}; 
      int target = 6; 
      int indexofoccurence = firstoccurence(arr , target);

      cout << " Ans is : " << indexofoccurence << endl ; 

      return 0 ;  
}
int firstoccurence(vector<int> arr ,int target)
{
      int start = 0 ; 
      int end = arr.size() -1 ;
      int index = -1 ; 
      int ans ; 

      while(start <= end)
      {
            int mid = start + (end - start) /2 ; 
            if( arr[mid] == target)
            {
                  // ans store 
                  index = mid ;
                  // now go left 
                  end = mid - 1 ; 

            }
            else if( target < arr[mid])
            {
                  end = mid - 1 ; 
            }
            else{
                  start = mid + 1 ; 
            }

      }
      return index ; 
}
// *********** here time complexity is also same as binary search => O(log n)

// find last occurence of any number  
#include<iostream>
#include<vector>
using namespace std ; 

int lastoccurence(vector<int> arr ,int target);
int main(){
      vector<int> arr{1,3,4,4,4,4,6,6,7,7,9}; 
      int target = 4; 
      int indexofoccurence = lastoccurence(arr , target);

      cout << " Ans is : " << indexofoccurence << endl ; 

      return 0 ;  
}
int lastoccurence(vector<int> arr ,int target)
{
      int start = 0 ; 
      int end = arr.size() -1 ;
      int index = -1 ;

      while(start <= end)
      {
            int mid = start + (end - start) /2 ; 
            if( arr[mid] == target)
            {
                  // ans store 
                  index = mid ;
                  // now go right
                  start = mid + 1  ; 

            }
            else if( target < arr[mid])
            {
                  // left search
                  end = mid - 1 ; 
            }
            else{
                  //right search 
                  start = mid + 1 ; 
            }

      }
      return index ; 
}

// peak element in a mountain 
#include<iostream>
#include<vector>
using namespace std; 

int mountainfunctionforpeak(int arr[] , int size ); 
int main(){
      int arr[] = { 0 , 1 ,15 , 2 }; 
      int size = 4; 
      
      // function 
      int peakelement = mountainfunctionforpeak(arr , size ); 

      cout << " the peak element is : "<<  peakelement; 

      return 0 ; 
}     
int mountainfunctionforpeak(int arr[] , int size )
{
      int start = 0 ; 
      int end = size -1 ; 
      int index ; 
      while( start < end )
      {
            int mid = start + (end - start) / 2; 
            if( arr[mid] < arr[mid+1])
            {
                  start = mid +1 ; 
            
            }
            else
            {
                  end  = mid ; 
            }

            index = arr[mid]; 
      }
      return start; 
       
}
