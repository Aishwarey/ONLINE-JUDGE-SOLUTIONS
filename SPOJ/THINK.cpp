/*
SPOJ submission 17341735 (C++ 4.3.2) plaintext list. Status: AC, problem THINK, contest SPOJ. By z1us (z1us), 2016-07-22 23:47:55.
*/
#include <stdio.h>
 
int count(int x){
 
return 3-(3/(x+2));
 
}
 
int main(){
 
for( int i=1 ; i-1001 ; i++ ) printf("%d %d\n",i,count(i));
 
return 0;
 
} 
