int firstDuplicate(std::vector<int> a) {
    
    int count = 0; int curr_count = 0xFFFF; int curr_value = 0;
    int size = 0;
    
    for (std::vector<int>::iterator it = a.begin(); it != a.end(); ++it)
    {
        size++;
    }

    int temp, dupFound = 0;
    int dist, minDist = INT_MAX;
    for (int i = 0; i < size ; i++)
    {
        count = 0;
        
        for (int j = i + 1; j < size; j++)
        {
            count++;
            
            if (a[i] == a[j])
            {
                dist = count;
                
                //check which a[] has smaller count
                if (dist < minDist)
                {
                    dupFound = a[i];
                    minDist = dist;
                }
                break;
            }      
        }
    }
    
    //if no duplicate 
    if (0 == dupFound) 
    { 
        return -1;
    }
    else
    {
        return dupFound;
    }
}
