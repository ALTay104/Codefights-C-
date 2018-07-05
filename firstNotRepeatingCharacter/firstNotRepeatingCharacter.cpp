char firstNotRepeatingCharacter(std::string s)
{
    
	int size = s.length();

	int found = 0; int minDist = INT_MAX;

    if (size == 1)
        return s[0];
    
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i != j)
			{
				int a = s[i], b = s[j];
				if (s[i] == s[j])
				{
					break;
				}
				else if (j == size - 1)
				{
					return (s[i]);
				}
			}
		}
	}

	return ('_');
}
