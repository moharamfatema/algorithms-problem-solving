class LinearTimeSorting
{
public:
    
    std::vector<int> countingSort(std::vector<int> arr, int k)
    {
        std::vector<int> c, sorted;
        for (int i = 0; i <= k; i++)
        {
            c.push_back(0);
        }
        for (int j = 0; j < arr.size(); j++)
        {
            c[arr[j]]++;
            sorted.push_back(0);
        }
        for (int g = 1; g <= k; g++)
        {
            c[g] += c[g - 1];
        }
        for (int h = arr.size() - 1; h >= 0; h--)
        {
            sorted[c[arr[h]] - 1] = arr[h];
            c[arr[h]] -= 1;
        }
        return sorted;
    }
    std::vector<std::pair<int, int>> countingSort(std::vector<std::pair<int, int>> arr, int k = 9)
    {
        std::vector<int> c;
        std::vector<std::pair<int, int>> sorted;
        std::pair<int, int> p;
        for (int i = 0; i <= k; i++)
        {
            c.push_back(0);
        }
        for (int j = 0; j < arr.size(); j++)
        {
            c[arr[j].second]++;
            p.first = p.second = 0;
            sorted.push_back(p);
        }
        for (int g = 1; g <= k; g++)
        {
            c[g] += c[g - 1];
        }
        for (int h = arr.size() - 1; h >= 0; h--)
        {
            sorted[c[arr[h].second] - 1] = arr[h];

            c[arr[h].second] -= 1;
        }
        return sorted;
    }
    std::vector<int> radixSort(std::vector<int> arr, int noOfDigits)
    {
        std::pair<int, int> p;
        std::vector<std::pair<int, int>> pairs;
        std::vector<int> sorted;
        int divider;
        for (int i = 0; i < arr.size(); i++)
        {
            p.first = arr[i];
            pairs.push_back(p);
        }
        for (int j = 1; j <= noOfDigits; j++)
        {
            for (int i = 0; i < arr.size(); i++){
                pairs[i].second = ( pairs[i].first % (int)pow(10 , j))/(int)pow(10,j-1);
            }
            pairs = countingSort(pairs, 9);
        }
        for (int k = 0; k < pairs.size(); k++)
            sorted.push_back(pairs[k].first);

        return sorted;
    }
};