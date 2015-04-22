void replaceSpace(string &s, int length){
  int spaceCount = 0;
  for (int i = 0; i < length; ++i)
  {
    if (s[i] == ' ') spaceCount++;
  }
  int newLength = spaceCount*2 + length;
  for (int i = length-1; i >= 0; i--)
  {
    if (s[i] == ' ')
    {
      s[newLength-1] = '0';
      s[newLength-2] = '2';
      s[newLength-3] = '%';
      newLength -= 3;
    } else {
      s[newLength-1] = s[i];
      newLength--;
    }
  }
}