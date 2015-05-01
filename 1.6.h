  for (int layer = 0; layer < n; ++layer)
  {
    int first = layer;
    int last = n-1-layer;
    for (int j = first; j < last; ++j)
    {
      int offset = j - first;
      int tmp  = a[first][j];
      a[first][j] = a[last - offset][first];
      a[last-offset][first] = a[last][last-offset];
      a[last][last-offset] = a[j][last];
      a[j][last] = tmp; 

    }
  }