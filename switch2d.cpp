//compile g++ switch2d0.cpp -o switch2d0.o
#include <iostream>
using namespace std;
#include <stdio.h>

int main()
{
		int r,c;//row and column
		string word = "Bible";
		
		int val = 0;
		int m[6][28] = {
			{1,1,1,0,1,0,0,0,1,1,1,0,1,0,1,0,1,1,1,0,1,1,1,0,0,2,0,0} ,
			{1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,0,1,1,0,0} ,
			{1,1,1,0,1,0,0,0,1,1,1,0,1,1,1,0,1,1,1,0,0,1,0,0,0,1,0,0} ,
			{1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,0,1,0,0,1,0,0,0,1,0,0} ,
			{1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,0,1,0,0,1,0,0,0,1,0,0},
			{1,0,1,0,1,1,1,0,1,0,0,0,1,0,1,0,1,0,1,0,0,1,0,0,1,1,1,3}
		};

		  for (r = 0; r < 6; r++){
			for (c = 0; c < 28; c++){
			  val = m[r][c];
			    switch ( val ) {
					case 1:            // Note the colon, not a semicolon
					    word= "|||";
 					   break;
  					case 2:            // Note the colon, not a semicolon
  					  word="|| ";
  					  break;
					  case 3:            // Note the colon, not a semicolon
  					  word="ALPHA T1";
  					  break;
					 default:            // Note the colon, not a semicolon
   					 word=" 0 ";
  					  break;
 					 }
			 
				  cout<<word;
			}
			cout<<"\n";
		}
	return 0;
}
