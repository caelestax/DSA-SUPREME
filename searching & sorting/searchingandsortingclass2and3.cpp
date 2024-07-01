// square root 
#include<iostream>
#include<vector>
using namespace std ; 

int findingsquarerootfunction(int arr[] ,int  size , int target ); 

int main(){
      int arr[] = { 0,1,2,3,4,5,6,7,8,9,10};
      int size =  11;
      int target = 10; 

      // function 
      int squareroot = findingsquarerootfunction(arr , size , target ); 
      cout << " the square root is : " << squareroot ; 
      return 0 ;
}
int findingsquarerootfunction(int arr[] ,int  size , int target ){
      int start = 0 ; 
      int end = size - 1 ; 
      int index = -1 ; 
      while( start <= end )
      {
            int mid = start + ( end - start ) / 2 ; 
            // int mid = ( start + end ) / 2 ; 
            int element = ( mid * mid); 
            if(element < target )
            {
                  index = mid ;
                  start = mid + 1  ; 
            }
            else if( element > target)
            {
                  // left shift 
                  end = mid - 1 ; 

            }
            else 
            {
                  // right shift 
                  index = mid ; 
            }
      }
      return index ; 
}

// // square root float value 
#include<iostream>
#include<vector>
using namespace std ; 

int findingsquarerootfunction(int arr[] ,int  size , int target ); 

int main(){
      int arr[] = { 0,1,2,3,4,5,6,7,8,9,10};
      int size =  11;
      int target = 10; 

      // function 
      double squareroot = findingsquarerootfunction(arr , size , target ); 
      cout << " the square root is : " << squareroot << endl ; 

      int precision ; 
      cout << " Enter the number of floating digits in precision " ; 
      cin >> precision; 

      double step = 0.1; 
      for ( int i = 0 ; i < precision ; i++){
            for ( double j = squareroot ; j * j < target; j = j + step )
            {
                  squareroot =j ; 
            }
            step = step / 10 ; 
      }
      cout << " square root in Float number is : " << squareroot ; 
      return 0 ;
}
int findingsquarerootfunction(int arr[] ,int  size , int target ){
      int start = 0 ; 
      int end = size - 1 ; 
      int index = -1 ; 
      while( start <= end )
      {
            int mid = start + ( end - start ) / 2 ; 
            // int mid = ( start + end ) / 2 ; 
            int element = ( mid * mid); 
            if(element < target )
            {
                  index = mid ;
                  start = mid + 1  ; 
            }
            else if( element > target)
            {
                  // left shift 
                  end = mid - 1 ; 

            }
            else 
            {
                  // right shift 
                  index = mid ; 
            }
      }
      return index ; 
}

//binary search in 2 D array 
#include<iostream>
using namespace std; 

bool binarysearch(int arr[][4] , int row , int col , int target  ); 
int main()
{
      int arr[5][4]= {{ 1,2,3,4} , { 5,6,7,8} , { 9, 10 ,11,12 } , {13,14,15,16} , { 17 , 18 ,19 ,20} }; 
      int row = 5; 
      int col= 4 ; 
      int target = 19; 
      
      // function 
      int ans = binarysearch(arr, row , col , target); 

      if(ans == true)
      {
            cout << " Target found " ;
      }
      else{
            cout << " Target not found ";
      }
      return 0; 
}
bool binarysearch(int arr[][4] , int row , int col , int target  )
{
      int start = 0 ; 
      int end = (row * col) - 1 ;
      while(start <= end )
      {
            int mid = start + ( end - start) / 2 ; 
            int rowIndex = mid / col ; 
            int colIndex = mid % col ; 
            int element = arr[rowIndex][colIndex]; 

            if( element == target)
            {
                  cout << " found at " << rowIndex<< " " << colIndex << endl; 
                  return true ; 
            }
            else if( element < target )
            {
                  // right search  
                  start = mid + 1 ; 
            }
            else 
            {
                  // left search
                  end = mid - 1  ; 
            }
      }
      return false ; 
}
// binary search in a nearly sorted 
#include<iostream>
using namespace std; 

int nearlysorted(int arr[] , int size , int target); 
int main(){
      int arr[] = { 10 ,3,40,20,50,80,70}; 
      int size = 7 ; 
      int target = 3; 

      //function 
      int ans = nearlysorted(arr , size , target); 
      if( ans == -1)
      {
            cout << " Target not Found : ";
      }
      else{
             cout << " Index of given number is : " << ans ;
      }
  

}

int nearlysorted(int arr[] , int size , int target )
{
      int start = 0;
      int end =  size - 1 ; 
      
      while( start <= end)
      {
            int mid = start + ( end - start) / 2 ;
            if(arr[mid] == target )
            {
                  return mid ; 
            }
            if( ( mid - 1 ) > start && arr[mid - 1 ] == target)
            {
                  return mid - 1 ; 
            }
            if( (( mid + 1 ) < end ) && arr[mid + 1] == target)
            { 
                  return mid + 1 ;   
            }
            else if(arr[mid] < target )
            {
                  // right search 
                  start = mid + 2 ; 
            }
            else 
            {
                  // left search 
                  end = mid - 2; 
            }

      }
      return -1 ; 
}

// Divide two number using Binary search
#include<iostream>
using namespace std; 

double  dividingfunction(int dividend , int divisor );
int main()
{
      int dividend = 22;
      int divisor = 7 ;  

      // function 
      double index = dividingfunction(dividend , divisor); 
      
      cout  << "The answer is : " << index ; 
      // double 
      return 0 ;
}
double  dividingfunction(int dividend , int divisor ){
      int start = 0 ; 
      int end = abs(dividend) ; 
      int ans = 1 ;
      while(start <= end )
      {
            int mid = start + ( end - start) / 2 ;
            int element = divisor * mid ; 
            if( abs(element) == abs(dividend) )
            {
                  ans = mid ;
                  break;  
            }
            else if( abs(element) < abs(dividend))
            {
                  ans = mid ; 
                  start = mid + 1 ; 
            }
            else
            {
                  end = mid - 1 ; 
            }
      } 
      int precision ; 
      cout << " Give me precision count : "; 
      cin >> precision; 
      double step = 0.1;
      double answer = ans ; 
      for(int i = 0 ; i < precision ; i++)
      {
            for(double j = answer ; j * divisor <= (dividend) ; j = j + step )
            {
                  answer  = j ;  
            }
            step = step /10 ; 
      }
      cout << " before sign convention value is : " << answer << endl; 
      // return answer; 
      // sign convention 
      if( ( divisor < 0 && dividend < 0 ) || ( divisor > 0 && dividend > 0 ))
      {
            return answer ; 
      }
      else 
      {
            return -answer ; 
      }
}

//find the odd occuring element in an array 
#include<iostream>
using namespace std; 

int oddoccurence(int arr[] , int size);
int main()
{
      int arr[] = { 1,1,2,3,3,4}; 
      int size = 6 ;
      // function 
      int ans = oddoccurence(arr , size); 
      cout << " the element is " << arr[ans] << endl; 
      cout << " the index of the element is " << ans ; 
      return 0 ; 
}
int oddoccurence(int arr[] , int size){
      int start = 0 ; 
      int end = size - 1 ; 
      int index = -1 ; 
      while( start<= end )
      {
            
            int mid = start + (end - start )/2 ;
            // case 1 - single element  
            if(start == end )
            {
                  return start ;
            }
            //case 2 - even or odd index 
            else if(mid % 2 == 0 )
            {
                  if(arr[mid]== arr[mid+1])
                  {
                        // right search 
                        start = mid + 2 ; 
                  }
                  else{
                        end = mid ; 
                  }
            }
            else{
                  if( arr[mid -1 ]== arr[mid])
                  {
                        // right  search 
                        start = mid + 1 ; 
                  }
                  else{
                        // left search 
                        end = mid - 1 ; 
                  }

            }
            
      }
      return -1 ; 
      
}