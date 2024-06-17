#include<iostream> 
#include<vector>
using namespace std;

int main()
{
      //create vector 
      vector<int> arr; 
      int ans = (sizeof(arr)/sizeof(int));
      cout << ans << endl;
      cout << arr.size() << endl ;
      cout << arr.capacity() << endl;

      // insert 
      arr.push_back(5);
      arr.push_back(6);

      //print 
      for( int i = 0 ; i < arr.size() ; i++)
      {
            cout << arr[i] << " ";
      }
      cout << endl;

      return 0;
} 


//find unique number 
#include<iostream>
#include<vector>
using namespace std; 

int findunique(vector<int> arr );

int main()
{
      int number;
      cout << " Give me the number of block : " ;
      cin >> number;
      vector<int> arr(number) ;

      // for taking user input 
      cout << " give me the all element : " ;
      for(int i = 0 ; i < arr.size() ; i++)
      {
            cin >> arr[i]; 

      }
      int uNique = findunique(arr); 

      cout << " the Unique Number in all element : " << uNique ; 

}

//Unique Number finding fuction 
int findunique( vector<int> arr)
{
      int ans = 0;
      for(int i = 0 ; i < arr.size(); i++)
      {
            ans = ans ^ arr[i];
      }
      return ans; 


}



//Union of two arrays 
#include<iostream>
#include<vector>
using namespace std; 

int main()
{
      int a[] = { 1, 3 ,5, 7 ,9 };
      int sizea = 5;
      int b[] = {2,4,6,8};
      int sizeb = 4;
      vector<int> arr ; 

      //push all element of a[] in arr[]
      for(int i = 0 ; i < sizea ; i++)
      {
            arr.push_back(a[i]);
      }
      
      // push all element of b[] in arr[]
      for(int j = 0 ; j < sizeb ; j++)
      {
            arr.push_back(b[j]); 

      }
      //for printing all the element of arr[]

      cout << " the Union of both array : ";
      for(int i = 0 ; i < arr.size() ; i++)
      {
            cout << arr[i] << " ";
      }
      return 0; 
      
}

//Intersection of two arrays 

#include<iostream>
#include<vector>
using namespace std; 

int main()
{
      int a[] = { 1 , 2 ,3 , 3, 4 , 6 , 8 }; 
      int sizea = 7 ; 
      int b[] = { 3 ,3 , 4 , 9 , 10 }; 
      int sizeb = 5 ; 
      
      vector<int> arr; 

      // comparing a[] & b[] through for loop 
      for( int i = 0 ; i < sizea ; i++)
      {
            for(int j = 0 ; j < sizeb ; j++)
            {
                  if( a[i] == b[j])
                  {
                        //mark 
                        b[j] = -1;  
                        arr.push_back(a[i]);
                  }

            }
      }

      //printing all element of arr[]
      cout << " the elements of arr[] : " ; 
      for(int i = 0 ; i < arr.size(); i++)
      {
            cout << arr[i] << " " ; 
      } 
      return 0  ;
}


//pair sum question 

#include<iostream>
#include<vector>
using namespace std;

int main(){ 
      int sum = 9; 
      vector<int> arr{ 1 ,3 ,5 , 7 ,2 , 4 , 6 }; 
      //for loop for outer loop 
      for( int i = 0 ; i < arr.size() ; i++)
      {
            for( int j = i + 1 ; j < arr.size() ; j++)
            {
                  if( arr[i] + arr[j] == sum )
            {
                  cout << " ( " << arr[i] << " , " << arr[j] <<  " ) " << endl;
            }
            }
      }
      return 0; 
}

//triplet sum 
#include<iostream> 
#include<vector>
using namespace std;

int main(){
      int sum =  80; 
      vector<int> arr{ 10 , 20 , 30 , 40 , 50};

      //for printing all pairs 
      cout << " The pairs of Triplet Sum : " ;  

      // here we have to check three pairs for sum so 3 for loop will apply
      for( int i = 0 ; i < arr.size(); i++)
      {
            for( int j = i + 1 ; j < arr.size(); j++)
            {
                  for( int k = j + 1 ; k < arr.size(); k++)
                  {
                        if( arr[i] + arr[j] + arr[k] == sum)
                        {
                               cout << " ( " << arr[i] << " , " << arr[j] << " , " << arr[k] << " ) " << endl;
                        }
                       

                  }
            
            }
      }
}


//sort 0's & 1's 
#include<iostream>
#include<vector> 
using namespace std; 

int main(){ 
      int start = 0; 
      vector<int> arr{ 1 , 0 ,1 ,1 ,0 ,0 ,1 ,0 , 1 , 0 ,1 };
      int end = arr.size() - 1;  
      int i = 0 ; 

      while( i != end )
      {
            if( arr[i] == 0 )
            {
                  swap(arr[i] , arr[start]); 
                  i++; 
                  start++; 

            }
            else
            {
                  swap( arr[i] , arr[end]); 
                  end--; 
            

            }
      }


      cout << " The new array arr[] : " ;
      // for printing all element 
      for( int j = 0 ; j < arr.size() ; j++)
      {
            cout << arr[j] << " " ;  
      }
      return 0 ; 
}

