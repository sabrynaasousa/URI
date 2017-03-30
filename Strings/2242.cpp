#include <bits/stdc++.h>

using namespace std;

bool is_palindrome( const string& s )
{
  size_t N = s.size();

  for ( size_t i = 0; i < N/2; ++i )
    if ( s[i] != s[N - 1 - i] )
      return false;

  return true;
}

int main(){

  string laugh, res;

  getline( cin, laugh );

  copy_if( laugh.begin(), laugh.end(), back_inserter( res ), [&]( char c )
    {
      const string vowels { "aeiou" };

       return vowels.find(c) != string::npos;
    }
  );

  if( is_palindrome( res ) )
    cout << "S" << endl;
  else
    cout << "N" << endl;
  
  return 0;
}
