#include<iostream>
#include <fstream>
#include <sstream>

using namespace std;




void read_write_file(string,string);

int main (){
   

    string file1="/home/siam/C++/jello.txt";

    string file2="/home/siam/C++/random.txt";

    read_write_file(file1,file2);


 return 0;
}

//.....................................................function,,,,,,,,,,,,,,,,,,,.....//




void read_write_file(string rfile,string wfile){


  ifstream myfile (rfile);



    //.........checking file is ok or not...........................
    if(!myfile.is_open()){ 

      cout<<" get out"<<endl;


    };
    


    string note="";
    string word="";

       while(myfile>>word){         // ">>"  reading indicator

           

         note=note +word+" " ;
          

       }
  
       

   ofstream mydock (wfile,ios_base::out | ios_base::app);



    //.........checking file is ok or not...........................
    if(!mydock.is_open()){ 

      cout<<" get out"<<endl;


    };

     
      //   mydock<<note                 // "<<" writting indicator
       
            
     //    note>>mydock;          //// (no permission for note to read or write)








}