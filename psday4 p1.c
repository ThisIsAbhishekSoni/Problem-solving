int checkPalindrome(int number)
{
  int temp, remainder, rev=0;
  temp = number;
  while( number!=0 )
  {
     remainder = number % 10;
     rev = rev*10 + remainder;
     number /= 10;
  }

  if ( rev == temp ) return 0;
  else return 1;
}
