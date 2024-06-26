//sorting 0's , 1's and 2's 
#include<iostream>
#include<vector>
using namespace std; 

void sortfunction(vector<int>& arr); 
int main(){
      int n ; 
      cout << " Give me the total no of output : " ; 
      cin>>n ; 
      vector<int> arr(n);
      //for taking all the input of array arr
      cout << " give me element of 3* 3 aray : "<< endl ;
      for(int i = 0 ; i < arr.size(); i++)
      {
            cin >> arr[i]; 
      }
      
      // printing the elements 
      cout << " the elements are : " << endl ; 
      for(int i = 0; i < arr.size();  i++)
      {
            cout << arr[i] << endl;  
      }

      //function for sort 0's , 1's and 2's 
      sortfunction(arr); 
      
      // for printing all the number or element 
      cout << " after sorting 0's , 1's and 2's : " << endl ;  
      for(int i = 0 ; i < arr.size(); i++)
      {
            cout << arr[i] << " "; 
      }
      return 0 ; 
}
void sortfunction(vector<int>& arr){
      int start = 0; 
      int medium = 0; 
      int end = arr.size() - 1  ; 
      while( medium <= end  )
      {
            if(arr[medium] == 0)
            {
                  swap(arr[start], arr[medium]); 
                  start++; 
                  medium++; 
            }
            else if(arr[medium] == 1)
            {
                  medium++; 
            }
            else{
                  swap(arr[medium] , arr[end]); 
                  end-- ;       
            }
      }
}

//move all negative to the left side on array 
//dutch national flag algorithm 
#include<iostream> 
#include<vector>
using namespace std ; 

void movingleft(vector<int>& arr); 
int main(){
      int n; 
      cout << " How much numbers you wanna store : "; 
      cin>> n ; 
      vector<int> arr(n);
      //for taking input 
      cout <<" give me all element of array 3*3 array : " << endl ; 
      for(int i = 0; i < arr.size(); i++)
      {
            cin >> arr[i]; 
      }

      //function for moving all -ve number 
      movingleft(arr); 

      //for printing value of array  
      cout << " all the element of array 3*3 is : " << endl ;
      for(int i = 0 ; i < arr.size(); i++)
      {
            cout << arr[i] << " "; 
      }

      return 0 ;  
}
void movingleft(vector<int>& arr){
      int start = 0; 
      int medium = 0; 
      int end =  ( arr.size() - 1 );

      while(medium <= end ){
            if ( arr[medium] < 0)
            {
                  swap(arr[start] , arr[medium]);
                  start++; 
                  medium++; 
            } 
            else{
                  medium++;
            }

      }
}

// find duplicate number ( L. C ) Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
// There is only one repeated number in nums, return this repeated number.
// ********************************* MARKING METHOD *******************************************************
#include<iostream> 
#include<vector>
using namespace std; 

int findduplicate(vector<int>& arr); 
int main(){
      int n; 
      cout << " givr me the total number of element : " ;
      cin >> n;
      vector<int> arr(n+1); 
      //for taking input all element of arr[] 
      cout << " give me the element of 3*3 array : ";  
      for(int i = 0 ; i < arr.size(); i++)
      {
            cin >> arr[i]; 
      }
      
      //function for finding duplicate number 
      findduplicate(arr); 
      int duplicatenumber = findduplicate(arr); 
      cout << " the duplicate number is : " << duplicatenumber ; 
      return 0  ; 
}

int findduplicate(vector<int>& arr){
      //visited solution 
      int ans ; 
      for(int i = 0 ; i < arr.size(); i++)
      {
            int index = abs(arr[i]); 
            if(arr[index] < 0)
            {
                  ans = index; 
            }
            else{
                  //visiting mark 
                  arr[index] *= -1 ; 
            }

      }
      return ans; 
}

// *************************positioning method ( this is not offen use ) *************************************
#include<iostream>
#include<vector>
using namespace std; 

int duplicatefunction(vector<int> arr); 
int main(){
      int n; 
      cout << " give me the total no. of element : "; 
      cin>> n; 
      vector<int> arr(n); 
      //for taking input of array  
      for(int i = 0; i < arr.size(); i++){
            cin >> arr[i]; 
      }

      //function for finding duplicate through positioning method 
      duplicatefunction(arr);     
      int duplicatenumber = duplicatefunction(arr); 
      cout << " the duplicate number is " << duplicatenumber ; 
      return 0 ; 

}

int duplicatefunction(vector<int> arr){
      while(arr[0] != arr[arr[0]])
      {
            swap(arr[0] , arr[arr[0]]); 
      }
      return arr[0] ; 
}

//missing element from an array with duplicates 
#include<iostream>
#include<vector>
using namespace std ; 

void missingelement(vector<int>& arr); 
int main()
{
      int n ; 
      cout << " give me the total no. of input : "; 
      cin >> n ; 
      vector<int> arr(n); 
      //for taking input 
      cout <<  " give me all element : " ; 
      for ( int i = 0 ;i < arr.size() ; i++)
      {
            cin >> arr[i]; 
      }
      //function for finding missing element 
      missingelement(arr);
      return 0; 
}
void missingelement(vector<int>& arr){
      int ans ; 
      // actual index array me 0 se start hota hai but hamne assume kra hai ki index 2 start hongee 
      // so , here index ki jagah index -  1 
      for (int i = 0 ; i < arr.size() ; i++)
      {
            int index = abs(arr[i]); 
            //not visited 
            if(arr[index -1 ] > 0)
            {
                  arr[index - 1 ] *= -1 ; 
            }
      }
      
      // for ( int i = 0 ; i < arr.size(); i++)
      // {
      //       cout << arr[i] << " "; 
      // }

        
      for ( int i = 0 ; i < arr.size(); i++)
      {
            if( arr[i] > 0 )
            {
                  cout <<" the missing number is : " <<  i+1 ; 
            }
      }
}

// find first repeating element 
#include<iostream> 
#include<vector>
using namespace std; 

void firstrepeating(vector<int>& arr); 
int main()
{
      int n ;  
      cout << " total no. of element of array 3*3 array : "; 
      cin >> n; 
      vector<int> arr(n); 
      cout << " give me All element : "; 
      for(int i = 0 ; i < arr.size(); i++)
      {
            cin>> arr[i]; 
      }

      //function 
      firstrepeating(arr); 
      return 0 ; 
}

void firstrepeating(vector<int>& arr){
      int ans ; 
      for(int i = 0 ; i < arr.size(); i++)
      {
            for( int j = i + 1 ; j < arr.size(); j++)
            {
                  if( arr[i] == arr[j])
                  {
                        cout << " first repeating value is : "  <<  i ; 
                        return ;
                  }
            }

      }
      cout <<" there is not any repeating value  " ; 
}
// here time complexity is O(n^2) , which is not optimise 
//*************************************** HASHING METHOD *************************************** */
// Given an array arr[] of size n, find the first repeating element. The element should occur more than once and the index of its first occurrence should be the smallest.

// Note:- The position you return should be according to 1-based indexing. 
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std; 

int repeatingfunction(vector<int>& arr); 
int main(){
      int n ; 
      cout << " give me the number of element : "; 
      cin >> n;
      vector<int> arr(n); 
      cout<< " give me all element : "; 
      for(int i = 0 ; i < arr.size(); i++)
      {
            cin >> arr[i]; 
      }  

      //function define for finding repeating value 
      repeatingfunction(arr); 
      int ans = repeatingfunction(arr); 
      cout << " the first repeating element : "<< ans ; 
}

int repeatingfunction(vector<int>& arr)
{
      // for collecting all similar element in one bucket 
      unordered_map<int , int> hash; 
      for(int i =  0 ; i < arr.size(); i++)
      {
            hash[arr[i]]++ ; 
      }
      // for finding first repeating value 
      for(int i = 0 ; i < arr.size(); i++)
      {
            if(hash[arr[i]] >  1 )
            {
                  return i+1; 
            }
      }
      return -1;
}

// Q. Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.
// Note: can you take care of the duplicates without using any additional Data Structure?
#include<iostream>
#include<vector>
#include<set>
using namespace std; 

vector<int> commonelement(vector<int>& arr1 , vector<int>& arr2 , vector<int>& arr3); 
int main(){
      int n1 ;
      int n2; 
      int n3;  
      cout << " Total no. of element : "; 
      cin >> n1 ;
      cin >> n2; 
      cin >> n3;  
      vector<int> arr1(n1);
      vector<int> arr2(n2); 
      vector<int> arr3(n3); 
      // taking input 
      cout<<" give me all the element of array arr1[]" ; 
      for( int  i = 0 ; i < arr1.size(); i++)
      {
            cin >> arr1[i]; 
      }
      
      cout<<" give me all the element of array arr2[]" ; 
      for( int  i = 0 ; i < arr2.size(); i++)
      {
            cin >> arr2[i]; 
      }
      
      cout<<" give me all the element of array arr3[]" ; 
      for( int  i = 0 ; i < arr3.size(); i++)
      {
            cin >> arr3[i]; 
      }

      //function for finding common element 
      vector<int> result = commonelement(arr1 , arr2 , arr3); 

      //for printing all the element 
      cout << " common elements are : ";  
      for(int i = 0 ; i < result.size(); i++)
      {
            cout << result[i] << " "; 
      }
      return 0 ; 
      
}
vector<int> commonelement(vector<int>& arr1 , vector<int>& arr2 , vector<int>& arr3)
{
      vector<int> ans;
      set<int>st; 
      int i , j , k ; 
      i = j = k = 0; 
      while(i < arr1.size() && j < arr2.size() && k < arr3.size())
      {
            if(arr1[i] == arr2[j] && arr2[j] == arr3[k])
            {
                  st.insert(arr1[i]); 
                  i++; 
                  j++; 
                  k++; 
            }
            else if(arr1[i] < arr2[j])
            {
                  i++; 
            }
            else if(arr2[j] < arr3[k])
            {
                  j++; 
            }
            else
            {
                  k++; 
            }           
      }
      for(auto i : st)
      {
            ans.push_back(i); 
      }

      return ans; 
}


// //wave print of a matrix 
#include<iostream>
#include<vector> 
using namespace std; 

void waveprint(vector<vector<int>> arr);
int main(){
      vector<vector<int>> arr{ { 1 , 2, 3, 4 } , { 5, 6, 7 ,8 } , { 9 , 10 , 11, 12}}; 

      //function for print wave in matrix 
      waveprint(arr); 
}
void waveprint(vector<vector<int>> arr)
{
      int n = arr.size(); 
      for( int startcol = 0  ; startcol< arr[0].size(); startcol++)
      {
            //if col is even then top to bottom 
            if((startcol & 1) == 0)
            {
                  for( int startrow = 0 ; startrow < n; startrow++)
                  { 
                        cout << arr[startrow][startcol] << " "; 
                  }

            }
            //if col is odd then bottom to top 
            else
            {
                  for(int startrow = n - 1;startrow >= 0; startrow-- )
                  {
                        cout << arr[startrow][startcol] << " "; 
                  }
            }
      }

}

//spiral print of a matrix 
#include<iostream>
#include<vector>
using namespace std; 

vector<int> spiralprinting(vector<vector<int>> arr); 

int main(){
      vector<vector<int>> arr{{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24},{25,26,27,28,29,30}}; 

      //function for print spiral 
      vector<int> result = spiralprinting(arr);
      for( auto i : result)
      {
            cout << i << " "; 
      }
      cout << endl ; 
      return 0 ;
}

vector<int> spiralprinting(vector<vector<int>> arr)
{
      vector<int> ans ;
      int m = arr.size(); 
      int n = arr[0].size(); 
      int startingRow = 0; 
      int endingCol = n - 1; 
      int endingRow = m - 1 ; 
      int startingCol = 0 ; 
      int total_element = (m * n );
      int count = 0 ;  

      while(count < total_element)
      {
            //printing startingRow
            for(int i = startingCol ; i <= endingCol && count <= total_element ; i++)
            {
                  ans.push_back(arr[startingRow][i]); 
                  count++; 
            }
            startingRow++; 

            //printing endingCol
            for(int i = startingRow ; i <= endingRow && count < total_element ; i++)
            {
                  ans.push_back(arr[i][endingCol]); 
                  count++; 
            }
            endingCol--; 

            // printing endingRow 
            for(int i = endingCol; i >= startingCol && count < total_element; i--)
            {
                  ans.push_back(arr[endingRow][i]); 
                  count++; 
            }
            endingRow--; 

            //printing startingCol
            for(int i = endingRow; i >= startingRow && count < total_element; i--)
            {
                  ans.push_back(arr[i][startingCol]); 
                  count++; 
            }
            startingCol++; 
      }
      return ans; 
}
//factorial of a large number 
#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std; 

vector<int> factorial(int n);
int main(){
      int n; 
      cout << " Factorial of : "; 
      cin >> n;
      
      // function for factorial 
      vector<int> result = factorial(n); 

      //for printing all the element 
      for( int i = 0 ; i < result.size(); i++)
      {
            cout << result[i] << " " ; 
      }
}
vector<int> factorial(int n)
{
      vector<int> ans; 
      ans.push_back(1); 
      int carry = 0 ; 
      for(int i = 2 ; i <= n ; i++)
      {
            for(int j = 0 ; j< ans.size() ; j++)
            {
                  int x = ans[j]*i + carry ; 
                  ans[j] = x % 10; 
                  carry = x / 10 ;  
            }
            while( carry > 0 )
            {
                  ans.push_back(carry % 10); 
                  carry /= 10 ; 
            }
      }
      reverse(ans.begin(), ans.end()); 
      return ans; 
}