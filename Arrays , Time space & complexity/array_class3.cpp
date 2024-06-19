// row wise access & col wise access in array

#include<iostream>
#include<vector>
using namespace std; 

int main() {
      // initialisation of array 
      int arr[3][3] = {{1, 2,3}, { 4 , 5 , 6} , { 2 , 4, 8 }}; 

      // printing row wise 
      //Outer loop 
      cout << " row wise access : " ;  
      for(int i = 0 ; i < 3 ; i++)
      { 
            for ( int j = 0 ; j < 3 ; j++)
            {
                  cout << arr[i][j] << " "; 
            }
            cout << endl; 
      }

      //printing col-wise access 
      //outer loop 
      cout << " col wise access : " ;
      for(int i = 0; i < 3 ; i++)
      {
            for( int j= 0 ; j < 3 ; j++)
            {
                  cout << arr[j][i]<< " " ; 
            }
            cout << endl; 
      }
}


// taking row wise input 
#include <iostream> 
#include <vector>
using namespace std; 

int main(){
      int arr[4][3];
      //for taking input 
      cout << " give me the all element : "; 
      for(int i = 0 ; i < 4 ; i++)
      {
            for(int j = 0 ; j < 3; j++)
            {
                  cin >> arr[i][j] ; 
            }

      }

      //printing all element in row wise element 
      cout << " the input elements are : " <<endl ; 
      for( int i = 0 ; i < 4 ; i++)
      {
            for ( int j = 0 ; j < 3 ; j++)
            {
                  cout << arr[i][j] << " " ;  
            }
            cout << endl ; 
      }

      //taking input as a col - wise access 
      for(int i = 0; i < 4 ; i++)
      {
            for(int j = 0 ; j < 3 ; j++)
            {
                  cin >> arr[j][i];
            }
      }
      //printing all element in row wise element 
      cout << " the input elements are : " <<endl ; 
      for( int i = 0 ; i < 4 ; i++)
      {
            for ( int j = 0 ; j < 3 ; j++)
            {
                  cout << arr[i][j] << " " ;  
            }
            cout << endl ; 
      }

      
}


//row sum 
#include<iostream> 
#include<vector>
using namespace std ; 

int main(){
      int arr[5][4] = {{1,2,3,4},{2,3,4,1}, {5,6,1,3},{1,9,9,6}}; 
      

      //printing sum of all row wise element 
      for(int i = 0 ; i < 4 ;i++)
      {
            int sum = 0; 
            for(int j = 0 ; j < 4 ; j++)
            {
                  sum = sum + arr[i][j]; 

            }
            cout << sum << " "; 

      }
      cout <<endl;
      //printing sum of all col wise element 
      for(int i = 0 ; i < 4 ;i++)
      {
            int sum = 0; 
            for(int j = 0 ; j < 4 ; j++)
            {
                  sum = sum + arr[j][i]; 

            }
            cout << sum << " "; 

      }
      cout <<endl;
      return 0 ;
}

// finding any number
#include<iostream>
#include<vector>
using namespace std; 

bool findkey(int arr[][3] , int row , int col , int key ); 
int main(){
      int arr[4][3]; 
      int row = 4;  
      int col = 3; 
      int key ; 
      //for taking input 
      cout << " give me all element : "; 
      for(int i = 0; i< 4 ; i++)
      {
            for(int j = 0 ; j < 3 ; j++)
            {
                  cin>> arr[i][j]; 
            }
      }

      // taking input of  key 
      cout << " give me the  number which you want to search : "; 
      cin >> key;  

      //function for finding key number        
      int ans = findkey(arr , row , col , key );
      cout << " the key is found or not found = " << ans ; 


      return 0 ; 

}
bool findkey(int arr[][3] , int row , int col , int key ){
      // outerloop via row wise loop
      for(int i = 0 ; i < 4; i++)
      {
            //inner loop 
            for(int j = 0 ; j < 3; j++)
            {
                  if(arr[i][j] == key )
                  {
                        return true ; 
                  }
            }
      }

      //value not present 
      return false ; 
}

//to find maximum number & minimum number in 2d arrays 
#include<iostream>
#include<climits>
using namespace std ; 

int maximumNumber(int arr[][3] , int row , int col ); 
int minimumNumber(int arr[][3] , int row , int col );
int main(){
      int arr[3][3]; 
      int row = 3 ; 
      int col = 3 ; 
      //for taking input of all element of arr[][]
      cout << " give me the input : ";  
      for(int i = 0; i < 3 ; i++){
            for(int j= 0 ; j < 3 ; j++)
            {
                  cin >> arr[i][j]; 
            }
      }

      //function to find the maximum number and printing that element 
      int maxterm = maximumNumber(arr , row , col ); 
      cout << " the maximum number for that array 3 * 3  = " << maxterm <<endl; 

      //function call for finding minimum number and printing that element 
      int miniterm =  minimumNumber( arr , row , col );
      cout << " the minimum number for that array 3 * 3  = " << miniterm;

      return 0 ; 
}

int maximumNumber(int arr[][3], int row , int col )
{
      int maxi = INT_MIN; 
      //FOR outer loop 
      for(int i = 0 ; i < row  ; i++)
      {
            for(int j = 0 ; j < col ;  j++) 
            {
                  if(arr[i][j] > maxi)
                  {
                        maxi = arr[i][j];

                  }
            }
      }
      return maxi ; 
}
int minimumNumber(int arr[][3] , int row , int col ){
      int mini = INT_MAX; 
      //FOR outer loop 
      for(int i = 0 ; i < row  ; i++)
      {
            for(int j = 0 ; j < col ;  j++) 
            {
                  if(arr[i][j] < mini)
                  {
                        mini = arr[i][j];

                  }
            }
      }
      return mini ; 

}

//transpose of a matrix 
#include<iostream>
using namespace std; 

void transpose(int arr[][4], int row , int col , int transposeofmatrix[][4]); 
void printing(int arr[][4] , int row , int col); 
int main(){
      int arr[4][4] = 
      {{1,2,3,4},
       {2,3,4,1},
       {5,6,1,3},
       {1,9,9,6}};
      int row = 4; 
      int col = 4 ; 


      // // *****************************WRONG WAY OF USING THIS FOR TRANSPOSE*****************************
      // //for transpose 
      // for(int i = 0 ; i < 4 ; i++)
      // {
      //       for(int j = 0 ; j < 4 ; j++)
      //       {
      //             swap(arr[j][i] , arr[i][j] ); 
      //       }
      // }

      // //for printing all element 
      // cout << " all element of arr[][] are : " << endl ; 
      //  for(int i = 0; i < 4 ; i++)
      // {
      //       for(int j = 0 ; j < 4 ; j++)
      //       {
      //             cout << arr[i][j] << " " ; 
      //       }
      //       cout <<endl; 
      // }
      // // *****************************WRONG WAY OF USING THIS FOR TRANSPOSE*****************************
      int transposeofmatrix[4][4]; 

      //function calling for printing and transpose of given matrix 
      cout << " before transpose the matrix : " ; 
      printing(arr , row , col);
      transpose(arr, row , col , transposeofmatrix);
      cout << " After transpose the matrix :  " ;  
      printing(transposeofmatrix , row , col );
       
}
void transpose(int arr[][4], int row , int col , int transposeofmatrix[][4]){
      // outer loop 
      for(int i = 0 ; i < row ; i++){
            for( int j = 0 ; j < col ; j++)
            {
                  transposeofmatrix[j][i] = arr[i][j]; 
            }
            
      }
}
void printing(int arr[][4] , int row , int col)
{
      for(int i = 0 ; i < row ; i++)
      {
            for(int j = 0  ; j < col ; j++)
            {
                  cout << arr[i][j] << " "; 
            }
            cout << endl; 
      }
}

//initialisation and declare of an 2D array 
//1st method 
#include<iostream>
#include<vector>
using namespace std; 

int main(){
      vector<vector<int> > arr;
      vector<int> a{ 1,2,3};  
      vector<int> b{ 2 ,4, 6 }; 
      vector<int> c{ 1,3,7 }; 
      
      // if we want to add or push back any inner vector in outer vector 
      arr.push_back(a); // here all the element of array " a " is pushed in vector ( outer vector ) & ' arr' is termed as vector which is outer vector 
      arr.push_back(b); // same as above explanation 
      arr.push_back(c); 
      // for printing all element of arr array 
      cout<< " all the elements are : " << endl;  
      for(int i = 0; i < arr.size(); i++)
      {
            for(int j = 0; j < arr[i].size(); j++){
                  cout << arr[i][j] << " "; 
            }
            cout << endl ; 
      }
}

//2nd method 

#include<iostream>
#include<vector> 
using namespace std ; 

int main(){
      int row = 3 ; 
      int col = 5;
      vector<vector<int> > arr( row , vector<int>(col , -1 )); 
      
      //for printing all the element of the array 
      for(int i = 0; i < arr.size(); i++)
      {
            for(int j = 0 ; j < arr[i].size(); j++)
            {
                  cout << arr[i][j] << " "; 
            }
            cout << endl ; 
      }
}