// #include<iostream>
// using namespace std;

// int main(){
//       char name[100]; 
//       cin >> name; 
//       // cout << name << endl; 
//       cin.getline(name,50); 
//       for(int i = 0 ; i < 17 ; i++)
//       {
//             cout << " THe index :  " << i << " Value " << name[i] << endl; 
//       }
//       int value= (int)name[17]; 
//       cout << value ; 
//       return 0 ; 
// }

// #include<iostream>
// #include<string.h>
// using namespace std;

// int getlength(char name[]){
//       int length = 0 ;
//       int i = 0 ;
//       while(name[i]!= '\0')
//       {
//             length++; 
//             i++ ; 
//       }
//       return length ; 
// }
// int main(){
//       char name[100]; 
//       cin >> name; 
//       // cout << name << endl; 
//       cin.getline(name,50); 
//       // for(int i = 0 ; i < 17 ; i++)
//       // {
//       //       cout << " THe index :  " << i << " Value " << name[i] << endl; 
//       // }
//       // int value= (int)name[17]; 
//       // int value = getlength(name); 
//       cout << getlength(name) << endl ; 
//       cout << strlen(name); // ( built function )
//       return 0 ; 
// }

// ************************************* reverse a string *************************************************
//length of string 
//
// #include<iostream>
// using namespace std ; 

// int getlength(char ch[]); 
// void replacespace(char ch[]){
//       int i = 0 ; 
//       int n = getlength(ch); 
//       for(int i = 0 ; i< n ; i++)
//       {
//             if(ch[i] == ' ')
//             {
//                   ch[i] = '@';
//             }
//       }
//       cout << ch; 
// } 
// int getlength(char ch[]){
//       int length = 0 ;
//       int i = 0 ;
//       while(ch[i]!= '\0')
//       {
//             length++; 
//             i++; 
//       }
//       return length ; 
// }
// // void reversechar(char ch[]){
// //       int i = 0 ; 
// //       int n = getlength(ch); 
// //       int j = n - 1; 
// //       while(j>=i)
// //       {
// //             swap(ch[i] , ch[j]); 
// //             i++ ; 
// //             j--; 
// //       }
// //       cout << ch << endl ; 
// // }
// int main(){
//       char ch[100]; 
//       cin.getline(ch,50); 
//       // cin.getline(ch , 6); 
//       //  reversechar(ch) ;
//       cout << getlength(ch) << endl; 
//       // reversechar(ch); 
//       replacespace(ch); 

//       return 0; 
// }

// // panidrome 
// #include<iostream>
// #include<string.h>
// using namespace std; 

// bool checkpalidrome(char ch[]){
//       int i = 0 ;
//       int j = strlen(ch) -1 ; 
//       while( i <= j)
//       {
//             if(ch[i] != ch[j])
//             {
//                   return false; 
//             }
//             else
//             {
//                   i++ ; 
//                   j--;
//             }
//       }
//       return true ; 
// }
// int main(){
//       char ch[100];
//       cin.getline(ch , 99);
//       cout << checkpalidrome(ch); 
//       return 0 ; 
// }

// // ******************Converting upper case to lower and lower to upper *********
// #include<iostream>
// using namespace std; 

// int getlength(char arr[]){
//       int length = 0 ;
//       int i = 0 ;
//       while(arr[i]!= '\0')
//       {
//             length++; 
//             i++; 
//       }
//       return length ; 
// }
// void lowerCaseToUpper( char arr[]){
//       int n = getlength(arr); 
//       for(int i = 0 ; i<n ; i++)
//       {
//             arr[i] = arr[i] - 'a' + 'A'; 
//       }
// }
// int main(){
//       char arr[100] = "mdshajid"; 
//       lowerCaseToUpper(arr);
//       cout << arr ;  
// }

// // string built in function     
// #include<iostream>
// #include<string.h>
// using namespace std; 


// for comparing twp string 
// bool compareString(string a , string b )
// {
//       if(a.length() != b.length())
//       {
//             return false ; 
//       }
//       else 
//       {
//             int j = 0 ; 
//             for(int j= 0 ; j< a.length(); j++)
//             {
//                   if(a[j] != b[j]){
//                         return false ; 
//                   }
//                   j++; 
//             }
//       }
//       return true ; 
// }
// int  main(){
      // string create 
      // string str; 
      // string a ; 
      // string b ; 
      // // input
      // // cin >> str ; 
      // getline(cin , str ); 
      // getline(cin , a); 
      // getline(cin , b); 
      
      
      // // cout << str << endl  ; 
      // // cout << str << endl  ; 
      // // cout << " Length : " << str.length() << endl ; 
      // // cout << " Empty : " << str.empty() << endl ;
      // // // " adding character " 
      // // str.push_back('A'); 
      // // cout << " after adding " << str << endl;
      // // str.pop_back(); 
      // // cout << " After removing " <<  str << endl ; 
      // // cout <<" substring ( finding small component ) {subs} "<< str.substr(0 , 3 ) << endl ; 
      // // string a = " Love";
      // // string b = " lover "; 
      // // if(a.compare(b) == 0 )
      // // {
      // //       cout << " a and b are exactly same " << endl ; 
      // // }
      // // else 
      // // {
      // //       cout << " a and b are not exactly same " << endl ; 
      // // }
      // cout << compareString( a , b ) << endl ; 

      //comparison throgh built in function 
//       string x =  " acda "; 
//       string y = " cbcd" ; 
//       cout << x.compare(y) << endl ; 
//       return 0 ; 
// }

