std::vector<std::vector<int>> rotateImage(std::vector<std::vector<int>> a) {

    int n = a.size();
    
	int ncopy[n][n]; int counter = n;
	
	for (int c = 0; c < n; c++)
	{
		for (int b = 0; b < n; b++)
		{
			ncopy[c][b] = a[c][b];
		}
	}

	for (int i = 0; i < n; i++) 
	{
		//counter--;
		for (int j = 0; j < n; j++) 
		{
			//a[j][counter] = ncopy[i][j];
            a[j][n - i - 1] = ncopy[i][j];
		}
	}

	return a;
}
